#!/usr/bin/env python
# find_a_string.py
"""Hacker Rank: Python Domain - Find A String

User inputs a string and a substring. 
Print how many times substring occurs in given string.
Decided to git it cause I had fun trying to change the loop into one line only.

URL: https://www.hackerrank.com/challenges/find-a-string
Author: Amy Yuen Ying Chan

"""

s = input()
sub = input()
sublen = len(sub)

print(sum([1 for i in range(len(s)) if s[i:i+sublen] == sub ]))