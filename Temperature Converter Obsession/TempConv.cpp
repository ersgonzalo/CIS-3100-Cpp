//By Eric Gonzalo
//CIS 3100 - Professor Zhao

#include <iostream>

using namespace std; 

int main()
{
	char temp;
	char temp2;
	float t;
	float tr;

	cout<<"Hello there! Would you like to convert from Fahrenheit, Celsius, or Kelvin? Just type the first letter of the measure."<<endl;
	cin>>temp;
	while ((temp !='f') && (temp !='c') && (temp !='k'))
	{
		cout<<"You must type in only f, c, or k!\n";
		cin>>temp;
	}
	cout<<"And what would you like to convert to? (Fahrenheit, Celsius, or Kelvin)"<<endl;
	cin>>temp2;
	while ((temp2 !='f') && (temp2 !='c') && (temp2 !='k'))
	{
		cout<<"You must type in only f, c, or k!\n";
		cin>>temp2;
	}

		//Was just to test my once-strings. cout<<temp + " " + temp2;
	
	if (temp == 'f' && temp2 == 'c')
	//This is for converting from Fahrenheit into Celsius!
    {
		cout<<"Type your Fahrenheit temperature.\n";
		cin>>t;
		tr = ((t-32)*(5.0/9.0));
		cout<<tr<<" degrees Celsius\n";
    }
		
	else if (temp == 'c' && temp2 == 'f')
	//This is for converting Fahrenheit into Kelvin!
	{
		cout<<"Give your Fahrenheit temperature.\n";
		cin>>t;
		tr = (t*(9.0/5.0))+32;
		cout<<tr<<" degrees Celsius\n";
	}

	else if (temp == 'c' && temp2 == 'k')
	//This is for converting from Celsius into Kelvin!
	{
		cout<<"Type your Celsius temperature.\n";
		cin>>t;
		tr = t+273.15;
		cout<<tr<<" degrees Kelvin\n";
	}
	
	else if (temp == 'c' && temp2 == 'f')
	//This is for converting from Celsius into Fahrenheit!
	{
		cout<<"Give your Celsius temperature.\n";
		cin>>t;
		tr = (t*(9.0/5.0))+32;
		cout<<tr<<" degrees Fahrenheit\n";
	}
 	
return 0;
}
