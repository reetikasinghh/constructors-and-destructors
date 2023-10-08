#include<iostream>
using namespace std;

// Define a class named 'date'
class date
{
    int d;
    int m;
    int y;

public:
    // Default constructor definition
    date()
    {
        cout << "Enter the date: ";
        cin >> d;
        cout << "Enter the month: ";
        cin >> m;
        cout << "Enter the year: ";
        cin >> y;
    }

    // Member function to display the date
    void display()
    {
        cout << endl << d << "\t" << m << "\t" << y;
    }
};

int main()
{
    // Create an object of the 'date' class, which will invoke the default constructor
    date d2;
    
    // Call the 'display' member function to display the date
    d2.display();
    
    return 0;
}

/*Output
Enter the date: 24
Enter the month: 8
Enter the year: 20

24     8      20
*/
