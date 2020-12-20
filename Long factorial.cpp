/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-long-factorial
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long int
int doit(int n){
    if(n==0 || n==1 ) return 1;
    return n*doit(n-1);
}
int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<doit(n);
    return 0;
}
