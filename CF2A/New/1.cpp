#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int* array = new int[n];
   
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
     
    int count = 0;
    
    if(array[0]>15){
        cout << "15"<<endl;
        count++;
       
    }
    else{
        
        for(int i=0;i<n-1;i++){
            if(array[i+1]-array[i]>15){
                cout << array[i]+15 << endl;
                count++;
                break;
            }
        }
    }
    if(n==1 && array[0]<=15){
        cout << array[0]+15 << endl;
    }
    else if(array[n-1]<=75){
        cout << array[n-1]+15 << endl;
    }
    else if(count == 0  && array[n-1] == 90){
        cout << "90" << endl;
    }
    
    return 0;
}