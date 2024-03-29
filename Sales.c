#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Sales.h"


//Inventory* inventory;
//Customer* customerArrays;
//int customerCount;
//Reservation** reservationArray;
//int reservationCount;

void initSales(Sales* pSales, Inventory* pInventory)
{
    pSales->inventory = pInventory;
    L_init(pSales->customersList);
    pSales->customerCount = 0;
    pSales->reservationArray = NULL;
    pSales->reservationCount = 0;
}