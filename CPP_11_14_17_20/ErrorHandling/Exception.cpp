#include <iostream>
#include <string>

using namespace std;

class Student {
    string name;
    int id;
    double total_marks_possible;
    double total_marks_obtained;

public:
    class Exception { // for classes we need to throw object instead of value...
        string error;
    public:
        Exception(string e) : error(e) {}
        const string& getError() const {
            return error;
        }
    };

    // Constructor
    Student(string s, int id, double total_possible, double total_obtained) :
        name(s), id(id), total_marks_possible(total_possible), total_marks_obtained(total_obtained) {}

    // Member function to calculate percentage
    double getPercentage() const {
        if (id < 0 || total_marks_possible <= 0 || total_marks_obtained < 0 || total_marks_obtained > total_marks_possible) {
            throw Exception("Invalid student data");
        }
        return (total_marks_obtained / total_marks_possible) * 100.0;
    }
};

// Function to perform division : eclare functions as noexcept to indicate that they do not throw exceptions. 
double divide(double x, double y) {
    if (y == 0) {
        throw "Error! Divide by 0";
    }
    return x / y;
}

int main() {
    double a, b;

    try {
        cout << "Result of division: " << divide(1, 2) << endl;
    } catch (const char* ex) {
        cout << ex << endl;
    } catch (...) {
        cout << "An unknown error occurred." << endl;
    }

    cout << "Reached the end of part 1" << endl;

    Student s("John", -1, 100, 85); // Total marks possible: 100, Total marks obtained: 85
    try {
        cout << "Percentage: " << s.getPercentage() << "%" << endl;
    } catch (const Student::Exception& e) {
        cout << "Error: " << e.getError() << endl;
    }

    return 0;
}
