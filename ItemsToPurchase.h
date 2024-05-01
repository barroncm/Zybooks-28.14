//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>
using namespace std;


class ItemToPurchase{
    public:
    ItemToPurchase();
    void SetName(const string& name);
    void SetPrice(double price);
    void SetQuantity(int quantity);
    void SetDescription(const string& description);
    string GetName() const;
    double GetPrice() const;
    string GetDescription()const;
    int GetQuantity()const;
    void PrintItemCost() const;
    void PrintItemQuantity() const;
    void PrintItemDescription() const;

    private:
    string name;
    double price;
    int quantity;
    string description = "none";    
    
};

#endif
