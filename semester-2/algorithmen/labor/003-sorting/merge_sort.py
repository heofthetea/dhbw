def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    arr_l = arr[: len(arr) // 2]
    arr_r = arr[len(arr) // 2 :]
	
    return merge(
		merge_sort(arr_l),
		merge_sort(arr_r),
		[]
    )


def merge(arr_l, arr_r, out):
	if len(arr_l) == 0:
		out.extend(arr_r)
		return out

	if len(arr_r) == 0:
		out.extend(arr_l)
		return out

	if arr_l[0] < arr_r[0]:
		out.append(arr_l[0])
		return merge(arr_l[1:], arr_r, out)

	out.append(arr_r[0])
	return merge(arr_l, arr_r[1:], out)


if __name__ == "__main__":
    arr = [1, 4, 32, 6, 3, 6, 29, 14, 58, 19, 0, 7, 12]
    # arr = [2, 17, 5, 3]

    print(arr)
    print(merge_sort(arr))

    # print(merge([1, 3, 4, 10, 13, 20, 25], [2, 5, 6, 8, 10], []))
    # assert merge([1, 3, 4], [2, 5, 6], []) == [1, 2, 3, 4, 5, 6]
