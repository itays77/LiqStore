#ifndef __RESERVATION__
#define __RESERVATION__


#include "Inventory.h"
#include "Customer.h"
#include "Date.h"
#include "List.h"


typedef struct
{
    Customer* customer;
    LIST items;
    int totalAmount;
    Inventory* inventory;
    Date date;

}Reservation;


#endif

