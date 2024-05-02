//main.cpp - use the names so you can use windows + v to do multi-paste when you transfer to zybooks
//work done in VSC and the copied to GitHub and Zybooks
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
    

void PrintMenu() {
   /* Type your code here */
   //given by zybooks instructions
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;

   
}
//given line below from zybooks
void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   string itemName;
   string itemDescription;
   double itemPrice;
   int itemQuantity;
//added breaks
    switch(option){
        case 'a' : {
            cout << "ADD ITEM TO CART" << endl;
            cin.ignore();
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
             cout << "Enter the item description:" << endl;
            getline(cin, itemDescription);
             cout << "Enter the item price:" << endl;
            cin >> itemPrice;
            cin.ignore();
            cout << "Enter the item quantity:" << endl;
            cin >> itemQuantity;
    
            ItemToPurchase nextItem;
            nextItem.SetName(itemName);
            nextItem.SetDescription(itemDescription);
            nextItem.SetPrice(itemPrice);
            nextItem.SetQuantity(itemQuantity);
            theCart.AddItem(nextItem);
            break;

        }
        case 'd' : {
            cout << "REMOVE ITEM FROM CART" << endl;
            cin.ignore();
            cout << "Enter name of item to remove:" << endl;
          
            getline(cin, itemName);
            theCart.RemoveItem(itemName);
            break;
            }
        
        case 'c' : {
            cout << "CHANGE ITEM QUANTITY" << endl;
            cin.ignore();
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
            cout << "Enter the new quantity:" << endl;
            cin >> itemQuantity;
           //this needs be done differently
            ItemToPurchase modifiedItem;
            modifiedItem.SetName(itemName);
            modifiedItem.SetQuantity(itemQuantity);
            theCart.ModifyItem(modifiedItem);
            break;
        }
        case 'i' : {
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            break;
        }
        case'o': {
            //same issue
            cout << "OUTPUT SHOPPING CART" << endl;
            theCart.PrintTotal();
            break;}
        
        case 'q' : {

            break;
        }
        default : {
            break;
        }
        }
    
    }

int main() {
   /* Type your code here */
   string customerName;
    string currentDate;
   cout << "Enter customer's name:" << endl;
   
   getline(cin, customerName);

   cout << "Enter today's date:" << endl << endl;
   getline(cin, currentDate);
  
   
    char optionReset = 'z';
    cout << "Customer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << endl;
    ShoppingCart theCart(customerName, currentDate);
    cout << endl;
    PrintMenu();
    cout << endl;
    //im pretty sure this should be do while because the do while needs to check condition at the end
    // i do not think that it matters but let me check
    // we have to do while loop with zybooks formatting
    while (optionReset != 'q'){
        //my bad i forgot to add o
        if (optionReset == 'a' || optionReset == 'c' || optionReset == 'd' || optionReset == 'i' ||
            optionReset == 'q' || optionReset == 'o'){
            cout << endl;
            PrintMenu();
            cout << endl;}
        cout << "Choose an option:" << endl;
        cin >> optionReset;
        ExecuteMenu(optionReset, theCart);}
   
   return 0;
}
