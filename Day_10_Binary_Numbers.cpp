// Link to the complete problem statement: https://www.hackerrank.com/challenges/30-binary-numbers/problem
//Solution

#include <bits/stdc++.h>

using namespace std;

// Appraoch : and operation of x and left shift x replaces one '1'  with zero from each set of consective ones.
// Number of iterations required to convert x to 0 using this process gives the maximum number of consecutive ones.

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int x = n,i=0;
    while (x!=0)
    {
        x = (x & (x<<1));
        i += 1;
    }
    cout<<i;

    return 0;
}
