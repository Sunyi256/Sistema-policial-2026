#ifndef MENU_H
#define MENU_H
// keep them separate

// third party libraries

// our own libraries
#include "src/structs/structs.h"
#include "src/menu/Menu_Search/Search_People.h"
#include "src/menu/Menu_Search/search_o/Search_Occurrence.h"

// c libraries
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <limits>
#include <string>

// func menu
void menu();                                     // O(n)
void printMenu();                                // O(n)
void printSeparator();                           // O(n)
void choiceMenu();                               // O(n)
int choiceInput(int min, int max);               // O(n)
void registerSubMenu(int type);                  // O(n)
void registerChoiceSubMenu(int input, int type); // O(n)
#endif