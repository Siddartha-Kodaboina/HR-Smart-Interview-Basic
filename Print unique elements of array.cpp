/*
authour : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-print-unique-elements-of-array/problem
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    unordered_map<int,int> map;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]++;
    }
    for(int i=0;i<n;i++) if(map[arr[i]]==1) cout<<arr[i]<<" ";
    return 0;
}
