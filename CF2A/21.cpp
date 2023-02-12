#include<iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* product = new int[2*n];
    for(int i=0; i<2*n; i++){
        cin >> product[i];
    }
    int count = 0;
    for(int i = 0; i <2*n; i = i +2){
        for(int j = i+1; j < 2*n; j = j+2){
            if((product[i] < product[j]) && (quality[i] > quality[j])){
                count++;
                break;
            }
            
        }
    }
    if(count==1){
        cout << "Happy Alex"<<endl; 
    }
    else{
        cout<<"Poor Alex" <<endl;
    }

    return 0;
}