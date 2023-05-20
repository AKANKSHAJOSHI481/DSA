#include<bits/stdc++.h>
using namespace std;
int solve(string str , int k){
     //have to find the substrings that contain atleast 3 disitnct characters
     int count = 0;
     int i = 0, j = 0;
     unordered_map<char, int> mp;
     while(j < str.size()){
        char ch = str[j];
        mp[ch]++;
        j++;
        while(mp.size() >= k){
            char previous = str[i];
            mp[previous]--;
            if(mp[previous] == 0){
                mp.erase(previous);
            }
            count += str.size() - j + 1;
            i++;
        }
     }
     return count;
}

int main(){
   string str = "aabacbebebe";
   int k = 3;
   cout << solve(str, k) - solve(str, k+1)<< endl;
    return 0;
}