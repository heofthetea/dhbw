

def stalin_sort(arr: list[int]):
    i = 0
    while i < len(arr) - 1:
        if arr[i] > arr[i + 1]:
            arr.pop(i + 1)
            continue
        i += 1
    return arr




if __name__ == "__main__":
    a = [1, 4, 2, 4, 9, 8, 2, 7, 0, 2 ,10]
    print(stalin_sort(a))
    raise RuntimeError("Die Ausnahme")