#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int count = 0;
    int* array = new int[2*n];
    for(int i = 0; i < 2*n; i++){
        cin >> array[i];
    }
     for(int i = 0; i < 2*n; i=i+2){
        for(int j=1;j<2*n;j=j+2){
            if(array[i] == array[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}