#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxmoney;
    cin >> n >> maxmoney;
    vector<int> seller;
    for(int i=0; i<n ; i++){
        bool u = false;
        int k,s;
        cin >> k ;
        

        for(int j=0; j<k ; i++){
            cin >> s;
            if(!u && maxmoney > s){
                u = true;
                seller.push_back(i);
                
            }
        }
    }

    cout << seller.size() << endl;
    
        for(int i = 0; i < seller.size(); i++){
        cout << seller[i] + 1 << " ";
    }
    }
    
    return 0;
}