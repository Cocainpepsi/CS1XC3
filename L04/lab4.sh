#!/bin/bash
WDIR="$1"
cd "${WDIR}"
let num=$#
name="file1"
j=0;

if [ $num -gt 3 ] ; then
  if [ -f "excess.txt" ];then
   rm excess.txt
   touch  excess.txt
   else
   touch  excess.txt
   fi
  for i in $*
  do
    j=`expr $j + 1`; 
    if [ $j -gt 3 ] ; then
      echo $i >> excess.txt
    fi
  done
else
  
if [ $num -eq 3 ] ; then
  name="$3"
fi

if [ "$2" = 1 ] ; then
	if [ -f "${name}.txt" ];then
   :
   else
   echo "${USER}" > $name.txt 
   fi
   
elif [ "$2" = 2 ] ; then
	if [ ! -d "backup" ];then
   mkdir backup
   cp $name.txt backup
   else
   cp $name.txt backup
   fi


elif [ "$2" = 3 ] ; then
	if [  -f "backup/$name.txt" ];then
   cp backup/$name.txt ./
   rm backup/$name.txt
   fi
fi

fi

echo "Finished"
