
#include<iostream>
#include<string>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    cin >> s;
    
   string k ;
    for(int i = 0; i < s.size() ; i++){
        if(i%2 == 1){
            continue;
            
        }
        k += s[i];
    }
//    sort(k.begin() , k.end());
   for(int j=0;j<k.size();j++){
       if(j != k.size()-1){
           cout<<k[j]<<"+";
       }
       else if(j == k.size()-1){
           cout << k[j] <<endl;
       }
   }
    return 0;
}