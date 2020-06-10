// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

// Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    string name;
    long num;
    map<string, long> phone;
    for (int i = 0; i<n ; i++)
    {
        cin>>name;
        cin>>num;
        phone[name] = num;
    }
    while (cin>>name)
    {
        if (phone.find(name) != phone.end()) 
        {
        cout << name << "=" << phone.find(name)->second << endl;
        }
        else
            cout<<"Not found\n";
                    
    }

    return 0;
}
