//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>
using namespace std;


class ItemToPurchase{
    public:
    ItemToPurchase();
    void setName(string& name);
    void SetCost(double cost);
    void SetQuantity(int quantity);
    void SetDescription(string& description);
    string GetName();
    double GetCost();
    string GetDescription();
    int GetQuantity();

    private:
    string name;
    double cost;
    int quantity;
    string description = "none";    
    
};

#endif
