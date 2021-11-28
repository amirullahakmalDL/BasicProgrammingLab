#include <iostream>
#include <string>
#include<iomanip> //to manipulate the output of the C++ program
using namespace std;

int main()
{
 string studentName;
 int count, numStudents, scoreE1, scoreE2, scoreE3, scoreFinal, studentScore, studentAverage; 
 char grade;

 cout << "Enter number of students: ";
 cin >> numStudents;
 cout << endl;
 
 count = 0;
 while (count < numStudents)
 {
 cout <<"Enter Student name: ";
 getline(cin, studentName);
 cout <<"Enter score for exam 1: ";
 cin>> scoreE1;
 cout <<"Enter score for exam 2: "; 
 cin>> scoreE2;
 cout <<"Enter score for exam 3: "; 
 cin>> scoreE3;
 cout <<"Enter score for final exam: ";
 cin>> scoreFinal;

 studentScore = scoreE1 + scoreE2 + scoreE3 + scoreFinal;
 studentAverage = studentScore / 4 ;

 if (studentAverage >= 80) 
 grade = 'A';
 else if (studentAverage >=70) 
 grade = 'B';
 else if (studentAverage >=50)
 grade = 'C';
 else if (studentAverage >=40) 
 grade = 'D';
 else 
 grade = 'F';
 
 cout << "Student: " << studentName << endl;
 cout << "Average Score: " << studentAverage << endl;
 cout <<"Student's Final Grade: " << grade << endl;
 counter++;
}
 return 0;
}

//Source: http://cplusplus.com/forum/beginner/115759/#msg631849