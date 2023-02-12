#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int* array = new int[3];

    array[0] = (k*l) / nl;
    array[1] = c*d;
    array[2] = p/np;
    int count = *min_element(array, array+3);
    cout << count/n << endl;
    return 0;
}