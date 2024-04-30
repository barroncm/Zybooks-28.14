//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "ItemToPurchase.h"
#include "ShoppingCart.h"


    

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
//given line below from zybooks
void ExecuteMenu(char selection, ShoppingCart& theCart) {
   /* Type your code here */
   string itemName;
   string itemDescription;
   double itemCost;
   int itemQuantity;

   cin >> selection;

    switch(selection){
        case 'a' : {
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name" << endl;
            getline(cin, itemName);
             cout << "Enter the item description" << endl;
            getline(cin, itemDescription);
             cout << "Enter the item price:" << endl;
            cin >> itemCost;
            cout << "Enter the item quantity" << endl;
            cin >> itemQuantity;
    
            ItemToPurchase nextItem;
            nextItem.SetName(itemName);
            nextItem.SetDescription(itemDescription);
            nextItem.SetCost(itemCost);
            nextItem.SetQuantity(itemQuantity);
            theCart.AddItem(nextItem);

        }
        case 'd' : {
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
          
            getline(cin, itemName);
            theCart.RemoveItem(itemName);
            }
        case 'c' : {
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
            cout << "Enter the new quantity" << endl;
            cin >> itemQuantity;
            ModifyItem().SetQuantity(itemQuantity);
        }
        case 'i' : {
            PrintDescription(theCart);
        }
        
        case 'q' : {
            cout << "QUIT" << endl;
        }
        //placeholder...will have to check what zybooks wants
        default : {
            cout << "Invalid entry" << endl;
        }
        }
    
    }

int main() {
   /* Type your code here */
   string customerName;
    string currentDate;
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);
    ShoppingCart theCart(customerName, currentDate);
    char option;
    cin >> option;
    //have to use single quotes here
    while(option != 'q'){
        PrintMenu();
        cin >> option;
        ExecuteMenu(option, theCart);

    }
  
   
   return 0;
}
