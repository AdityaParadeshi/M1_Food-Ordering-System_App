/**
 * @file foodordersystem.h
 * @author Aditya Paradeshi ()
 * @brief  c program on food order system
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// header gaurd
#ifndef FOODORDERSYSTEM_H_
#define FOODORDERSYSTEM_H_

// Include File
 
 #include <stdio.h>
#include <string.h>

//  Structure Decleration 

 struct order{
    char name[50];
    int order_no;
    int number_of_food;
    int cost;
}p[10000];

#endif

