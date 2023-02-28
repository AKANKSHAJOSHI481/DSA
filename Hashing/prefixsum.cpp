#include<iostream>
#include<vector>
using namespace std;

int rangeofsum(vector<int> nums, int l, int r) {
    vector<int> prefix(nums.size());
    prefix[0] = nums[0];
    for(int i=1; i<nums.size(); i++){
        prefix[i] = nums[i] + prefix[i-1];
    }
    if(l == 0){
        return prefix[r];
    }
    return prefix[r] - prefix[l-1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        nums[i] = j;
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << rangeofsum(nums, l, r) << endl;
    }
    return 0;
}