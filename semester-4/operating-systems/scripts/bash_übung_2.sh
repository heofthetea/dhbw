
# (test $# -eq 3  || echo nein  exit 1) || exit 1
# test $# -eq 3  || { echo "Require 3 parameters" ; exit 1; }
(test $# -ne 3 && echo "requires 3 parameters") && exit 1
case ${1^^} in
    "ADD")
        expr $2 + $3
        ;;
    "MUL")
        expr $2 * $3
        ;;
    "SUB")
        expr $2 - $3
        ;;
    "DIV")
        expr $2 / $3
        ;;
    *)
    echo "invalid operator $1"
    exit 2
    ;;
esac