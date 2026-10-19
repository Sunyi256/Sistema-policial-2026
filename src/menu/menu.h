#ifndef MENU_H
#define MENU_H
// keep them separate

// third party libraries

// our own libraries
#include "src/structs/structs.h"
#include "src/menu/Menu_Search/Search_People.h"
#include "src/menu/Menu_Search/search_o/Search_Occurrence.h"
#include "src\register\register_person\register_person.h"
#include "src\register\register_evidence\register_evidence.h"
#include "src\register\register_case\register_case.h"

// c libraries
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <limits>
#include <string>

// func menu
void menu();                                     // O(n)
void printMenu(int size, const std::string *textarray);                                // O(n)
void printSeparator();                           // O(n)
void choiceMenu();                               // O(n)
int choiceInput(int min, int max);               // O(n)
void subMenu(int size, const std::string *textarray, int type);                  // O(n)
void registerChoiceSubMenu(int input, int type); // O(n)
void DeleteArrays();                             // O(n)

#endif