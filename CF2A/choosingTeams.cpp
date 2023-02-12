#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n>> k;
    int* array = new int[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int count = 0;

    for(int i=0; i<n; i++){
        if(array[i] <= 5-k){
            count++;
        }
    }
    cout << count/3 << endl;
    return 0;
}