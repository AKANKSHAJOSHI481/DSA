
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reversee(vector<int>& nums, int i, int j) {
    int temp = 0;
    while(i <= j){
        temp = nums[i];
        nums[i] = nums[j] ;
        nums[j] = temp;
        i++;
        j--;
    }

}
void rotate(vector<int>& nums, int k) {
        reversee(nums,0,nums.size()-k-1);
        reversee(nums,nums.size()-k,nums.size()-1);
        reversee(nums, 0 ,nums.size());
        
    }

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    rotate(nums, k);
    for(int i=0;i<n;i++){
        cout << nums[i] << " ,";
    }
    return 0;
}