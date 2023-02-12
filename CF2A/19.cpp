#include<iostream>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n ;
    bool t = true ;
    int* xarray = new int[n];
    int* yarray = new int[n];
    for(int i = 0; i < n; i++){
        cin >> xarray[i] >> yarray[i];
    }
    int count =0;
    for(int i = 0; i < n; i++){
        if(s > xarray[i]){
            s = s + yarray[i];
            t =true;
        }
        else{
            t = false;
            break;
        }
    }
    if(t==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}