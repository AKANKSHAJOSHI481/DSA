#include<bits/stdc++.h>
using namespace std;
bool solve(int* arr ,int n, int k, int target){
    int i = 0, j = 0;
    int sum = 0;
    while(j < n){
        if(j-i+1 <= k){
            sum += arr[j];
            if(j-i+1 == k){
                if(sum == target) return true;
            }
            j++;
        }
        else{
            sum -= arr[i];
            i++;
        }
    }
    return false;
}

int main(){
    int n = 9, k = 4, sum = 17;
    int arr[n] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    bool ans = solve(arr, n, k, sum);
    cout << ans << endl;
    return 0;
}