// #include<bits/stdc++.h>
#include<iostream>

using namespace std;
int solve(int* array, int n, int m){
    //  cout << n << " " << m << endl;
     int sum = 0;
     for(int i = 0; i < n; i++){
        sum += array[i];
     }
     int res = 0;
     for(int i = 0; i < n-m+1; i++){
        // cout << "i = " << i << endl;
        int sum1 = 0;
        for(int j = i; j < i+m; j++){
            // cout << " j = " << j;
            sum1 += array[j];
        }
        // cout << endl;
        // cout << "sum1 = " << sum1 << endl;
        res = max(res, sum1);
     }
    //  cout << "sum = " << sum << "result = " << res << endl;
     return sum - res;
}

int main(){
    int n = 5, m = 2;
    int array[5] = {10, 4 , 8, 13, 20};
    cout << solve(array, n, m) << endl;

    return 0;
}