// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/30-review-loop/problem

// Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() 
{ 
    
    int T,i,j; 
    cin>>T;

    for(j=0;j<T;j++)
    {      
        char input[10000];
        cin >> input;
        for(i=0;i<strlen(input);i++)
        {   if(i%2==0)
            {
                cout<<input[i];
            }
        }
        
        cout<<" ";

        for(i=0;i<strlen(input);i++)
        {   if(i%2==1)
            {
                cout<<input[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
