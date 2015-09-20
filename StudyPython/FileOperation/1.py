#!/usr/bin/python

import os
import fileinput 

f=open('test.ini','r')
for line in f.readlines():
    line=line.strip("\n").split(':')
    print (line)
