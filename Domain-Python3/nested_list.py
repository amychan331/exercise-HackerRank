#!/usr/bin/env python
# nested_list.py
"""Hacker Rank: Python Domain - Nested List

Given number of students and their names & grades as input, store them 
in nested list and print name(s) of students with 2nd lowest grade in order.

URL: https://www.hackerrank.com/challenges/nested-list
Author: Amy Yuen Ying Chan

"""

students = sorted([ [input(), float(input())] for _ in range(int(input()))])
scores = sorted(list(set([s for _,s in students])))
[print(n) for n,s in students if s == scores[1]]