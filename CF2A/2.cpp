#include<iostream>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    for(int i = 0; i < t ; i++){
        string  s;
        cin >> s;
        int z = s.size();

        if(z <= 10){
            cout << s << endl;
        }
        else { 
            cout << s.at(0) << z-2 << s.at(z-1) << endl;
        }
    }
    
    return 0;
}