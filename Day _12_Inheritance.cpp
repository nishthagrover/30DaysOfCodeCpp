// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/30-inheritance/problem

// Solution

#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person
{
	private:
        vector<int> testScores;
        double sum=0, subjects=0;
        
    public:
       Student(string firstName, string lastName, int id, vector<int> scores):
       Person(firstName,lastName,id)
       {
         this->testScores=scores;
         subjects=testScores.size();
       }
        char calculate()
        {
            for (int i =0; i<subjects; i++)
                sum +=testScores[i];
            
            sum /=subjects;
            char grade;
            if (sum >= 90)
            {
                grade = 'O';
                return grade;
            }
            if (sum >= 80)
            {
                grade = 'E';
                return grade;
            }
            if (sum >= 70)
            {
                grade = 'A';
                return grade;
            }
            if (sum >= 55)
            {
                grade = 'P';
                return grade;
            }
            if (sum >= 40)
            {
                grade = 'D';
                return grade;
            }
            else
            {
                grade = 'T';
                return grade;
            }      
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

