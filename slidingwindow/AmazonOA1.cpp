// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
int solve(int *array, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    int res = 0;
    int i = 0;
    int j = 0;
    int ans = 0;
    while (j < n)
    {
        if (j - i + 1 <= m)
        {
            // cout << "j = " << j << " i = " << i << endl;
            res += array[j];
            j++;
            ans = max(ans, res);
            // cout << "res = " << res << endl;
            // cout << "ans = " << ans << endl;
        }
        else
        {
            res = res - array[i];
            i++;
        }
    }
    return sum - ans;
}

int main()
{
    int n = 5, m = 2;
    int array[5] = {68, 50, 1,2,3};
    cout << solve(array, n, m) << endl;

    return 0;
}