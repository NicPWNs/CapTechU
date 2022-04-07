# -*- coding: utf-8 -*-
"""
Created on Tue Apr 10 15:32:54 2018

@author: Nic
"""

f = open ("question1python.txt", "w+")

while True:
    userInput = input("Enter data for file:")
    if userInput == "exit":
        break
    f.write (userInput);