//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#include <iostream>
#include "ShoppingCart.h"
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
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
    return itemDescription;
}

//getters
string ShoppingCart::GetCustomerName(string customerName){
    return customerName;
}
string ShoppingCart::GetDate(string currentDate){
    return currentDate;
}
//adds the item to the cart by adding it to the vector
void AddItem(string item){
    vector<string> cartItems;
    for(int i = 0; i < cartItems.size(); i++){
        cartItems.push_back(i);
    }}
//takes the item and cycles through till it has a match and then removes it
void ShoppingCart::RemoveItem(string item){
    vector<string> cartItems;
    for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item) {
            cartItems.at(i).erase(); //removes the item, pop_back does not work here
        } else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }}}
    
void ModifyItem(string item, int newQuantity){
    vector<string> cartItems;
     for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item) {
            cartItems.at(i).SetQuantity(newQuantity)
        } else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }}}
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
    
  






