/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-check-bit
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,bit;
    cin>>num>>bit;
    if(num&(1<<bit)) cout<<"true";
    else cout<<"false";
    return 0;
}
