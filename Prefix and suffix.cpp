/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-prefix-and-suffix/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int i=1,j=0,n=s.size();
    vector<int> arr(n,0);
    while(i<n){
        if(s[i]==s[j]){
            j++;
            arr[i]=j;
            i++;
        }else{
            if(j!=0){
                j=arr[j-1];
            }
            else{
                i++;
            }
        }
    }
    cout<<arr[n-1];
    return 0;
}
