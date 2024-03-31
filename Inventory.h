#ifndef __INVENTORY__
#define __INVENTORY__

#define BASE_WINE_AMOUNT 15
#define NUM_OF_SORT_TYPES 40

#include "Beer.h"
#include "Wine.h"
#include "Whiskey.h"



typedef struct
{
    Beer* beerArray;
    int beersCount;
    Whiskey* whiskeyArray;
    Wine* wineArray;
    int winesCount;

}Inventory;

void initInventory(Inventory* pInventory);
void setInventoryDefaults(Inventory* pInventory);
int addBeer(Inventory* pInventory);
int addWine(Inventory* pInventory);
void printInventory(const Inventory* pInventory);


#endif