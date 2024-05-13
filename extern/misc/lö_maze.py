visited = []

DIRECTIONS = ["North", "East", "South", "West"]


def coordinate_in_direction(pos: tuple[int, int], direction: str):
    if direction == "North":
        return (pos[0], pos[1] + 1)
    if direction == "East":
        return (pos[0] + 1, pos[1])
    if direction == "South":
        return (pos[0], pos[1] - 1)
    if direction == "West":
        return (pos[0] + 1, pos[1])
    

def get_pos_x():
    return 0

def get_pos_y():
    return 0

def move(target: str):
    pass

def dfs():
    current_position = (get_pos_x(), get_pos_y()) 
    visited.append(current_position)
    for dir in DIRECTIONS:
        move_to = coordinate_in_direction(current_position)
        if move_to in visited:
            continue
        move(dir)
        dfs()
    


