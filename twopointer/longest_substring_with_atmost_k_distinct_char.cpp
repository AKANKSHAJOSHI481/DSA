#include<bits/stdc++.h>
using namespace std;
int solve(string str , int k){
     //have to find the substrings that contain atleast 3 disitnct characters
     int count = -1;
     int i = 0, j = 0;
     unordered_map<char, int> mp;
     while(j < str.size()){
        char ch = str[j];
        mp[ch]++;
        
        while(mp.size() > k){
            char previous = str[i];
            mp[previous]--;
            if(mp[previous] == 0){
                mp.erase(previous);
            }
            // count += str.size() - j + 1;
            i++;
        }
        count = max(count, j-i+1);
        j++;
     }
     return count;
}

int main(){
   string str = "world";
   int k = 4;
   cout << solve(str, k)<< endl;
    return 0;
}