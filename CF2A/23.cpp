#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char* XOX = new char(n*n);
    
    for(int i=0;i<n*n ;i++){
        cin >> XOX[i];
    }
    // for(int i=0;i<n*n ;i++){
    //     cout <<  XOX[i];
    // }

    int count =0;
   
   for(int i=0;i<n*n ;i++){
    if(((XOX[i] == 'o')&&(XOX[i+1] == 'o'))||((XOX[i] == 'o')&&(XOX[i+n] == 'o'))||((XOX[i] == 'o')&&(XOX[i-1] == 'o'))||((XOX[i] == 'o')&&(XOX[i-n] == 'o'))){
        count++;
   }
   }
    // cout << "count :"<<count << endl;
    if(count%2 ==0){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}