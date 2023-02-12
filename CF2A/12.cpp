#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int binary_search(int arr[],int x, int l, int r)
{
    for(int i=l; i<=r; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int array[250];
    for (int i = 0; i < p; i++){
        cin >> array[i];
    }   
    int q;
    cin >> q;
    for (int i = p; i < p+q; i++){
        cin >> array[i];
    }   
    sort(array,array+p+q);
    int count = 0;
   for(int i=0; i<p+q ;i++){
    if(array[i] != array[i+1]){
        count++;
    }
   }
   if(n == count){
    cout << "I become the guy." << endl;
   }
   else{
    cout << "Oh, my keyboard!" << endl;
   }
    return 0;
}