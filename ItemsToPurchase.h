//Caed Barron ; work done in VSC and the copied to GitHub and Zybooks
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>
using namespace std;


class ItemToPurchase{
    public:
    ItemToPurchase();
    void setName(const string& name);
    void SetCost(double cost);
    void SetQuantity(int quantity);
    void SetDescription(const string& description);
    string GetName() const;
    double GetCost() const;
    string GetDescription()const;
    int GetQuantity()const;

    private:
    string name;
    double cost;
    int quantity;
    string description = "none";    
    
};

#endif
