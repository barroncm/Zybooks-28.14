//Caed Barron; added SC.h from step 2; worked in VS Code then copied to here

#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include <string>
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart{
    private:

        string currentDate;
        string customerName;
        vector <ItemToPurchase> cartItems;
    public:
        ShoppingCart(string customerName, string currentDate) : customerName(customerName), currentDate(currentDate){

        }
        string GetCustomerName();
        string GetDate();
        void AddItem(ItemToPurchase item);
        void RemoveItem(string itemName);
        double GetCost();
        int GetQuantity();
        string GetName();
        string GetDescription();
        


};


#endif
