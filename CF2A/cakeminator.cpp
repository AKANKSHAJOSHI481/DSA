#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    string str[r+3];
    for(int i=0; i<r; i++){
        cin >> str[i];
    }
    int r1=0, c1=0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(str[i][j] == 'S'){
                r1 ++;
                break;
            }
        }
    }

for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(str[j][i] == 'S'){
                c1 ++;
                break;
            }
        }
    }

    cout << r*c - r1*c1 << endl;

    return 0;
}