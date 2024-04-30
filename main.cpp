// Caed Barron; first part of the main; worked on VSC and then copied to Github
// only the first part not completed


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
string customerName;
string currentDate;

    cout << "Enter customer's name:" << endl;
   cin >> customerName;
   cout << "Enter today's date:" << endl;
   cin >> currentDate;

void PrintMenu() {
   /* Type your code here */
   //given by zybooks instructions
   cout << "a - Add item to cart" << endl;
   cout <<"d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;

   
}
void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   cin >> option;
   if (option == "a"){

   } else if (option == "d")
   {
    
   }else if (option == "C")
   {
    
   } else if (option == "i")
   {
    
   }else if (option == "o")
   {
    /* code */
   } else if(option =="q"){

   } else{
    cout << "invaldi entry" << endl;
   }
   
   
   
   
   
}

int main() {
   /* Type your code here */
  
   
   return 0;
}
