#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct Student{
    int id;
    string name;
    string lastname;
    string department;
    double gpa;

};

int main(){
    Student s1;
    cout<<"Please enter student`s id:"<<endl;
    cin>>s1.id;
    cin.ignore();
    cout<<"Please enter student`s name:"<<endl;
    getline(cin,s1.name);
    cout<<"Please enter student`s last name:"<<endl;
    getline(cin,s1.lastname);
    cout<<"Please enter student`s department:"<<endl;
    getline(cin, s1.department);
    cout<<"Please enter student`s gpa:"<<endl;
    cin>>s1.gpa;
    cout<<s1.name<<" "<<s1.lastname<<" "<<"Number of the student named:"<<s1.id<<" "<<"Department of the student named:"<<s1.department<<" "<<"Gpa of the student named:"<<s1.gpa;


    return 0;
};
