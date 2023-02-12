#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int* array = new int[n];
    for(int i=0; i< n;i++){
        cin >> array[i];
    }
    int* prefixsum = new int[n];
    prefixsum[0] = array[0];
    for(int i=1; i <n ;i++){
        prefixsum[i] =  prefixsum[i-1] + array[i];
    }
    for(int j=0;j<n;j++){
        cout << prefixsum[j] << ", ";
    }
    return 0;
}