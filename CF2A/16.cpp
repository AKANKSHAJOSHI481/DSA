#include<iostream> 
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j=i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             nums.erase(nums.begin()+i);
        //         }
        //     }
        // }
        reverse(nums.begin(), nums.end());
        return nums[k-1];
    }
int main()
{
    vector<int> kthLargest {3,2,3,1,2,4,5,5,6};
   
    cout << findKthLargest(kthLargest,4) << endl;
    return 0;
}