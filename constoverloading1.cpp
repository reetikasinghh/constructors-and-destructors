#include<iostream>
using namespace std;

// Define a class named 'student'
class student
{
    int rollno;
    char name[50];
    double fee;

public:
    // Default constructor definition
    student()
    {
        cout << "Enter the rollno: ";
        cin >> rollno;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the fee: ";
        cin >> fee;
    }

    // Member function to display student details
    void display()
    {
        cout << endl << rollno << "\n" << name << "\n" << fee;
    }
};

int main()
{
    // Create an object of the 'student' class, which will invoke the default constructor
    student s;
    
    // Call the 'display' member function to display the student's details
    s.display();
    
    return 0;
}

/*
Output:
Enter the rollno: 12308
Enter the name: Seema
Enter the fee: 20000

12308
Seema
20000
*/
