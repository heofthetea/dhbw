# NEED TO IMPLEMENT THE WARNDORFF HEURISTIC
from time import time

board = []


def main():
    print("hello")
    dimensions = 3
    start = input("enter starting coordinate: ")

    start_time = time()
    start = (int(start[1]) - 1, ord(start[0]) - 97)

    print(f"translated to program representation of board: {start}\n")
    for _ in range(0, int(dimensions)):
        board.append([0] * int(dimensions))

    knight_jump(start, 1)
    end_time = time()
    print_board(board)
    print(f"\ntime taken: {end_time - start_time} sec")


knight_jumps = {
    (2, 1),
    (1, 2),
    (2, -1),
    (1, -2),
    (-1, 2),
    (-1, -2),
    (-2, -1),
    (-2, 1),
}


def get_possible_jumps(current: tuple, bo):
    jumps = []
    for relative in knight_jumps:
        jump_to = (current[0] + relative[0], current[1] + relative[1])
        if not is_valid(jump_to, bo):
            continue
        degree = get_degree(jump_to, bo)

        pos = 0
        for i in range(len(jumps)):
            if get_degree(jumps[i], bo) < degree:
                pos += 1
        jumps.insert(pos, jump_to)

    possible_jumps = []
    for option in jumps:
        if not bo[option[0]][option[1]]:
            possible_jumps.append(option)

    return possible_jumps


def get_degree(coordinate, bo):
    count = 0
    for relative in knight_jumps:
        temp = (coordinate[0] + relative[0], coordinate[1] + relative[1])
        if is_valid(temp, bo):
            if not bo[temp[0]][temp[1]]:
                count += 1
    return count


def print_board(board):
    # reverse the board to have rows corresponding to actual chess board
    for row in reversed(board):
        row_format = "["
        for cell in row:
            row_format += "{0:02d}, ".format(cell)
        print(f"{row_format[:-2]}]")


def is_valid(coordinate, bo):
    return (coordinate[0] in range(0, len(bo[0]))) and (
        coordinate[1] in range(0, len(bo))
    )


def full(board):
    for row in board:
        for cell in row:
            if not cell:
                return False
    return True


def knight_jump(coordinates, move):
    board[coordinates[0]][coordinates[1]] = move

    if full(board):
        return True

    jumps = get_possible_jumps(coordinates, board)
    for jump in jumps:
        if knight_jump(jump, move + 1):
            return True

    board[coordinates[0]][coordinates[1]] = 0
    return False


if __name__ == "__main__":
    main()
