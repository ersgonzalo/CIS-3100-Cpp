//By Eric Gonzalo
//CIS 3100 - Professor Zhao
//Created in Ubuntu

#include <iostream>

using namespace std; 

int main()
{
	char temp;
	float t;

	cout<<"Hello there!"<<endl<<"Would you like to convert from Fahrenheit, Celsius, or Kelvin?"<<endl<<"Just type the first letter of the measurement you want to use."<<endl;
	cin>>temp;
	while ((temp !='f') && (temp !='c') && (temp !='k'))
	{
		cout<<"You must type in only f (for Fahrenheit), c (for Celsius), or k (for Kelvin)!\n";
		cin>>temp;
	}

		//Was just to test my once-strings. cout<<temp + " " + temp2;
	
	if (temp == 'f')
	//This is for converting from Fahrenheit!
    {
		cout<<"Type your Fahrenheit temperature.\n";
		cin>>t;
		cout<<(t-32)*(5.0/9.0)<<" degrees Celsius\n";
		cout<<(t-32)*(5.0/9.0)+273.15<<" degrees Kelvin\n";
    }
		
	else if (temp == 'c')
	//This is for converting from Celsius!
	{
		cout<<"Give your Celsius temperature.\n";
		cin>>t;
		cout<<t*(9.0/5.0)+32<<" degrees Fahrenheit\n";
		cout<<t+273.15<<" degrees Kelvin\n";
	}

	else if (temp == 'k')
	//This is for converting from Kelvin!
	{
		cout<<"Type your Kelvin temperature.\n";
		cin>>t;
		cout<<t-273.15<<" degrees Celsius\n";
		cout<<(t-273.15)*(9.0/5.0)+32<<" degrees Fahrenheit\n";
	}
	
return 0;
}
