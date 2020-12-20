/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-find-duplicate-element-in-array/problem
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    unordered_map<int,bool> map;
    int ans;
    while(n--){
        int k;
        cin>>k;
        if(map[k]) ans=k;
        map[k]=true;
    }
    cout<<ans;
    return 0;
}