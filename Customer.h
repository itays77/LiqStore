#ifndef __CUSTOMER__
#define __CUSTOMER__


#include "Inventory.h"

typedef enum {
    eVip, eRegular, eNew, eNomOfCustomerTypes
} eCustomerType;

static const char* CustomerTypeStr[eNomOfCustomerTypes]
        = { "Regular", "Vip", "New" };

typedef struct
{
    char* name;
    int serialNum;
    int numOfReservations;
    int totalSpent;
    eCustomerType type;

}Customer;

void initCustomer();


#endif