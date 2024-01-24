#include <iostream>
#include <vector>
using namespace std;

class Person {
private:
    string name;
    int age;
    vector<int>* vec;

public:
    // Default Constructor
    Person() : name("John"), age(21), vec(new vector<int>(10, 0)) {
        cout << "Default constructor is called\n";
    }

    // Parameterized Constructor
    Person(string name, int age) : name(name), age(age), vec(new vector<int>(10, 0)) {
        cout << "Parameterized constructor is called\n";
    }

    // Copy Constructor (Deep Copy)
    Person(const Person& other) : name(other.name), age(other.age), vec(new vector<int>(*other.vec)) {
        cout << "Copy constructor is called\n";
    }

    // Copy Assignment Operator (Deep Copy)
    Person& operator=(const Person& other) {
        cout << "Copy assignment operator is called\n";
        if (this != &other) {
            delete vec;
            name = other.name;
            age = other.age;
            vec = new vector<int>(*other.vec);
        }
        return *this;
    }

    // Destructor
    ~Person() {
        cout << "Destructor is called\n";
        delete vec;
    }

    // Accessors
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void pushNumber(int x) {
        vec->push_back(x);
    }
};

int main() {
    Person p1;
    Person p2("Alice", 20);
    Person p3;
    p3 = p2;

    return 0;
}
