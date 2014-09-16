#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

struct User
{
       string person;
       string password;
       double totalPrice;
};

User allUsers[10];
int currentNumber = 0;
const string TEXT_FILE = "customers.txt";

User getUserRegistration();
void fileWrite (User currentUser, string textFile);

int main()
{
    int menuChoice;
    
    cout<<"We hope you enjoyed your meal at Brax Menner!\n"<<"Would you like to register, as well?\n";
    cout<<"1 - Yes\n"<<"2 - No\n";
    cin>>menuChoice;
    if(menuChoice == 1){
         allUsers[currentNumber] = getUserRegistration();
         fileWrite(allUsers[currentNumber], TEXT_FILE);
         cout <<"Registration successful." <<endl;
    }
    else
    {
    cout<<"Thank you for your patronage!\n";
    }
    
system ("PAUSE");
return 0;
}

User getUserRegistration()
{
    //Instantiates a User newUser
	User newUser;

    //Prompt the User for their choice of loginID
	cout <<"Enter the login ID you wish to use: ";
	cin >>newUser.person;
	

    //Prompt the User for their choice of password
	cout <<"Enter the password you will use, with no spaces: ";
	cin >>newUser.password;
	

    //Adds in the total Price they have spent for analsys purposes.
	cout<<"Please enter the re-enter the price you have paid: ";
    cin >>newUser.totalPrice;

    //return the newUser with all the information filled in newUser
	return newUser;
}

void fileWrite (User currentUser, string textFile)
{
    //filestream instantiation of userFile
    fstream userFile;
    //filestream open using textFile and be able to write to it (out) at the end of the file
    userFile.open(textFile.c_str(), fstream::out | fstream::app);
     
     userFile <<currentUser.person <<endl;
     userFile <<currentUser.password <<endl;
     userFile <<currentUser.totalPrice <<endl;
}
