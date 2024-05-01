//work done in VSC and the copied to GitHub and Zybooks
#include <iostream>
#include "ShoppingCart.h"

using namespace std;

int count;
//zybooks initialized values
//multiple constructors
ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016"){}

ShoppingCart::ShoppingCart(const string& customerName, const string& currentDate) : customerName(customerName), currentDate(currentDate){}


//getters from item files
string ShoppingCart::GetName() const{
    return itemName;
}
int ShoppingCart::GetQuantity() const{
    return itemQuantity;

}
double ShoppingCart::GetCost() const{
    return itemCost;
}
string ShoppingCart::GetDescription() const{
    return itemDescription;
}

//getters
string ShoppingCart::GetCustomerName() const{
    return customerName;
}
string ShoppingCart::GetDate() const {
    return currentDate;
}
//adds the item to the cart by adding it to the vector
//connected to shopping cart class and the item to purchase item


void ShoppingCart::AddItem(const ItemToPurchase& item){
        cartItems.push_back(item);
    }


//takes the item and cycles through till it has a match and then removes it
void ShoppingCart::RemoveItem(const string& itemName){
    for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == itemName) {
            cartItems.at(i).erase(); }
            return;
        } }
    
void ShoppingCart::ModifyItem(const ItemToPurchase& item){
     for( int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item.GetName()) {
            cartItems.at(i).SetQuantity(item.GetQuantity());
            return
        } }}

//simple fucntion that counts the number of items in the cart and omits ""s

int ShoppingCart::GetNumItemsInCart() const {
    for (int i = 0; i < cartItems.size(); i++){
        if (cartItems.at(i) != ""){
            count++;
        }

    } return count;
}
// multiplies the cost of the item times the number of items and then adds it to the existing total 
double ShoppingCart::GetCostOfCart() const {
    double total = 0;
    for (int i = 0; i < cartItems.size(); i++){
        total = total + item.GetCost()*item.GetQuantity();

    }
    return total;
}
//takes the total find in GetCostOfCart() function and prints that while checking to make sure the cart has something in it
void ShoppingCart::PrintTotal () const {
    //just make this .empty()
   if (cartItems.empty()){
       cout << "SHOPPING CART IS EMPTY" << endl;}
    else {
        //zybooks desired format
        cout << customerName << "'s Shopping Cart - " << currentDate << endl;
        cout << "Number of Items:"  << GetNumItemsInCart() << endl << endl;
        cout << "Total: $:" << GetCostOfCart() << endl;
   }
}
//cycles through the names in the cartItems vector and then prints the name and the description for each
void ShoppingCart::PrintDescription() const {
    for(int i = 0; i < cartItems.size(); i++){
        cout << item.GetName() << item.GetDescription() << endl;
    }
}
    
  






