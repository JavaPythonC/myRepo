#! /bin/bash
echo "Please input file name"
read filename
while read line
do 
    echo $line
done < $filename 
