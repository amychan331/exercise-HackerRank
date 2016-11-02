/* ---------------------------------------------------------------------------
Hacker Rank: 30 Days of Code Day 12 - Inheritance
Complete the Student class by writing:
    1: Student class constructor with 4 parameters: firstName(str), lastName(str), id(int), scores(int array/vector)
    2: Char calculate() method: calculates Student object's average & returns grade character representative of their calculated average.


@url https://www.hackerrank.com/challenges/30-inheritance
@author Amy Yuen Ying Chan
** --------------------------------------------------------------------------- */

/* Pre-defined Code by Hacker Rank */
class Person:
    def __init__(self, firstName, lastName, idNumber):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber
    def printPerson(self):
        print("Name:", self.lastName + ",", self.firstName)
        print("ID:", self.idNumber)

/* My solution */
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification), testScores(scores) {};
        char calculate() {
            int grade = 0;
            for (auto it = testScores.begin(); it != testScores.end(); ++it) {
                grade += *it;
            }
            grade = grade / testScores.size();
            
            if (grade >= 90 && grade <= 100) {
                return 'O';
            } else if (grade >= 80) {
                return 'E';
            } else if (grade >= 70) {
                return 'A';
            } else if (grade >= 55) {
                return 'P';
            } else if (grade >= 40) {
                return 'D';
            } else {
                return 'T';
            }
        }
};