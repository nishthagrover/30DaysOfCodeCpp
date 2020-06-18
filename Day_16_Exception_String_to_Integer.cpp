// Link to the complete problem statement: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
//solution

#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    try
    {
        int x = stoi(S);
        cout<<x;
    }
    catch(exception e)
    {
        cout<<"Bad String";
    }
    return 0;
}
