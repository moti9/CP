#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      motik
#
# Created:     11-12-2021
# Copyright:   (c) motik 2021
# Licence:     <your licence>
#-------------------------------------------------------------------------------

s=input("Enter a string= ")

l=len(s)

for i in range(l):
    s.replace('pi','3.14')

print(s)