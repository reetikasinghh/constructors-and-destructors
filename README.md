# constructors-and-destructors
1) Aim:
The aim of this code is to demonstrate the use of a default constructor within a class to initialize object properties and display student details, including handling input for student name with spaces.

Theory:

A class named student is defined with private data members rollno, name, and fee.
The class contains a default constructor, which initializes the object's properties by taking user input for rollno, name, and fee.
cin.ignore() is used to clear the input buffer to prevent issues when reading the name.
cin.getline(name, 50) is used to read the name as a line, allowing spaces to be included in the name.
The display member function is defined within the class to display the student's details, including roll number, name, and fee.
In the main function, an object of the student class is created, which invokes the default constructor.
The display member function is called to display the student's details.
Algorithm:

Declare a class student with private data members (rollno, name, fee).
Define the default constructor for the class:
Inside the constructor, prompt the user to enter the rollno, name, and fee.
Use cin.ignore() to clear the input buffer.
Use cin.getline(name, 50) to read the name as a line, allowing spaces.
Read and store these values in the object's properties.
Define the display member function within the class to display the student's details.
In the main function:
Create an object of the student class, which invokes the default constructor.
Call the display member function to display the student's details.
Conclusion:

This code demonstrates the use of a default constructor within a class to initialize object properties, including handling user input for a student's name with spaces. It also illustrates how to display the student's details using a member function. The program successfully collects and displays student information.

output : 
![image](https://github.com/reetikasinghh/constructors-and-destructors/assets/139485681/65ead7d9-7995-44d7-9861-56a48c2909d1)

2)Aim:
The aim of this code is to demonstrate the use of a default constructor within a class to initialize object properties and display a date.

Theory:

A class named date is defined with private data members d, m, and y representing the day, month, and year, respectively.
The class contains a default constructor, which initializes the object's properties by taking user input for d, m, and y to represent a date.
The display member function is defined within the class to display the date in a specific format.
In the main function, an object of the date class is created, invoking the default constructor.
The display member function is called to display the date.
Algorithm:

Declare a class date with private data members (d, m, y).
Define the default constructor for the class:
Inside the constructor, prompt the user to enter the d, m, and y values to represent a date.
Read and store these values in the object's properties.
Define the display member function within the class to display the date in a specific format.
In the main function:
Create an object of the date class, which invokes the default constructor.
Call the display member function to display the date.
Conclusion:
This code demonstrates the use of a default constructor within a class to initialize object properties and display a date in a specific format. It successfully collects user input for a date and displays it using a member function.

output: 

![image](https://github.com/reetikasinghh/constructors-and-destructors/assets/139485681/a1ca93b4-3202-4bb6-b4ca-249a6812f7b9)





