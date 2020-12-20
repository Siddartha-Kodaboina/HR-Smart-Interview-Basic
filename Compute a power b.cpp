/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-compute-a-power-b
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n,m;
int doit(){
    int res=1,dup=n;
    while(m){
        if(m&1){
            res*=dup;
            m--;
        }else{
            dup*=dup;
            m>>=1;
        }
    }
    return res;
}

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    cin>>n>>m;
    cout<<doit();
    return 0;
}
