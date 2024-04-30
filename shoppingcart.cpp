/*Caed Barron; added step 2 of the code from zybooks for SC.cpp file8/

//wored in VSCode and then copied to github

#include <iostream>
#include "shoppingcart.h"
#include <iomanip>
#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

int count;

ShoppingCart::ShoppingCart(string customerName, string currentDate){

}
//getters from item files
string GetName(string itemName){
    return itemName;
}
int GetQuantity(int itemQuantity){
    return itemQuantity;

}
double GetCost(double itemCost){
    return itemCost;
}
string GetDescription(string itemDescription){
    return itemDescription
}

//getters
string GetCustomerName(string customerName){
    return customerName;
}
string GetDate(string currentDate){
    return currentDate;
}
//adds the item to the cart by adding it to the vector
void AddItem(string item){
    vector<string> cartItems;
    for(int i = 0; i < cartItems.size(); i++){
        cartItems.push_back(i);
    }}
//takes the item and cycles through till it has a match and then removes it
void RemoveItem(string itemName){
    vector<string> cartItems;
    for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == itemName) {
            cartItems.at(i).pop_back;
        } else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }}}
    
void ModifyItem(string item){
       
}
//simple fucntion that counts the number of items in the cart and omits ""s
int GetNumItemsInCart(){
    vector<string> cartItems;
    for (int i = 0; i < cartItems.size(); i++){
        if (cartItems.at(i) != ""){
            count++;
        }

    } return count;
}
// multiplies the cost of the item times the number of items and then adds it to the existing total 
double GetCostOfCart(){
    double total;
    vector<string> cartItems;
    for (int i = 0; i < cartItems.size(); i++){
        total = total + cartItems.at(i).GetCost()*cartItems.at(i).GetQuantity();

    }
    return total;
}
//takes the total find in GetCostOfCart() function and prints that while checking to make sure the cart has something in it
void PrintTotal (){
    vector<string> cartItems;
   if (cartItems.at(0) != ""){
   double total = GetCostOfCart();
   cout << total << flush;}
   else { 
    cout << "SHOPPING CART IS EMPTY" << endl;
   }
}
//cycles through the names in the cartItems vector and then prints the name and the description for each
void PrintDescription(){
    vector<string> cartItems;
    for(int i = 0; i < cartItems.size(); i++){
        cout << cartItems.at(i).GetName() << cartItems.at(i).GetDescription() << endl;
    }
}
    
  







  
