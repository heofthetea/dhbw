for i in {1..30}; do
    for n in {2..9}; do
        if [ $(($i % $n)) -eq 0 ] ; then
            echo "$i can be divided by $n"
        fi
    done
done