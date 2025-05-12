#!/bin/bash

template="powershell_vii_template.md"
csv="powershell_vii_data.csv"
delimiter=","

template_names=()

data=()
read_csv() {
    while IFS= read -r line; do
        data+=("$line")
    done < "$csv"
    template_names=($(echo "${data[0]}"| sed "s/,/ /g"))
    data=("${data[@]:1}")
}

read_csv

for ii in ${!data[@]}; do
    row_split=($(echo "${data[$ii]}"| sed "s/,/ /g"))
    cp -f $template powershell_vii_output_$ii.md 
    for i in ${!template_names[@]}; do
        
        placeholder="__${template_names[$i]^^}__"
        sed -i "s/$placeholder/${row_split[$i]}/g" powershell_vii_output_$ii.md
    done

done

