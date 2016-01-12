#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    protected:
        string firstName;
        string lastName;
        int phone;
    public:
        Student(string fname,string lname,int p){
            firstName=fname;
            lastName=lname;
            phone=p;
        }
        void display(){
            cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone;

        }

};

class Grade :  public Student{
    private:
         int score;
    public:
            Grade(string fname, string lname, int p, int s):Student (fname, lname, p) {
                score = s;
            }
char calculate() {
    if (score >= 40 && score < 60 )
        return 'B';
    else if (score >= 60 && score < 75 )
        return 'A';
    else if (score >= 75 && score < 90 )
        return 'E';
    else if (score >= 90 && score <= 100 )
        return 'O';
    else
        return 'D';
        }
};

int main() {
    string firstName,lastName;
    int score,phone;
    cin>>firstName;
    cin>>lastName;
    cin>>phone;
    cin>>score;
    Student *stu=new Grade(firstName,lastName,phone,score);
    stu->display();
    Grade *g=(Grade*)stu;
    cout<< "\nGrade: "<<g->calculate();
    return 0;
}

