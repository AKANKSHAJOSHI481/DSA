#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char* string = new char[n];
        for(int i=0; i<n; i++){
            cin>>string[i];
        }
        
        int Qcount = 0;
        int Acount = 0;
        for(int i=0; i<n; i++){
            if(string[i] == 'Q'){
                // cout << string[i] <<"  ";
                Qcount++;
            }
            else{
                // cout << string[i] <<"  ";
                Acount++;
            }
        }
        //cout << Qcount << "=Qcount  " << Acount << "=Acount " << endl;
        if(Qcount<=Acount){
            cout << "Yes"<<endl;
        }
        else{
            cout << "No"<<endl;
        }


    }
    return 0;
}