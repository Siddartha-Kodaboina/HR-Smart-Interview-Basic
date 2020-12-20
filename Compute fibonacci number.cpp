/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-compute-fibonacci-number
*/
#include <bits/stdc++.h>
using namespace std;
int doit(vector<int>& arr,int n){
    if(n==0 || n==1) return n;
    if(arr[n]!=-1) return arr[n];
    return arr[n]=doit(arr,n-1)+doit(arr,n-2);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> arr(n+1,-1);
    cout<<doit(arr,n);
    return 0;
}
