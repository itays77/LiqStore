#ifndef __SALES__
#define __SALES__

#include "Reservation.h"
//#include "Inventory.h"
#include "Customer.h"


typedef struct
{
    Inventory* inventory;
    LIST* customersList;
    int customerCount;
    Reservation** reservationArray;
    int reservationCount;

}Sales;

void initSales(Sales* pSales, Inventory* pInventory);

#endif