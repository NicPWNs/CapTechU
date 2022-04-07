# -*- coding: utf-8 -*-
"""
Created on Tue Apr 10 16:13:33 2018

@author: Nic
"""
import pickle

dict1 = {'cat':'meow', 'dog':'woof', 'cow':'moo'}

f = open ("question6python.txt", "wb")

pickle.dump(dict1, f)
f.close()