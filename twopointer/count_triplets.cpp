#include<bits/stdc++.h>
using namespace std;
int solve(int* arr, int n){
      int count = 0;
	    sort(arr, arr+n);
	    for(int i=0; i<n; i++){
	        int j = i+1;
	        int k = n-1;
	        while(j<k){
	            if(arr[i] + arr[j] == arr[k]){
	                count++;
	            }
	            else if(arr[i] + arr[j] < arr[k]){
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	    return count;
}

int main(){
    int n = 9;
    int arr[n] = {1,2,3,4,5,6,7,8,9};
    cout << solve(arr, n) << endl;
    return 0;
}