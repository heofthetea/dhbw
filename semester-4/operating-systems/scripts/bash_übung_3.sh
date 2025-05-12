read -rp "enter number: " number



is_prime () {
    end=$(echo $number | awk '{print sqrt($1)}' | cut -d ',' -f1)

    if [ $number -le 1 ]; then
        echo "$number is not prime"
        exit 0
    fi
    
    for i in $(seq 2 $end); do
        if [ $((number % i)) -eq 0 ]; then
            echo "$number is not prime"
            exit 0
        fi
    done
    echo "$number is prime"
}


is_prime $number