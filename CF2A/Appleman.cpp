#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    char XOX[n][n];
    bool even = true;
    
    for(int i=0;i<n ;i++){
        for(int j=0;j<n;j++){
             cin >> XOX[i][j];
        }
       
    }
    
    
   
   for(int i=0;i<n ;i++){
   int count =0;
        for(int j=0;j<n ;j++){
            if(i-1 >= 0 and XOX[i-1][j] == 'o'){
                count++;
            }
            if(i+1 < n and XOX[i+1][j] == 'o'){
                count++;
            }
            if(j-1 >= 0 and XOX[i][j-1] == 'o'){
                count++;
            }
            if(j + 1 < n and XOX[i][j+1] == 'o'){
                count++;
            }
            if(count % 2 == 1){
                even = false;
            }
        }
   }
    // cout << "count :"<<count << endl;
    if(even){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}