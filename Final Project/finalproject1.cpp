//CIS 3100 - Final Project
//By Wendy Tsang and Eric Gonzalo

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct User
{
       string person;
       string password;
       string email;
       double resultPrice;
};

User allUsers[10];
int currentNumber = 0;
const string TEXT_FILE = "customers.txt";

void DrinkMenu(); 
void DessertMenu(); 
double DessertOrders();
double DrinkOrders();
double totalAmt(double totalPrice);
User getUserRegistration();
void fileWrite (User currentUser, string textFile);

int main ()
{  
   cout << "\n*-*Welcome to Brax Menner's Dessert Bar!*-*\n\n";
   cout<<"    __ __ __ __ __"<<endl;
   cout<<"  /__/__/__/__/__/|"<<endl;
   cout<<" /__/__/__/__/__/|/"<<endl;
   cout<<"|__'__'__'__'__|/\n"<<endl;
   
   int menuNum;
   int menuChoice;
   char repeat;
   bool ans = true;
   double desPrice, drinkPrice, totalPrice, resultPrice;

   while (ans)
   {
       cout << "What menu would you like to order from? \n 1 - Drinks Menu \n 2 - Dessert Menu \n\n";
       cin >> menuNum;
       
       if (menuNum == 1)
       {
           DrinkMenu();    
           drinkPrice = DrinkOrders();          
       }
       else if (menuNum == 2)
       {
           DessertMenu();
           desPrice = DessertOrders();
       }
       else 
       {
            cout << "Please choose only from the choices provided.\n";     
       }
       
       cout << "\nWould you like to order something else? (y/n)\n";
       cin >> repeat;
       
       if ((repeat == 'n') || (repeat == 'N'))
       {
           ans = false;     
       }     
   }
   
    totalPrice = drinkPrice + desPrice;
    resultPrice = totalAmt(totalPrice);
    
	cout<<"\nTax: $"<< (totalPrice*0.0875)<<endl;
    cout << "\nTotal Price: $" << resultPrice << endl;
    
    cout<<"We hope you enjoyed your meal at Brax Menner!"<<endl;
    cout<<"Would you like to register for our newsletter?"<<endl;
    cout<<"1 - Yes\n"<<"2 - No\n";
    cin>>menuChoice;
    if(menuChoice = 1){
         allUsers[currentNumber] = getUserRegistration();
         fileWrite(allUsers[currentNumber], TEXT_FILE);
         cout <<"Registration successful." <<endl;
    }
    else
    {
    cout<<"Thank you for your patronage!\n";
    }
    
    system ("pause");
    return 0;    
}

double totalAmt(double totalPrice)
{
       double tax = 0.0875;
       double tips = 0.15;
       int eating;
       double totalAmount;
       
       cout << "\nAre you eating in or taking out?\n 1 - Eating In \n 2 - Taking Out\n";  
       cin >> eating;  
       
       if (eating == 1)
       {
          totalAmount = (totalPrice*tax) + (totalPrice*tips) + totalPrice;
       }
       else if (eating == 2)
       {
          totalAmount = (totalPrice*tax) + totalPrice;
       }
       else
       {
           cout << "Please enter a valid number.";
       }
       
       return totalAmount;
}

void DrinkMenu()
{ 
   enum Drinks {Soda, Water, Tea, Smoothies, BubbleTea, Juice, Coffee};
   double priceArr[7] = {1.75, 1.00, 2.00, 4.50, 3.50, 2.75, 3.75};
   double drinkPrice;
    
   cout << "\nDrinks Menu :) \n\n";
   for(int i = 0; i <= Coffee; i = static_cast<Drinks>(i+1))
    {
        switch(i)
         {
           case 0:
                cout << "1 - Soda";
                 cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                 cout << "(Cola Cola, Sprite, Pepsi, Mountain Dew, Gingerale, Fanta)\n" << endl;
                break;
           case 1:
                cout << "2 - Water";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << "\n" << endl;
                break;
           case 2:
                cout << "3 - Tea";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                cout << "(Green, Lavender, White, Jasmine, Rose, Ginseng)\n" << endl;
                break;
           case 3:
                cout << "4 - Smoothies";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                cout << "(Green Tea, Orange, Strawberry, Berries, Kiwi, Mango, Banana)\n" << endl;
                break;
           case 4:
                cout << "5 - Bubble Tea";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                cout << "(Milk, Taro, Green, Green Apple, Mango, Grapefruit)\n" << endl;
                break;
           case 5:
                cout << "6 - Juice";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                cout << "(Apple, Orange, Grapefruit, Passion Fruit, Lemonade)\n" << endl;
                break;
           case 6:
                cout << "7 - Coffee";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArr[i] << endl;
                cout << "(Regular, Latte, Cappuccino, Expresso, Caramel, Frappuccino)\n" << endl;
                break;
           default:
                cout << "None of the Above";
                break;    
         }  
    }
}

double DrinkOrders()
{
       double priceArr[7] = {1.75, 1.00, 2.00, 4.50, 3.50, 2.75, 3.75};
       int drinkNum, drinkOrder[0];
       double drinkPrice = 0.0;
       
       cout << "How many drinks would you like to order?\n";
       cin >> drinkNum; 
       
       cout << "\nPlease type in your order by entering the number provided on the menu. \nPlease enter after each item:\n";
       for (int t=0; t < drinkNum; t++)
       { 
           cin >> drinkOrder[t];
       }     
       cout << endl;
       
       cout << "You ordered: ";
       for(int i = 0; i < drinkNum; i++)
        {
            switch(drinkOrder[i])
             {
               case 1:
                    cout << "Soda";
                    drinkPrice += priceArr[0];   
                    break;
               case 2:
                    cout <<  "Water";
                    drinkPrice += priceArr[1];       
                    break;
               case 3:
                    cout << "Tea";
                    drinkPrice += priceArr[2];       
                    break;
               case 4:
                    cout << "Smoothies";
                    drinkPrice += priceArr[3];      
                    break;
               case 5:
                    cout << "Bubble Tea";
                    drinkPrice += priceArr[4];         
                    break;
               case 6:
                    cout << "Juice";
                    drinkPrice += priceArr[5];        
                    break;
               case 7:
                    cout << "Coffee";
                    drinkPrice += priceArr[6];      
                    break;
               default:
                    cout << "None of the Above";
                    break;        
             }  
             
                 if (i < (drinkNum-2))
                 {
                    cout << ", ";
                 }
                 if (i == drinkNum-2)
                 {
                    cout << " and ";      
                 }
        }

    cout << ".\n";
    cout << "Total Price = $" << drinkPrice << "\n\n";     
    
    return drinkPrice; 
}

void DessertMenu()
{ 
   enum Desserts {IceCream, Cake, Pie, Pudding, Jello, Muffins, Donuts, Cupcakes, Macarons, Cookies};
   double priceArray[10] = {2.00, 3.75, 3.50, 2.25, 2.00, 1.75, 1.50, 2.00, 2.50, 1.25};
   double desPrice;
    
   cout << "\nDesserts Menu :) \n\n";
   for(int i = 0; i <= Cookies; i = static_cast<Desserts>(i+1))
    {
        switch(i)
         {
           case 0:
                cout << "1 - Ice Cream";
                 cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                 cout << "(Green Tea, Strawberry, Mint, Cookie and Cream, Chocolate, Vanilla)\n" << endl;
                break;
           case 1:
                cout << "2 - Cake";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Green Tea, Cheese, Strawberry, Chocolate, Coffee, Tiramisu)\n" << endl;
                break;
           case 2:
                cout << "3 - Pie";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Apple, Pumpkin, Lemon, Raspberry, Blueberry, Cinnamon)\n" << endl;
                break;
           case 3:
                cout << "4 - Pudding";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Green Tea, Strawberry, Chocolate, Vanilla)\n" << endl;
                break;
           case 4:
                cout << "5 - Jello";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Orange, Strawberry, Lemon, Grape, Cherry)\n" << endl;
                break;
           case 5:
                cout << "6 - Muffins";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Corn, Blueberry, Chocolate, Banana Nut, Lemon)\n" << endl;
                break;
           case 6:
                cout << "7 - Donuts";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Chocolate, Vanilla, Cinnamon, Powdered)\n" << endl;
                break;
           case 7:
                cout << "8 - Cupcakes";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Strawberry, Chocolate, Vanilla, Banana, Red Velvet)\n" << endl;
                break;
           case 8:
                cout << "9 - Macarons";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Matcha Tea, Chocolate, Mango, Lemon, Lavender)\n" << endl;
                break;
           case 9:
                cout << "10 - Cookies";
                cout << setw(20) << setfill('.') << setw(25) << "$" << fixed << setprecision(2) << priceArray[i] << endl;
                cout << "(Chocolate Chip, Butter, Sugar, Oatmeal Raisins)\n" << endl;
                break;
           default:
                cout << "None of the Above";
                break;    
         }  
    }
}

double DessertOrders()
{
       double priceArray[10] = {2.00, 3.75, 3.50, 2.25, 2.00, 1.75, 1.50, 2.00, 2.50, 1.25};
       int desNum, desOrder[0];
       double desPrice;
       
       cout << "How many desserts would you like to order?\n";
       cin >> desNum; 
       
       cout << "\nPlease type in your order by entering the number provided on the menu. \nPlease enter after each item:\n";
       for (int t=0; t < desNum; t++)
       {
           cin >> desOrder[t];
       }     
       
       cout << "\n\n";
       cout << "You ordered: ";
       for(int i = 0; i < desNum; i++)
        {
            switch(desOrder[i])
             {
               case 1:
                    cout << "Ice cream";
                    desPrice += priceArray[0]; 
                    break;
               case 2:
                    cout <<  "Cake";
                    desPrice += priceArray[1];    
                    break;
               case 3:
                    cout << "Pie";
                    desPrice += priceArray[2];     
                    break;
               case 4:
                    cout << "Pudding";
                    desPrice += priceArray[3];    
                    break;
               case 5:
                    cout << "Jello";
                    desPrice += priceArray[4];    
                    break;
               case 6:
                    cout << "Muffins";
                    desPrice += priceArray[5];    
                    break;
               case 7:
                    cout << "Donuts";
                    desPrice += priceArray[6];    
                    break;
               case 8:
                    cout << "Cupcakes";
                    desPrice += priceArray[7];    
                    break;
               case 9:
                    cout << "Macarons";
                   desPrice += priceArray[8];    
                    break;
               case 10:
                    cout << "Cookies";
                    desPrice += priceArray[9];   
                    break;
               default:
                    cout << "None of the Above";
                    break;   
             }  
             
             if (i < (desNum-2))
             {
                cout << ", ";
             }
             if (i == desNum-2)
             {
                cout << " and ";      
             }
        }

    cout << ".\n\n";
    cout << "Total Price = $" << desPrice << "\n\n";     
    
    return desPrice; 
}

User getUserRegistration()
{
	User newUser;

	cout <<"Enter the login ID you wish to use: ";
	cin >>newUser.person;

	cout <<"Enter the password you will use, with no spaces: ";
	cin >>newUser.password;
	
	cout <<"Enter the e-mail you will use, with no spaces: ";
	cin >>newUser.email;

	cout<<"Please enter the re-enter the price you have paid: ";
    cin >>newUser.resultPrice;

	return newUser;
}

void fileWrite (User currentUser, string textFile)
{

    fstream userFile;
    userFile.open(textFile.c_str(), fstream::out | fstream::app);
     
     userFile <<currentUser.person <<endl;
     userFile <<currentUser.password <<endl;
     userFile <<currentUser.email <<endl;
     userFile <<currentUser.resultPrice <<endl;
}
