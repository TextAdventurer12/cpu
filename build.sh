if [[ $1 == '-f' ]]
then
for i in *.c
do
    b=$(basename $i .c)
    tm=$(stat -c '%Y' $i | tr -d '\n')
    echo "Compiling $i"
    gcc -c -o objects/$b.o $i
    echo $tm > build_time/$b.tm
done
else
for i in *.c
do
    b=$(basename $i .c)
    tm=$(stat -c '%Y' $i | tr -d '\n')
    tc=$(cat build_time/$b.tm)
    if [[ $? -eq 1 ]]
    then
    echo 0 > build_time/$b.tm
    tc=$(cat build_time/$b.tm)
    fi
    if [[ $tm -gt $tc ]]
    then
    echo "Re-compiling $i"
    gcc -c -o objects/$b.o $i
    echo $tm > build_time/$b.tm
    fi
done
echo "-------"
gcc -o proj objects/*.o
if [[ $? -ne 0 ]]
then
    echo "-----------"
    echo "Compiler Error: $?"
else
    ./proj "$@"
    echo "-----------"
    echo "Returned: $?"
fi
fi