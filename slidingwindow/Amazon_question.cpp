// Question link - https://drive.google.com/file/d/1QUgMhIVafZU9QqHL981dmWbN3XwgmUbt/view

// The main point is to find the maximum sum of a subarray which contains k distinct elements in it.
#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n, int k){
     unordered_map<int, int> mp;
     int i = 0, j = 0, sum = 0, maxi = -1;
     while(j < n){
        sum += arr[j];
        mp[arr[j]]++; 
        if(j - i + 1 < k){
            j++; 
        }
        else if( j - i + 1 == k){
            if(mp.size() == k){
                maxi = max(maxi, sum);
            }
             sum -= arr[i];
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                mp.erase(arr[i]);
            }
            i++;
            j++;
        }
        

     }
     return maxi;
}

int main(){
    int n = 7, k  = 3;
    int arr[n] = {2,3,7,7,4,3,6};
    cout << solve(arr, n , k) << endl;
    return 0;
}