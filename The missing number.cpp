/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-the-missing-number
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t=50*101,s=0;
    for(int i=0;i<99;i++){
        int k;
        cin>>k;
        s+=k;
    }
    cout<<t-s;
    return 0;
}
