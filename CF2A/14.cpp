#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    int* array = new int[3];
    array[0] = t;
    array[1] = t/10;
    int temp1 = t%10;
    t = t/10;
    int temp2 = t%10;
    t = t - temp2 + temp1;
    array[2] = t;
    cout << *max_element(array , array + 3);

    return 0;
}