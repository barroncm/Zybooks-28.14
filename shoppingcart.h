//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart{
    public:
        ShoppingCart();
        ShoppingCart(const string& customerName, const string& currentDate);
        
        string GetCustomerName(const);
        void AddItem(const ItemToPurchase& item);
        string GetDate() const;
        void RemoveItem(const string& itemName);
        void ModifyItem(const ItemToPurchase& item);
       // double GetCost() const;
       // int GetQuantity() const;
       // string GetName()const;
       // string GetDescription() const;
        double GetCostOfCart() const;
        int GetNumItemsInCart() const;
        void PrintTotal() const;
        void PrintDescriptions()const;
 private:

        string currentDate;
        string customerName;
        vector <ItemToPurchase> cartItems;
        


};


#endif
