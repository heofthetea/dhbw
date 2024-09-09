from levenshtein import levenshtein, levenshtein_d

# Test case 1: Same strings
assert levenshtein("test", "test") == 0
assert (
    levenshtein_d(
        "test",
        "test",
        0,
        0,
        [[None] * (len("test") + len("test"))] * (len("test") + len("test")),
    )
    == 0
)

# Test case 2: One empty string
assert levenshtein("", "test") == 4
assert (
    levenshtein_d(
        "",
        "test",
        0,
        0,
        [[None] * (len("test") + len(""))] * (len("test") + len("")),
    )
    == 4
)

# Test case 3: Both empty strings
assert levenshtein("", "") == 0
assert (
    levenshtein_d(
        "",
        "",
        0,
        0,
        [[None] * (len("") + len(""))] * (len("") + len("")),
    )
    == 0
)

# Test case 4: Different strings
assert levenshtein("kitten", "sitting") == 3
assert (
    levenshtein_d(
        "kitten",
        "sitting",
        0,
        0,
        [[None] * (len("kitten") + len("sitting"))] * (len("kitten") + len("sitting")),
    )
    == 3
)

# Test case 5: Different lengths
assert levenshtein("abc", "defgh") == 5
assert (
    levenshtein_d(
        "abc",
        "defgh",
        0,
        0,
        [[None] * (len("abc") + len("defgh"))] * (len("abc") + len("defgh")),
    )
    == 5
)
