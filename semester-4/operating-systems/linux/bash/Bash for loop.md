[[Bash Array]]
```bash
#!/bin/bash

images=( 0 1 2 3 4 5 6 )

for value in ${images[@]}
do
        if (( $value < 3 )); then
                continue
        fi
        echo $value
done
```

- work kinda like an [[Enhanced for loop]] in python

### do something n times
either use [[unix seq]]
or:
```bash
for i in {1..10..2}; do
	echo $i
done
```

- Reihenfolge: `start...end...increment`