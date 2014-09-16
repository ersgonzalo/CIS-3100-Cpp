//Eric Gonzalo
// CIS 3100
// Created in Ubuntu

#include <iostream>

using namespace std;
void celsiusConversion, fahrenheitConversion, kelvinConversion;

int main()
{

char answer, tempDesire;
double temperature;

cout<<"Hello there! Would you like to convert your temperature? (y/n)";
cin>>answer;

while (answer != 'y' && answer !='n') //Checks to make sure that input is specific.
{
cout<<"Please enter y or n only!";
cin>>answer; 
}

while (answer != n)
	{

	cout<<"Would you like to convert to Celsius, Fahrenheit, or Kelvin?";
	cin>>tempDesire;
	
		if (tempDesire == "c" || tempDesire == "C"){
		cout<<celsiusConversion(temperature);}
		else if (tempDesire == "f" || tempDesire == "F"){
		cout<<fahrenheitConversion(temperature);}
		else if (tempDesire == "k" || tempDesire == "K"){
		cout<<kelvinConversion(temperature);}
		else{
		cout<<"Please enter a c, f or k to convert your temperature!";}
	}
	
	cout<<"Would you still like to convert a temperature? (y/n)";
	cin>>answer;
}
return 0;
}

void celsiusConversion(temperature)
{


}


void fahrenheitConversion(temperature)
{


}

void kelvinConversion(temperature)
{


}