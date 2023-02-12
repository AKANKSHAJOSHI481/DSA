#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    int* array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
    }
    if(sum + (n-1)*10 > d){
        cout << "-1"<<endl;
    }
    else{
        cout << (d-sum)/5 << endl;
    }
    return 0;
}