#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int distributeCandies(vector<int>& candyType) {
    int n = candyType.size();
    sort( candyType.begin(), candyType.end() );
candyType.erase( unique( candyType.begin(), candyType.end() ), candyType.end() );

     if(candyType.size() >= n/2){
            return n/2;
        }
        else{
            return candyType.size();
        }
    }
int main()
{
    vector<int> array{100000,0,100000,0,100000,0,100000,0,100000,0,100000,0};
    cout << distributeCandies(array) << endl;

    return 0;
}