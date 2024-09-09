from stalin_sort import stalin_sort
from random import randint
from datetime import date
from time import sleep


""" 
A sorting algorithm which does anything except actually sorting the passed list.
Currently, what the algorithm does is determined by the length of the given list, however it might be a fun idea to simply randomize the behavior.

Further ideas for stupid things the algorithm could do are welcome.
"""
def excel_sort(arr: list) -> list:
    match len(arr) % 9:
        case 0:
            return shuffle(arr)
        case 1:
            sleep(10)
            return arr
        case 2:
            return []
        case 3:
            return [date.fromordinal(n) for n in arr]
        case 4:
            split = randint(0, len(arr) - 2)
            return sorted(arr)[
                randint(0, split) : randint(split + 1, len(arr) - 1)
            ]  # retuns a random subset of the sorted list
        case 6:
            return stalin_sort(arr)
        case 7:
            raise RuntimeError("Die Ausnahme")
        case 8:
            return [len(arr)] * len(arr)


def shuffle(arr):
    for i in range(len(arr)):
        j = randint(0, len(arr) - 1)
        arr[i], arr[j] = arr[j], arr[i]



if __name__ == "__main__":
    arr = [randint(0, 32000) for _ in range(5 * 9 + 7)]
    arr = excel_sort(arr)
    print(arr, len(arr))


