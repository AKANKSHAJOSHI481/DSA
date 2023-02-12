#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i=1; i<=sqrt(n);i++){
        if(n%i == 0){
            count++;
            if(i != n%i){
                count++;
            }
        }
    }
    if(count == 2){
        cout << "Prime" << endl;
    }
    else{
        cout << "Non-Prime"<< endl;
    }
    return 0;
}