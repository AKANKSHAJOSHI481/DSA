#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int array[6];
    array[0] = a + b + c;
    array[1] = a*b*c;
    array[2] = a + b*c;
    array[3] = (a + b)*c;
    array[4] = a*b + c;
    array[5] = a*(b+c);

    cout << *max_element(array,array+6);
    return 0;
}