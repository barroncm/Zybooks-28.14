//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart{
    private:

        string currentDate;
        string customerName;
        vector <ItemToPurchase> cartItems;
    public:
        ShoppingCart(string customerName, string currentDate);
        
        string GetCustomerName(string customerName);
       
        void AddItem(ItemToPurchase item);
        string GetDate(string currentDate);
        void RemoveItem(string itemName);
        void ModifyItem(string item);
        double GetCost(double itemCost);
        int GetQuantity(int itemQuantity);
        string GetName(string itemName);
        string GetDescription(string itemDescription);
        void PrintTotal();
        void PrintDescriptions();
        


};


#endif
