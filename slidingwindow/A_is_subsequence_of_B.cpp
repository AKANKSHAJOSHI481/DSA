#include<bits/stdc++.h>
using namespace std;
int solve(string A, string B){
     int i = 0, j = 0, count = 0;
     while(i < A.length() && j < B.length()){
        if(A[i] == B[j]){
            count++; i++;j++;
        }
        else{
            j++;
        }
     }
     return A.length() - count;
}

int main(){
    string A = "POY" , B = "AXLMOSP";
    cout << solve(A,B) << endl;
    return 0;
}