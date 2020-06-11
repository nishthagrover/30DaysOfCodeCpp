// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/30-recursion/problem

// Solution

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if (n<2)
        return 1;
    return (n*factorial(n-1));

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
