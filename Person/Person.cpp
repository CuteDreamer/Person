#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string FirstName;
    string LastName;

public:
    // Конструкторы
    Person() : FirstName(""), LastName("") {}
    Person(string FirstName, string LastName) : FirstName(FirstName), LastName(LastName) {}

    // Геттеры
    string GetFirstName() const { return FirstName; }
    string GetLastName() const { return LastName; }

    // Сеттеры
    void SetFirstName(string FirstName) { this->FirstName = FirstName; }
    void SetLastName(string LastName) { this->LastName = LastName; }

    // Метод для печати информации о человеке
    void print() const {
        cout << "Name: " << FirstName << " " << LastName << "\n";
            
    }
};

class Student : public Person {
private:
    string studentID;

public:
    // Конструкторы
    Student() : Person(), studentID("") {}
    Student(string FirstName, string LastName, string studentID) : Person(FirstName, LastName), studentID(studentID) {}

    // Геттеры
    string getStudentID() const { return studentID; }

    // Сеттеры
    void setStudentID(string studentID) { this->studentID = studentID; }

    // Методы унаследованного класса
    void passExam() {
        cout << GetFirstName() << " " << GetLastName() << " passed the exam." << "\n";
    }

    void sleepInClass() {
        cout << GetFirstName() << " " << GetLastName() << " overslept a class." << "\n";
    }
};

class GradStudent : public Student {
private:
    string thesisTopic;

public:
    // Конструкторы
    GradStudent() : Student(), thesisTopic("") {}
    GradStudent(string FirstName, string LastName, string studentID, string thesisTopic) : Student(FirstName, LastName, studentID), thesisTopic(thesisTopic) {}

    // Геттеры
    string getThesisTopic() const { return thesisTopic; }

    // Сеттеры
    void setThesisTopic(string thesisTopic) { this->thesisTopic = thesisTopic; }
};

int main() {
    // Пример использования классов Person, Student и GradStudent
    GradStudent gradStudent("Bob", "Bobson", "54321", "Machine Learning");
    gradStudent.print();
    gradStudent.passExam();
    gradStudent.setThesisTopic("Artificial Intelligence");
    cout << "Thesis Topic: " << gradStudent.getThesisTopic() << "\n";

}
