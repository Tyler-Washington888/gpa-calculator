#include <iostream>
#include <map>
using namespace std;

void showMenu(){
    cout << "*******MENU*******"<< endl;
    cout << "1. Add New Class"<< endl;
    cout << "2. Calculate GPA"<< endl;
    cout << "3. Exit"<< endl;
    cout << "******************"<< endl;
}

double calculateGPA(int classes, double score){
    return classes / score;
}

int main(){
    std::map<std::string, std::string> classToGrade;
    std::map<std::string, double> gradeToScore;
    gradeToScore["a+"] = 4.0;
    gradeToScore["A+"] = 4.0;
    gradeToScore["a"] = 3.8;
    gradeToScore["A"] = 3.8;
    gradeToScore["a-"] = 3.6;
    gradeToScore["A-"] = 3.6;
    gradeToScore["b+"] = 3.4;
    gradeToScore["B+"] = 3.4;
    gradeToScore["b"] = 3.2;
    gradeToScore["B"] = 3.2;
    gradeToScore["b-"] = 3.0;
    gradeToScore["B-"] = 3.0;
    gradeToScore["c+"] = 2.8;
    gradeToScore["C+"] = 2.8;
    gradeToScore["c"] = 2.6;
    gradeToScore["C"] = 2.6;
    gradeToScore["c-"] = 2.4;
    gradeToScore["C-"] = 2.4;
    gradeToScore["d+"] = 2.2;
    gradeToScore["D+"] = 2.2;
    gradeToScore["d"] = 2.0;
    gradeToScore["D"] = 2.0;
    gradeToScore["d-"] = 1.8;
    gradeToScore["D-"] = 1.8;
    gradeToScore["f+"] = 1.6;
    gradeToScore["F+"] = 1.6;
    gradeToScore["f"] = 1.4;
    gradeToScore["F"] = 1.4;
    gradeToScore["f-"] = 1.2;
    gradeToScore["F-"] = 1.2;
    gradeToScore["ff"] = 1.0;
    gradeToScore["FF"] = 1.0;
    
    int option;
    double totalScore;
    double totalCredits;
    int totalClasses;

    do{
        showMenu();
        cout << endl;
        cout << "Choose option: ";
        cin >> option;

        switch(option){
            case 1: 
            {
                string course;
                string grade;
                double credits;

                cout << endl;
                cout << "Enter class name: ";
                cin >> course;
                cout << endl;

                cout << "Enter grade you got in this course [a+, a, a-, b+, b, b-, c+, c, c-, d+, d, d-, f+, f, f-, ff)]: ";
                cin >> grade;
                cout << endl;

                cout << "Enter number of credits you got for this course: ";
                cin >> credits;
                cout << endl;

                classToGrade[course] = grade;
                if(gradeToScore[grade]){
                    totalScore += gradeToScore[grade];
                    totalClasses++;
                };
                if (isdigit(credits)) totalCredits += credits;

                break;
            }
            case 2:{
                if(classToGrade.size() == 0){
                    cout << "you have not added any classes yet" << endl;
                    cout << endl;
                }else{
                    cout << "Your gpa is" << calculateGPA(totalClasses, totalScore) << endl;
                }

                break;
            }
        }
    }while(option != 3);
    return 0;
}   


