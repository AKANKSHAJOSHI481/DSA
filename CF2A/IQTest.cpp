#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int* array = new int[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    // int* differarray = new int[n-1];
    // for(int i=0;i<n-1;i++){
    //     differarray[i] = array[i+1] - array[i];
    // }
    // for(int i=0;i<n-1;i++){
    //     cout << differarray[i]  << " ";
    // }
    // // for(int i=0;i<n-1;i++){
    // //     if(differarray[0]%2 == 1){
    // //         cout << i+1 << endl;
    // //         break;
    // //     }
    // //     else if(differarray[i]%2 == 1){
    // //         cout << i+2 << endl;
    // //         break;
    // //     }
    // // }

    int oddvalue =0;
    int evenvalue =0;
    int lastodd, lasteven;
    for(int i=0; i<n;i++){
        if(array[i]%2 == 0){
            evenvalue++;
        }
        else{
            oddvalue++;
        }
    }
    for(int i=n-1; i>=0;i--){
        if(array[i]%2 == 1){
            lastodd = i;
            break;
        }


    }
    for(int i=n-1; i>=0;i--){
        if(array[i]%2 == 0){
            lasteven = i;
            break;
        }


    }
    if(evenvalue == 1){
        cout << lasteven+1 << endl;
    }
    else if(oddvalue == 1){
        cout << lastodd+1 << endl;
    }

    return 0;
}