
#include<iostream>
using namespace std;
 

int main()
{
    int n;
    cin >> n;
    int* array = new int[n];
    for(int i =0; i < n; i++){
        cin >> array[i];
    }
    
    for(int j = 1; j <= n; j++){
       for(int k=0;k<n;k++){
        if(array[k] == j){
            cout << k+1 << " " ;
            break;
        }
       }
    }
    return 0;
}