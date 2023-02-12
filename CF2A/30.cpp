#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    for(int i=0;i<5;i++){
        for(int j=i+1; j>0;j--){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=1;i<=5;i++){
        for(int j=1; j<=i;j++){
            cout <<  j;
        }
        cout << endl;
    }
   cout << endl;
    for(int i=5;i>=1;i--){
        for(int j=1; j<=i;j++){
            cout <<  j;
        }
        cout << endl;
    }
    cout << endl;
    for(int i=1;i<=5;i++){
        for(int j=1; j<=i;j++){
            cout <<  i;
        }
        cout << endl;
    }
    cout << endl;
    for(int i=5;i>=1;i--){
        for(int j=1; j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=9;j=j+2){
            
        }
    }

    cout << endl;

    return 0;
}