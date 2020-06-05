// Link to complete problem Statement: https://www.hackerrank.com/challenges/30-conditional-statements/problem

// Solution

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if ((n%2!=0)|| (n%2==0 && n>=6 && n<=20))
    	cout<<"Weird"<<endl;
    
	else if ((n%2 == 0 && n>=2 && n<=5) || (n%2 == 0 && n>20))
		cout<<"Not Weird"<<endl;

    return 0;
}
