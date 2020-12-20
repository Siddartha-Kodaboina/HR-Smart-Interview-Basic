/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-reverse-array/problem
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n;
void doit(int ind){
    if(ind==n) return;
    int k;
    cin>>k;
    doit(ind+1);
    cout<<k<<" ";
}
int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin>>n;
    doit(0);
    return 0;
}
