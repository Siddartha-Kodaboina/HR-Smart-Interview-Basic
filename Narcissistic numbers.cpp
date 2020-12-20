/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-narcissistic-numbers
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int ctr=0,temp=n;
    while(temp){
        ctr++;
        temp/=10;
    }
    temp=n;
    int sum=0;
    while(temp){
        int k=temp%10;
        sum+=pow(k,ctr);
        temp/=10;
    }
    if(sum==n) cout<<"Yes";
    else cout<<"No";
    return 0;
}