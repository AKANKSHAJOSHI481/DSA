#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int* array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int maxEle = *max_element(array, array+n);
    int minEle = *min_element(array, array+n);
    for(int i = 0; i < n; i++){
        if(array[0] == maxEle){
            break;
        }
        else if((array[i] == maxEle) && (i!=0)){
            for(int j=i; j>=1; j--){
                int t = array[j-1];
                array[j-1] = array[j];
                array[j]= t;
                count++;
            }
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(array[n-1] == minEle){
            break;
        }
        else if((array[i] == minEle) && (i!=n-1)){
            for(int j=i; j<=n-2; j++){
                int t = array[j];
                array[j] = array[j+1];
                array[j+1]= t;
                count++;
            }
        }
    }

    cout  << count << endl;
    return 0;
}