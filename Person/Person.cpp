#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstname;
    string lastname;

public:

    Person() : firstname(""), lastname("") {}
    Person(string firstname, string lastname) : firstname(firstname), lastname(lastname) {}


    string GetFirstName() const { return firstname; }
    string GetLastName() const { return lastname; }

    void SetFirstName(string firstname) { this->firstname = firstname; }
    void SetLastName(string lastname) { this->lastname = lastname; }


    void print() const {
        cout << "Name: " << firstname << " " << lastname << "\n";
            
    }
};

class Student : public Person {
private:
    string studentid;

public:

    Student() : Person(), studentid("") {}
    Student(string firstname, string lastname, string studentid) : Person(firstname, lastname), studentid(studentid) {}

    string getStudentID() const { return studentid; }


    void setStudentID(string studentID) { this->studentid = studentid; }


    void passExam() {
        cout << GetFirstName() << " " << GetLastName() << " passed the exam." << "\n";
    }

    void sleepInClass() {
        cout << GetFirstName() << " " << GetLastName() << " overslept a class." << "\n";
    }
};

class GradStudent : public Student {
private:
    string thesistopic;

public:

    GradStudent() : Student(), thesistopic("") {}
    GradStudent(string firstname, string lastname, string studentid, string thesistopic) : Student(firstname, lastname, studentid), thesistopic(thesistopic) {}

    string getThesisTopic() const { return thesistopic; }


    void setThesisTopic(string thesistopic) { this->thesistopic = thesistopic; }
};

int main() {

    GradStudent gradStudent("Bob", "Bobson", "54321", "Machine Learning");
    gradStudent.print();
    gradStudent.passExam();
    gradStudent.setThesisTopic("Artificial Intelligence");
    cout << "Thesis Topic: " << gradStudent.getThesisTopic() << "\n";

}
