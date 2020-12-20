/*
authour : steve
date: 20-12-2020
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int ans=INT_MIN;
    while(n--){
        int k;
        cin>>k;
        ans=max(ans,k);
    }
    cout<<ans;
    return 0;
}