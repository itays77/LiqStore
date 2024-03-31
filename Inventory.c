#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Inventory.h"

void initInventory(Inventory* pInventory)
{
    setInventoryDefaults(pInventory);
    pInventory->beersCount = 0;
    pInventory->winesCount = 0;
}

void setInventoryDefaults(Inventory* pInventory)
{
    pInventory->beerArray = NULL;
    pInventory->whiskeyArray = NULL;
    pInventory->wineArray = NULL;
}

int addBeer(Inventory* pInventory)
{
    pInventory->beerArray = (Beer*)realloc(pInventory->beerArray, (pInventory->beersCount + 1) * sizeof(Beer));
    if (!pInventory->beerArray) return 0;

    initBeer(&pInventory->beerArray[pInventory->winesCount], pInventory->beerArray, pInventory->beersCount);
    pInventory->beersCount++;
    return 1;
}



int addWine(Inventory* pInventory)
{
    pInventory->wineArray = (Wine*)realloc(pInventory->wineArray, (pInventory->winesCount + 1) * sizeof(Wine));
    if (!pInventory->wineArray) return 0;
    initWine(&pInventory->wineArray[pInventory->winesCount], pInventory->wineArray, pInventory->winesCount);
    pInventory->winesCount++;
    return 1;
}

void printInventory(const Inventory* pInventory)
{
    printf("Inventory:\n");

    printf("Wine:\n");
    if (pInventory->winesCount > 0)
    {
        for (int i = 0; i < pInventory->winesCount; i++)
        {
            printWine(&pInventory->wineArray[i]);
        }
    }
    else
    {
        printf("No wines in the inventory.\n");
    }

    printf("\nBeer:\n");
    if (pInventory->beersCount > 0)
    {
        for (int i = 0; i < pInventory->beersCount; i++)
        {
            printBeer(&pInventory->beerArray[i]);
        }
    }
    else
    {
        printf("No beers in the inventory.\n");
    }
}

//void refillProductStock(Inventory* pInventory)
//{
//    char serialNumber[6];
//    printf("Enter the serial number of the product to refill: ");
//    scanf("%s", serialNumber);
//
//    // Check if the serial number belongs to a wine
//    for (int i = 0; i < pInventory->wineCount; i++)
//    {
//        if (strcmp(pInventory->wineArray[i].itemSerial, serialNumber) == 0)
//        {
//            pInventory->wineArray[i].amountAvailable = BASE_WINE_AMOUNT;
//            printf("Stock refilled for wine: %s\n", pInventory->wineArray[i].brand);
//            return;
//        }
//    }
//
//    // Check if the serial number belongs to a beer
//    for (int i = 0; i < pInventory->beerCount; i++)
//    {
//        if (strcmp(pInventory->beerArray[i].itemSerial, serialNumber) == 0)
//        {
//            pInventory->beerArray[i].amountAvailable = NUM_OF_SORT_TYPES;
//            printf("Stock refilled for beer: %s\n", pInventory->beerArray[i].brand);
//            return;
//        }
//    }
//
//    printf("Product with serial number %s not found in the inventory.\n", serialNumber);
//}

//void refillEntireStock(Inventory* pInventory)
//{
//    // Refill wine stock
//    for (int i = 0; i < pInventory->winesCount; i++)
//    {
//        pInventory->wineArray[i].amountAvailable = BASE_WINE_AMOUNT;
//    }
//
//    // Refill beer stock
//    for (int i = 0; i < pInventory->beersCount; i++)
//    {
//        pInventory->beerArray[i].amountAvailable = NUM_OF_SORT_TYPES;
//    }
//
//    printf("Entire stock refilled.\n");
//}