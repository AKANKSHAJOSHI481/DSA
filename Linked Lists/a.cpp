// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int rows = 1;
//     int i = n-1;
//     int j = 1;
//     while(rows <= n){
//         int col = 1;
//         while(col <= n){
//             if(col <= i){
//                 cout << " ";
//             }
//             else{
//                 cout << "*";
//             }
//             col++;
//         }
//         i--;
//         rows++;
//         cout << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
#include <vector>
bool spy_game(vector<int> nums){
    int n = nums.size();
    vector<int> indexs_0;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            indexs_0.push_back(i);
        }
    }
    int index7 = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == 7){
            index7 = i;
        }
    }

    if((index7 > indexs_0[0]) && (index7 < indexs_0[1])){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    vector<int> x{1,0,2,4,0,5,7};
    bool ans = spy_game(x);
    cout << ans << endl;
    return 0;
}