/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-binary-search-on-array
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n,target;
bool doit(vector<int>& arr,int l,int r){
    if(l>r) return false;
    int m=(l+r)/2;
    if(arr[m]==target) return true;
    else if(arr[m]>target) return doit(arr,l,m-1);
    else return doit(arr,m+1,r);
}
int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n>>target;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool dec=doit(arr,0,n-1);
    dec?cout<<"true":cout<<"false";
    return 0;
}
