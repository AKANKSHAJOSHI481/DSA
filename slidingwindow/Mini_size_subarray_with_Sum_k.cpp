#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n, int target){
    int i = 0, j = 0;
    int mini = INT_MAX;
    int sum = 0;
    while(j < n){
        sum += arr[j];
        while(sum >= target){
            if(sum == target)
            mini = min(mini, j - i + 1);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    if(mini == INT_MAX){
        return 0;
    }
    return mini;
}

int main(){
    int n = 5, target = 10;
    int arr[n] = {1,5,4,6,9};
    cout << solve(arr, n, target) << endl;
    return 0;
}