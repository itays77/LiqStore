#include <stdio.h>
#include "Shop.h"
#include "Inventory.h"
#include "Beer.h"
#include "Wine.h"
#include "Sales.h"

int main() {

    Inventory inventory;
    initInventory(&inventory);


    addBeer(&inventory);
    printBeer(&inventory.beerArray[0]);
    addWine(&inventory);
    printWine(&inventory.wineArray[0]);

//    Sales sales;
//    initSales(&sales, &inventory);

    printInventory(&inventory);


    return 1;
}
