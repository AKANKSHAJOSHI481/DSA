#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
       int carry = 1;
        int dlen = digits.size();
        vector<int> newOne; 
        for(int i=dlen-1; i>=0; i--){
            
            digits[i] += carry;
            
            carry = digits[i] /10;
            newOne.push_back(digits[i]%10);
            if(i == 0){
                carry = 1;
                newOne.push_back(1);
            }
            
        }
        reverse(newOne.begin() ,newOne.end());
        
        return newOne;
            
    }
int main()
{
    vector<int> digits{9};
    
       plusOne(digits);\
       for(int i=0; i < digits.size()+1;i++){
        cout << digits[i] << " ";
       }
    return 0;
}