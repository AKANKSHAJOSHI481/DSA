#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int* f = new int[n];
    int* t = new int[n];
    for(int i = 0; i <n; i++){
        cin >> f[i] >> t[i];
    }
    vector<int> ans;
    for(int i = 0; i <n; i++){
        if(t[i] > k){
            // ans[i] = f[i] - t[i] + k;
            ans.push_back(f[i] - t[i] + k);
        }
        else{
            // ans[i] = f[i];
            ans.push_back(f[i]);
        }
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}