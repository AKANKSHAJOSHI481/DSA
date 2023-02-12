#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int* array = new int[N];
	for(int i=0; i<N;i++){
	    array[i] = 0;
	}
	int q;
	cin >> q;
	int* q1 = new int[q];
	int* q2 = new int[q];
	
	for(int i=0; i<q ; i++){
	    cin >> q1[i] >> q2[i];
	}
	
	for(int i=0; i<q; i++){
	    for(int j=q1[i]; j <= q2[i]; j++){
	        array[j-1] = j - q1[i] + 1 + array[j-1];
	        
	    }
	}
	
	int m;
	cin >> m;
	int* marray = new int[m];
	for(int i=0; i<m;i++){
	    cin >> marray[i];
	}
	for(int i=0;i<m;i++){
	   cout << array[marray[i]-1] << endl;
	}
	return 0;
}
