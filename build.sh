gcc *.c -o proj "$@"
if [[ $? -ne 0 ]]
then
    echo "------------------"
    echo "COMPILATION ERROR:"
    echo $?
else
    echo "------------------ Running:"
    ./proj
    echo "---------------------------"
    echo "COMPLETED WITH RETURN CODE:"
    echo $?
fi