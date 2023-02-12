#include<iostream>
using namespace std;


int hammingWeight(uint32_t n) {
        int count = 0;
           while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
    }

int main()
{
    uint32_t n;
    n = 00000000000000000000000000001011;
    int count = hammingWeight(n);
    cout << count << endl;

    return 0;
}