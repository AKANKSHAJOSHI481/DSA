#include<iostream>
#include<sstream>  
#include <bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
    int bull = 0;
    int cow = 0;
    int sec = secret.length();
        for(int i=0 ;i<sec ;i++){
                if(secret[i] == guess[i]){
                    bull ++;
                    secret.erase(secret.begin() + i);
                    guess.erase(guess.begin() + i);
                }
        }
        guess.erase(unique(guess.begin(),guess.end()),guess.end());
        for(int i=0;i<secret.length();i++){
            for(int j=0;j<guess.length();j++){
                if((i != j) && (secret[i] == guess[j])){
                    cow++;
                }
            }
        }
        stringstream x ,y;
        x << bull;
        y << cow;
        string cow1 = x.str();
        string cow2 = y.str();
        string final = cow1 + "A" + cow2 + "B";
        return final;

    }
int main()
{
    string secret = "11", guess = "11";
    cout << getHint(secret, guess) << endl;
    return 0;
}