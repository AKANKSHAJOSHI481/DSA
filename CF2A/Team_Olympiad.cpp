#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int x=0,y=0,z=0 ,w,s;
    vector<int> inputs;
    for(int i=0; i<n;i++){
        int count ;
        cin >> count ;
        inputs.push_back(count);
    }
    vector<int> t1, t2, t3;
    for(int i=0; i<n; i++){
        if(inputs[i]==1){
            t1.push_back(i+1);
            x++;
        }
        else if(inputs[i]==2){
            t2.push_back(i+1);
            y++; 
        }
        else if(inputs[i]==3){
            t3.push_back(i+1);
            z++;
        }
    }
    s = min(x,y);
    w = min(s,z);
    cout << w << endl;

    for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++){
        cout << t1[x] << " " << t2[y] << " " << t3[z] << endl;
    }
    
    return 0;
}