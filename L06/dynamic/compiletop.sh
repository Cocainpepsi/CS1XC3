cd /home/dev/Desktop/CS1XC3/L06/dynamic
if [ -z "$1"  ] 
	then
    echo "Please give path to shared object file, the loader doesn’t know where to find the shared object file."

echo "Enter PATH: " 
read path
gcc -L$path -Wl,-rpath=$path -Wall -o test top.c -lLab6Part5
./test
exit 0
	fi
path=$1
gcc -L$path -Wl,-rpath=$path -Wall -o test top.c -lLab6Part5
./test
