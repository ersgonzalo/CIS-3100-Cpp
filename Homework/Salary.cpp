//By Eric Gonzalo
//CIS 3100 - Professor Zhao
//Created in Ubuntu

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
string lastName;
string firstName;
float currentSalary;
float payIncrease;

cout<<"Enter your first name. \n";
cin>>firstName;
cout<<"Enter your last name. \n";
cin>>lastName;
cout<<"Enter your current salary\n";
cin>>currentSalary;
cout<<"Enter your estimated pay increase.\n";
cin>>payIncrease;

float updatedSalary = currentSalary * (1+payIncrease/100);

cout<<"Here is your updated information.\n"<<left<<setw(8)<<firstName<<left<<setw(8)<<lastName<<setfill ('.')<<setw(18)<<right<<fixed<<setprecision(2)<<updatedSalary<<endl;


return 0;
}

    
/*	You will be promoted to enter five entries for three employees: lastName, firstName, currentSalary, and payIncrease.
    Data will be entered as follows:

    Miller Andrew  65789.87 	5
    Green Sheila   75892.56		6
    Sethi Amit    101900.50     6.1

    Each input line consists of an employee's last name (e.g. Miller), first name (e.g.: Andrew), current salary (e.g.: 65789.87), and pay increase rate in percentage (e.g.: 5, which refers to 5%).

    "Write a program that reads the data and outputs the data in the following format for each employee"

    firstName lastName...........updatedSalary

    The updatedSalary should be the employee's currentSalary * (1+ payIncrease).

    The firstName and lastName should be left justified, updatedSalary right justified. Format the output of decimal numbers to one decimal places.There are should be '.' fill in the emplty space of the updatedSalary column

For cout<<setw(specific width of characters)

Extra Credit: Write and read from a file for the previous existing data. (Persons and Salaries)
*/
