#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b ;
    int count1=0,count2=0,count3=0;
    for(int i =1 ;i<=6 ;i++){
        if((abs(a-i) < abs(b-i))){
            count1++;
        }
        else if((abs(a-i) == abs(b-i))){
            count2 ++;
        }
        else if((abs(a-i) > abs(b-i))){
            count3 ++;
        }
    }
    cout << count1 << " " << count2 << " " << count3 << endl;
    return 0;
}