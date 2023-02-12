#include<iostream>
using namespace std;

int main()
{   
    
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            for(int i=1; i<= n/2;i++){
                cout << n/2+i << " " << i << " ";
            }
            cout << endl;
        }
        else{
            for(int i=1; i<= n/2;i++){
                cout << n/2+i << " " << i << " ";
            }
            cout << n << endl;
        }
    }
    return 0;
}