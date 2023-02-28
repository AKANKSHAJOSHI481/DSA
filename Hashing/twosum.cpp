#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool twosum(vector<int> &nums, int target){
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        if(mp.count(nums[i])>0){
            mp.at(nums[i]) =mp.at(nums[i])+1;
        }
        else{
            mp.insert({nums[i], 1});
        }
    }
    // unordered_map<int, int>::iterator it;
    for(auto it = mp.begin(); it != mp.end();it++){
        if(target%2 == 0 && (target == it->first*2) && it->second > 1){
            return true;
        }
        else if(mp.count(target - it->first) > 0){
            return true;
        }
    }
    return false;
}
int main()
{
    // Leetcode question two sum : need to find whether is there any 2 numbers whose sum is equal to target
    vector<int> nums = {0,1,2,3,4,5,6,7};
    int target = 75;
    bool ans = twosum(nums, target);
    if(ans == true){
        cout << "target = " << target << " True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}