//Caed Barron; added the Step 1 necessary ItemsToPurchase.h

//written in VSCode then moved to github

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>

class ItemToPurchase{
    ItemToPurchase();
    void setName(string name);
    void SetCost(double cost);
    void SetQuantity(int quantity);
    string GetName();
    double GetCost();
    string GetName();
    int GetQuantity();

    private:
    string itemDescription = "none";
    
};

#endif
