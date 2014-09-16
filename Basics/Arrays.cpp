#include <iostream>
#include <string>

using namespace std;

int main()
{
//Sets up counter for use in numbering.
int counter;
//Just in case someone may want to store 100 cities.
string cities [100];

//Asks user for requested amount.
cout<<"-How many cities do you want to enter?"<<endl;
cout<<">>";
cin>>counter;
//To clear input stream so that it does not read the counter input.
cin.ignore(256,'\n');

//Asks user for the cities they want to name.
cout<<"-Please enter the names of the "<<counter<<" cities:"<<endl;
for(int i = 0; i < counter; i++){
	cout<<">>";
    getline(cin,cities[i]);
    }

//Outputs all the cities entered by user.
cout<<"-You have entered "<<counter<<" cities:";
for(int i = 0; i < counter; i++){
	cout<<cities[i];
	//Symbol convention to better sort the cities.
	if (i < counter-2){
		cout<<", ";}
    else if (i == counter-2){
         cout<<" and ";}
	else if (i == counter-1){
		cout<<".\n";}	
	}
	
//system ("pause");
return 0;
}

/*
Please use two dimensional array to list n cities' names.
Sample screen input/output:

-How many cities do you want to enter?
>>5

-Please enter the names of the 5 cities:
>>New York
>>Chicago
>>Washington DC
>>Boston
>>Seattle

-You entered 5 cities: New York, Chicago, Washington DC, Boston and Seattle.

*/
