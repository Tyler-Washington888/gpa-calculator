#include <iostream>
#include <map>
#include <string>
using namespace std;

void showMenu(){
    cout << endl;
    cout << "*******MENU*******"<< endl;
    cout << "1. Add New Class"<< endl;
    cout << "2. Calculate GPA"<< endl;
    cout << "3. Exit"<< endl;
    cout << "******************"<< endl;
    cout << endl;
}

double calculateGPA(int classes, double score){
    return score / classes;
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
    int totalClasses = 0;
    double totalScore = 0.0;
    double totalCredits = 0.0;

    do{
        showMenu();
        cout << "Choose option: ";
        cin >> option;
        cin.ignore(1, '\n');
        cout << endl;

        switch(option){
            case 1: 
            {
                std::string course;
                std::string grade;
                double credits;

                cout << "Enter class name: ";
                std::getline(std::cin, course);
                cout << course;
                cout << endl;
                cout << "Enter grade you got in this course [a+, a, a-, b+, b, b-, c+, c, c-, d+, d, d-, f+, f, f-, ff)]: ";
                cout << grade;
                std::getline(std::cin, grade);
                cout << grade;
                cout << endl;
                cout << "Enter # of credits you got for this course: ";
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
                cout << endl;
                if(classToGrade.size() == 0){
                    cout << "you have not added any classes yet" << endl;
                }else{
                    double gpa = calculateGPA(totalClasses, totalScore);
                    cout << "Your current gpa is " << gpa << endl;
                }
                cout << endl;
                break;
            }
        }
    }while(option != 3);

    return 0;
}   


