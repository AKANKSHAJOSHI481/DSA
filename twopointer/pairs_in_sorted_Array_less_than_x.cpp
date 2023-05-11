#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n, int x){
     int i = 0;
     int j = n-1;
     int count = 0;
     while(i < j){
        if(arr[i] + arr[j] >= x){
            count += j-i;
            j--;
        }
        else{
            i++;
        }
     }
     return count;
}

int main(){
    int n = 6, x = 7;
    int arr[n] = {1,3,7,9,10,11};
    cout << solve(arr ,n, x);
    return 0;
}