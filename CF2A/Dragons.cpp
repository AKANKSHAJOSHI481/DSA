#include<iostream>
using namespace std;
 
int main()
{
    int s, n;
    cin >> s >> n ;
    int* xarray = new int[n];
    int* yarray = new int[n];
    for(int i = 0; i < n; i++){
        cin >> xarray[i] >> yarray[i];
    }
    int count =0;
    for(int i = 0; i < n; i++){
        if(s > xarray[i]){
            s = s + yarray[i];
            count++;
        }
    }
    if(count == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}