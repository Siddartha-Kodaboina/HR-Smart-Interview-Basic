/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-matrix-column-sum
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin>>n>>m;
    vector<int> arr(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            arr[j]+=k;
        }
    }
    for(int i=0;i<m;i++) cout<<arr[i]<<endl;
    return 0;
}
