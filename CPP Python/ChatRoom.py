#Problem:
#Name:
#Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#define ll = long long;
def can_say_hello(s):
    hello = 'hello'
    j = 0
    for i in range(len(s)):
        if ((s[i] == hello[j]) and j<5):
            j += 1
        if j == len(hello):
            print('YES')
            return
    print('NO')
can_say_hello(input())