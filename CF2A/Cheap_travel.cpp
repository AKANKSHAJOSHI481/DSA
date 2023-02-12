#include<iostream>
using namespace std;

int main()
{
    int n, m, a ,b;
    cin >> n >> m >> a >> b;
    int ans ;
    if(((n/m)+1)*b < (n/m)*b + (n%m)*a){
        cout << ((n/m)+1)*b << endl;
    }
    else if((n/m)*b > n*a){
        cout << n*a << endl;
    }
    else{
        cout << (n/m)*b + (n%m)*a << endl;
    }
    
    return 0;
}