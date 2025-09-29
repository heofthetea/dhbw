#!/bin/bash

arr=()

while :
do
    read -p "> " input
    arr+=($input)
    if [[ $input -eq -1 ]]; then
        break;
    fi
done

sum=0
prod=1
for i in ${arr[@]}; do
    sum=$(( sum + i ))
    prod=$(( prod * i ))
done

echo $sum
echo $prod

