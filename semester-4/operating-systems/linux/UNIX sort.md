> Sorts the lines in a passed filename.
> Can be used in pipelines.

[[UNIX generate file of random strings]]


```bash
sort <filename>
```
- sorts alphabetically per default
- `-g`: sort by generic numeric values
- `-V`: sort by version numbers lol
- `-s`: stable - don't really notice anything

### in pipelines
Uses [[shuf]] to generate random data
```bash
shuf -i 0-100 -n 100 | sort -g
```
- generates a list of random numbers and immediately sorts them


## Implementation
[[Merge Sort]], more specifically [[k-way Merge]]
Source code: https://github.com/coreutils/coreutils/blob/master/src/sort.c#L3337
- [[unix-sort.c]] ; line 3087


--> [[Donald Knuth - Art of Computer Programming - Volume 3 (Sorting & Searching).pdf#page=]]