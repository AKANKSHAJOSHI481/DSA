#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
// void calcSum(int arr[], int m, int n)
// {
//     vector<int> count;
//     // Loop to consider every
//     // subarray of size K
//     for (int i = 0; i <= m - n; i++) {
//         vector<int> A;
//         for (int j = i; j < n + i; j++){
//             cout << arr[j] << ",";
//             A.push_back(arr[j]);
//             }
//         sort(A.begin(), A.end());
//         cout << endl;
//         count.push_back(*max_element(A.begin(), A.end())-*min_element(A.begin(), A.end()));
        
//         A.clear();
//     }
//     for(int i = 0; i <= m - n; i++) {
//         cout << count[i] << endl;
//     }
// }
int main()
{
    int n,m;
    cin >> n >> m;
    int* array = new int[m];
    for(int i=0; i<m; i++){
        cin >> array[i];
    }
    // vector<int> count;
    
    // for (int i = 0; i <= m - n; i++) {
    //     vector<int> A;
    //     for (int j = i; j < n + i; j++){
            
    //         A.push_back(array[j]);
    //         }
    //     sort(A.begin(), A.end());
        
    //     count.push_back(*max_element(A.begin(), A.end())-*min_element(A.begin(), A.end()));
        
    //     A.clear();
    // }
  

    // cout << *min_element(count.begin(),count.end()) << endl;

    sort(array, array + m);
    int least = array[n-1] - array[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (array[i+n-1] - array[i] < least)
        {
            least = array[i+n-1] - array[i];
        }
    }
    cout << least << endl;
    return 0;
}