#include<iostream>
using namespace std;

int main()
{
    int n,m,x,y;
    cin >> n >> m >> x >> y ;
    //cout << n%m << endl;
    int min = n*x;
    if(n>=m){
    if(min > (n/m)*y + (n%m)*x){
        cout << (n/m)*y + (n%m)*x << endl;
    }
    else{
        cout << min << endl;
    }
    }
    else{
       cout << y << endl;
    }
    return 0;
}