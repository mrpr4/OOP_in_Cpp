#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){ // parent constructor

        this->name = name;
        this->age = age;
    }

    // function overloading
    void getInfo(){
        cout<<"Name:    "<<name<<endl;
        cout<<"age:    "<<age<<endl;

    }

};


class Student : public Person{ 
public:
    int rollno;
    // Student(string name, int age, int rollno) : Person(name, age),  {}

    Student(string name, int age, int rollno)
        :Person(name, age)
    //          ↑
    // this command working as a super keyword like other programming lang

    { // student constructor
        this-> rollno = rollno;
    }

    // function overloading
    void getInfo(){
        Person:: getInfo(); // there this is working as a super keyword
        cout<<"RollNo:   "<< rollno <<endl;
    }

    

};


int main(void){

    Student s1("Zain Ali", 22, 123);
    s1.getInfo();

    return 0;
}