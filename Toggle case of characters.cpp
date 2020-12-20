/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-toggle-case-of-characters
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    for(auto i:s) {
        //cout<<(int)i<<" "<<(char)((int)i);
        (int)i<97?cout<<(char)((int)i+32):cout<<(char)((int)i-32);
    }
    return 0;
}
