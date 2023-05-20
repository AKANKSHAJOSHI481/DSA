// Question link - https://www.desiqna.in/12812/morgan-sde1-coding-questions-and-solutions-india-april-2023
// Question - Given an array of size n, find subarrays whose size is k and they are strictly increasing.
// ##Optimal solution
#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n, int k){
     int count = 0;
     int i = 0, j = 0;
     while(j < n-1){
        if(arr[j+1] >= arr[j]){
           
            j++;
        }
        else{
            if(j - i + 1>= k){
                count += j - i + 1 - k + 1;
            }
            j++;
            i = j;
        }
     }
     if(j - i >= k){
                count += j - i + 1 - k + 1;
            }
    return count;
}

int main(){
    int n = 10, k = 3;
    int stockprice[n] = {1,2,3,2,1,7,8,9,10,11};
    cout << solve(stockprice, n , k) << endl;
    return 0;
}