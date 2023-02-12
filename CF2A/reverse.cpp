#include <iostream>
#include<vector>

// C++ program to reverse Vector
// using reverse() in STL
 
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin >> T;
	for(int i=0 ; i<T; i++){
	    int N;
	    cin >> N;
	    
        vector<int> ans ;

	    for(int j=0 ; j<N; j++){
            cin >> ans[j];
        }
        reverse(ans.begin(), ans.end());
        for(int j=0 ; j<N; j++){
            cout << ans[j] << " ";
        }
        cout << endl;

	    
	}
	return 0;
}

// int* array = new int[N];
	    // for(int j=0;j<N;j++){
	    //     cin >> array[i];
	    // }
	    
	    // int* array2 = new int[N];
	    // for(int k=0;k<N;k++){
	    //    array2[k] = array[N-1-k];
	    // }
	    
	    // for(int k=0;k<N;k++){
	    //     cout << array2[k] << " ";
	        
	    // }
	    // cout << endl;