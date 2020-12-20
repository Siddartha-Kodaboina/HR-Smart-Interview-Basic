/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-harshad-number
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long int


int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int  n;
    cin>>n;
    int temp=n,s=0;
    while(temp){
        s+=temp%10;
        temp/=10;
    }
    if(n%s) cout<<"No";
    else cout<<"Yes";
    return 0;
}
