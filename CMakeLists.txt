cmake_minimum_required(VERSION 3.27)
project(liqStore C)

set(CMAKE_C_STANDARD 11)

add_executable(liqStore main.c
        Date.h
        Beer.h
        Whiskey.h
        Wine.h
        Inventory.c
        GeneralFunctions.h
        GeneralFunctions.c
        Beer.c
        Wine.c
        List.c
        Customer.c
        Sales.c
        Reservation.c
        Date.c
        Shop.c)
