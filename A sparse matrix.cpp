/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-a-sparse-matrix
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<n*m;i++) {
        int k;
        cin>>k;
        if(k==0) ans++;
    }
    if((ans<<1)>n*m) cout<<"Yes";
    else cout<<"No";
    return 0;
}
