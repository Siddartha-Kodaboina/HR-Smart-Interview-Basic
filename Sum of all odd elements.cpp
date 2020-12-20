/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-sum-of-odd-elements/problem
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int k;
        cin>>k;
        if(k&1) ans+=k;
    }
    cout<<ans;
    return 0;
}
