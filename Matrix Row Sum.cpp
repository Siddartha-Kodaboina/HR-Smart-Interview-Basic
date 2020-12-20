/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-matrix-row-sum
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            sum+=k;
        }
        cout<<sum<<endl;
    }
    return 0;
}
