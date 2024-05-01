//work done in VSC and the copied to GitHub and Zybooks
#include <iostream>
#include "ShoppingCart.h"
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#include "ItemToPurchase.h"
//im pretty sure you don't need all those but i suppose it won't cause problems
using namespace std;

int count;
//zybooks initialized values
//multiple constructors
ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016"){}

ShoppingCart::ShoppingCart(string customerName, string currentDate) : customerName(customerName), currentDate(currentDate){}


//getters from item files
string ShoppingCart::GetName(string itemName){
    return itemName;
}
int ShoppingCart::GetQuantity(int itemQuantity){
    return itemQuantity;

}
double ShoppingCart::GetCost(double itemCost){
    return itemCost;
}
string ShoppingCart::GetDescription(string itemDescription){
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
//connected to shopping cart class and the item to purchase item
void ShoppingCart::AddItem(ItemToPurchase item){
    //i don't think the for loop is necessary here
    for(int i = 0; i < cartItems.size(); i++){
        cartItems.push_back(i);
    }}
//takes the item and cycles through till it has a match and then removes it
void ShoppingCart::RemoveItem(string itemName){
    for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item) {
            cartItems.at(i).erase(); 
        } else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }}}
    
void ShoppingCart::ModifyItem(ItemToPurchase item){
     for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item.GetName()) {
            cartItems.at(i).SetQuantityitem.GetQuantity());
        } else {
            cout << "Item not found in cart. Nothing removed." << endl;
        }}}
//simple fucntion that counts the number of items in the cart and omits ""s
int ShoppingCart::GetNumItemsInCart(){
    for (int i = 0; i < cartItems.size(); i++){
        if (cartItems.at(i) != ""){
            count++;
        }

    } return count;
}
// multiplies the cost of the item times the number of items and then adds it to the existing total 
double ShoppingCart::GetCostOfCart(){
    double total;
    for (int i = 0; i < cartItems.size(); i++){
        total = total + cartItems.at(i).GetCost()*cartItems.at(i).GetQuantity();

    }
    return total;
}
//takes the total find in GetCostOfCart() function and prints that while checking to make sure the cart has something in it
void ShoppingCart::PrintTotal (){
    //just make this .empty()
   if (cartItems.empty()){
       cout << "SHOPPING CART IS EMPTY" << endl;}
    else {
        //zybooks desired format
        cout << customerName << "'s Shopping Cart - " << current Date << endl;
        cout << "Number of Items: : << GetNumItemsInCart() << endl << endl;
        cout << "Total: $: << GetCostOfCart() << endl;
   }
}
//cycles through the names in the cartItems vector and then prints the name and the description for each
void ShoppingCart::PrintDescription(){
    for(int i = 0; i < cartItems.size(); i++){
        cout << cartItems.at(i).GetName() << cartItems.at(i).GetDescription() << endl;
    }
}
    
  






