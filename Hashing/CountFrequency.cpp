#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 20, 10, 10, 20, 5, 20};
    unordered_map <int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        if(mp.count(nums[i]) > 0){
            mp.at(nums[i]) = mp.at(nums[i]) + 1;
        }
        else{
            mp.insert({nums[i], 1});
        }
    }
    for(auto i = mp.begin(); i != mp.end(); i++){
        cout << i->first << " " << i->second << endl;
    }
    return 0;
}