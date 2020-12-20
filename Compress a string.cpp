/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-compress-a-string
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    char cur=s[0];
    int ctr=1;
    for(int i=1;i<(int)s.size();i++){
        if(cur!=s[i]){
            cout<<cur<<ctr;
            cur=s[i];
            ctr=1;
            continue;
        }
        ctr++;
    }
    cout<<cur<<ctr;
    return 0;
}
