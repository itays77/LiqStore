#ifndef __SHOP__
#define __SHOP__

#include "Inventory.h"
#include "Sales.h"

typedef struct
{
    Inventory* inventory;
    Sales* salesDepartment;
    int netBudget;

}Shop;

int initShop(Shop* pShop);

#endif