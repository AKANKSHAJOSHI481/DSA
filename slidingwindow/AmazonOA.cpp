// #include<bits/stdc++.h>
#include<iostream>

using namespace std;
int solve(int* array, int n, int m){
     int sum = 0;
     for(int i = 0; i < n; i++){
        sum += array[i];
     }
     for(int i = 0; i < n; i++){
        int sum1 = 0;
        for(int j = 0; j < m; j++){

        }
     }
}

int main(){
    int n, m;
    cin >> n >> m;
    int* array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << solve(array, n, m) << endl;

    return 0;
}