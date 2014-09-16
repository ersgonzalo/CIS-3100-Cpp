//Eric Gonzalo
//CIS 3100 Professor Zhao
//Created in Ubuntu

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	char phoneNum, answer;
	
cout<<"Would you like to convert? (y/n)";
cin>>answer;

while (answer != 'y' && answer !='n') //Checks to make sure that input is specific.
{
cout<<"Please enter y or n only!";
cin>>answer; 
}

while (answer != 'n')
{
	cout<<"Please enter your memnomic(7 letters):"<<endl;
	cin>>phoneNum;

	int counter;
	for (counter = 1; counter <= 7; counter++)
	{
		
		switch(phoneNum) //Used to convert whatever values.
		{			
						
			case '1':
			cout<<"1";
			break;

			case '0':
			cout<<"0";
			break;			

			case 'A': case 'a': case 'B': case 'b': case 'C': case 'c':
			cout<<"2";
			break;
	
			case 'D': case 'd': case 'E': case 'e': case 'F': case 'f':
			cout<<"3";
			break;

			case 'G': case 'g': case 'H': case 'h': case 'I': case 'i':
			cout<<"4";
			break;

			case 'J': case 'j': case 'K': case 'k': case 'L': case 'l':
			cout<<"5";
			break;

			case 'M': case 'm': case 'N': case 'n': case 'O': case 'o':
			cout<<"6";
			break;

			case 'P': case 'p': case 'Q': case 'q': case 'R': case 'r': case 'S': case 's':
			cout<<"7";
			break;

			case 'T': case 't': case 'U': case 'u': case 'V': case 'v':
			cout<<"8";
			break;

			case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y': case 'Z': case 'z':
			cout<<"9";
			break;
		}
	cin>>phoneNum;
	if (counter == 3)
		{
		cout<<"-";		
		}
	}
	cin.ignore(100,'\n');
	cout<<"Would you still like to convert? (y/n)";
	cin>>answer;	
}

return 0;
}


/*
To make telephone numbers easier to remember, some companies use letters to show their 
telephone number. For example, using letters, the telephone number 438-5626 can be 
shown as GETLOAN, which uses eight letters. Write a program that prompts the user to 
enter a telephone number expressed in letters and outputs the corresponding telephone 
number in digits. If the user enters more than seven letters, then process only the 
first seven letters, Also output the - (hyphen) after the third digit. Allow the user 
to use both uppercase and lowercase letters as well as spaces between words. Moreover, 
your program should process the telephone numbers (7 digits) as many times as the user 
wants.

*Note: if parsing string with spaces is a bit too much for you to care for at the time, 
you may skip this requirement, but focus on evaluating the first 7 letters, non-case sensitive.

*/

/*
if (string == "a" || string == "b"|| string == "c")
	cout<<2;
if else (string == "d" || string == "e"|| string == "f")
	cout<<3;
if else (string == "g" || string == "h"|| string == "i")
	cout<<4;
if else (string == "j" || string == "k"|| string == "l")
	cout<<5;
if else (string == "m" || string == "n"|| string == "o")
	cout<<6;
if else (string == "p" || string == "q"|| string == "r" || string == "s")
	cout<<7;
if else (string == "t" || string == "u"|| string == "v")
	cout<<8;
if else (string == "w" || string == "x"|| string == "y" || string == "z")
	cout<<9;
*/

