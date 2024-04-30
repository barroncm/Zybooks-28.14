// Caed Barron; second part of the main; worked on VSC and then copied to Github
// throwing error in VSC -> need to check


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
   string itemName;
   string itemDescription;
   double itemCost;
   int itemQuantity;
   cin >> option;
   if (option == "a"){
    cout << "ADD ITEM TO CART" << endl;
    cout << "Enter the item name" << endl;
    getline(cin, itemName);
    cout << "Enter the item description" << endl;
    getline(cin, itemDescription);
    cout << "Enter the item price:" << endl;
    getline(cin, itemCost);
    cout << "Enter the item quantity" << endl;
    cin >> itemQuantity;
    AddItem().SetName(itemName);
    AddItem().SetQuantity(itemQuantity);
    AddItem().SetDescription(itemDescription);
    AddItem().SetCost(itemCost);

   } else if (option == "d")
   { cout << "REMOVE ITEM FROM CART" << endl;
   cout << "Enter name of item to remove:" << endl;
   getline(cin, itemName);
   RemoveItem().itemName;
    
   }else if (option == "C")
   { cout << "CHANGE ITEM QUANTITY" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName);
   cout << "Enter the new quantity" << endl;
   cin >> itemQuantity;
    ModifyItem().SetQuantity(itemQuantity);
   } else if (option == "i")
   {
    PrintDescription(theCart);
    
   }else if (option == "o")
   {
    PrintTotal(theCart);
   } else if(option =="q"){
    cout << "QUIT" << endl;
   } else{
    cout << "invaldi entry" << endl;
   }
   
   
   
   
   
}

int main() {
   /* Type your code here */
   getline(cin, customerName);
   getline(cin, currentDate);
    ShoppingCart theCart(customerName, currentDate);
    while(char option != "q"){
        PrintMenu();
        cin >> option;
        ExceuteMenu(option, theCart);

    }
  
   
   return 0;
}
