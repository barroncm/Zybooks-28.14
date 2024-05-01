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
    cout << "q - Quit" << endl << endl;

   
}
//given line below from zybooks
void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   string itemName;
   string itemDescription;
   double itemCost;
   int itemQuantity;
   cin >> option;
//added breaks
    switch(option){
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
            break;

        }
        case 'd' : {
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
          
            getline(cin, itemName);
            theCart.RemoveItem(itemName);
            break;
            }
        
        case 'c' : {
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
            cout << "Enter the new quantity" << endl;
            cin >> itemQuantity;
           //this needs be done differently
            ItemToPurchase modifiedItem;
            modifiedItem.SetName(itemName);
            modifiedItem.SetQuantity(itemQuantity);
            theCart.ModifyItem(modifiedItem);
            break;
        }
        case 'i' : {
            //needs to reference the cart on the other side
            theCart.PrintDescriptions();
            break;
        }
        case'o': {
            //same issue
            theCart.PrintTotal();
            break;}
        
        case 'q' : {
            cout << "QUIT" << endl;
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
   
    char option;
    cout << "Customer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << endl << endl;
    ShoppingCart theCart(customerName, currentDate);
    cout << endl;
    PrintMenu();
    cout << endl;
    //im pretty sure this should be do while because the do while needs to check condition at the end
    // i do not think that it matters but let me check
    do {
        cout << "Choose an option: " << endl;
        cin >> option;
        if (option != 'q'){
            ExecuteMenu(option, theCart);
            PrintMenu();}         
    }while (option != 'q');
  
   
   return 0;
}
