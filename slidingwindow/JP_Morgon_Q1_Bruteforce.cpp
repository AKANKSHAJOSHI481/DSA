// Question link - https://www.desiqna.in/12812/morgan-sde1-coding-questions-and-solutions-india-april-2023
// Question - Given an array of size n, find subarrays whose size is k and they are strictly increasing.
//Bruteforce
#include<bits/stdc++.h>
using namespace std;
int sortedornot(int* arr, int start, int end){
    if(end-start+1 == 0 || end-start+1 == 1){
        return 1;
    }
    if(arr[end - 1] > arr[end]){
        return 0;
    }
    return sortedornot(arr, start, end-1);
}
int solve(int* stockprices, int n, int k){
    int count = 0;
     for(int i = 0; i < n-k+1; i++){
            cout << "i = " << i << " k + i -1 = " << k + i -1<< endl;
            if(sortedornot(stockprices, i, k + i-1) == 1){
                count++;
            }
        
     }
     return count;
}

int main(){
    int n = 5, k = 3;
    int stockPrices[n] = {5,3,5,7,8};
    cout << solve(stockPrices, n, k) << endl;
}