def lexgreater(left: str, right: str):
    for i, c in enumerate(left): 
        if c < right[i]:
            return False
        if i + 1 == len(right):
            return True
    if len(right) > len(left):
        return False
    return True



def lexgreater_r(left, right):
    if len(left) == 0:
        return len(right) == 0
    if len(right) == 0:
        return len(left) > 0
    
    if left[0] < right[0]:
        return False
    
    return lexgreater_r(left[1:], right[1:])




if __name__ == "__main__":
    assert lexgreater_r("b", "a") == True
    assert lexgreater_r("a", "b") == False
    assert lexgreater_r("abc", "abb") == True
    assert lexgreater_r("abc", "abd") == False
    assert lexgreater_r("abc", "ab") == True
    assert lexgreater_r("ab", "abc") == False
    assert lexgreater_r("abc", "abc") == True
    print("All tests passed.")
