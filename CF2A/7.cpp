#include <bits/stdc++.h>
using namespace std;
int sum_array(int* array, int start, int end){
    int count = 0;
    for(int i=start; i<=end; i++){
        count = count + array[i];
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int* array = new int[n];
    for(int i=0; i<n;i++){
        cin >> array[i];
    }
    
    sort(array,array+n);
    
    for(int i=n-1;i>=0;i--){
        if((sum_array(array,i,n-1)) > (sum_array(array,0,i-1))){
            cout << n-i << endl;
            break;
            
        }
    }
    
    
    return 0;
}