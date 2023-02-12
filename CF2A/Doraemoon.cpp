#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int count = 0;
    if(n < m){
        cout << "-1" << endl;
    }
    else{
        for(int i = 0; i<=n;i++){
        for(int j = 0; j<=n;j++){
            if((2*i + j == n) && ((i+j)%m == 0)){
                count = i+j;
            }
        }
    }
    cout << count << endl;
    }

    
    return 0;
}