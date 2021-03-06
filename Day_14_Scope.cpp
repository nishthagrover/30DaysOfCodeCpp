// Link to the complete problem statement: https://www.hackerrank.com/challenges/30-scope/problem
// solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    Difference(vector<int> elements)
    {
        this->elements = elements;
    }
    
    int computeDifference()
    {
        int n=elements.size();
        int min=elements[0];
        int max=elements[0];

        for(int i=0;i<n;++i)
        {
            if(elements[i]<min){min=elements[i];}
            if(elements[i]>max){max=elements[i];}
        }
        maximumDifference=max-min;
        return maximumDifference;
    }

	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
