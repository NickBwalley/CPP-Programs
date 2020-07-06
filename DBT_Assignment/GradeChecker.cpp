#include <iostream>
#include "GradeChecker.h"
using namespace std;

GradeChecker::GradeChecker()
{
    int stdNo;
    int marks;
    cout << "Enter Your Students Number: " << endl;
    cin >> stdNo;
    cout << "Enter Your Average Marks: (0-100): " << endl;
    cin >> marks;
    if(marks < 0 && marks > 100){
        cout << "Invalid Marks Entered!..." << endl;
    }
    else if (marks < 50){
        cout << "Admission Number: " << stdNo << endl;
        cout << "Grade: " << "D" << endl;
        cout << "Remark: " << "Please Repeat Unit!" << endl;
    }
    else if(marks >= 50 && marks <= 59){
        cout << "Admission Number: " << stdNo << endl;
        cout << "Grade: " << "C" << endl;
        cout << "Remark: " << "Pass. Good Work!" << endl;
    }
    else if(marks >= 60 && marks <= 60){
        cout << "Admission Number: " << stdNo << endl;
        cout << "Grade: " << "B" << endl;
        cout << "Remark: " << "Pass. Congratulations!" << endl;
    }
    else if(marks >= 70 && marks <= 100){
        cout << "Admission Number: " << stdNo << endl;
        cout << "Grade: " << "A" << endl;
        cout << "Remark: " << "Pass. Excellent!" << endl;
    }

}
