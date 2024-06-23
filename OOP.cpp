#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  float* cgpa;

public:
  string name;

  // default constructor
  Student(string name, float cgpaValue) {
    this->name = name;
    this->cgpa = new float; // dynamicaly allolacate the memeory
    *(this->cgpa) = cgpaValue;
  }

  // copy constructor
  Student(const Student& obj) {
    this->name = obj.name;
    this->cgpa = new float; // making the copy of the new dynamic location
    *(this->cgpa) = *(obj.cgpa); // making the copy of first constructor
  }

  // destructor
  ~Student() {
    delete cgpa;
  }

  void getInfo() {
    cout << "Hello, I am " << name << " student\n";
    cout << "CGPA: " << *(cgpa) << endl;
  }
  void setCgpa(float newCgpa) {
      *cgpa = newCgpa;
    }

};

int main(void) {
  Student s1("Zain Ali", 3.32);
  s1.getInfo();
  
  Student s2 = s1; // Using copy constructor
  s2.name = "Ali";
  s2.setCgpa(3.82);

  cout<<"S2"<<endl;
  s2.getInfo();

  return 0;
}
