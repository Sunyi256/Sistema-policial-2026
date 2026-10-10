#ifndef MENU_H
#define MENU_H
// keep them separate

// third party libraries

// our own libraries
#include "variaveis.h"
#include "busca.h"

// c libraries
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <limits>

// func menu
void menu();                                     // O(n)
void printMenu();                                // O(n)
void printSeparator();                           // O(n)
void choiceMenu();                               // O(n)
int choiceInput(int min, int max);               // O(n)
void registerSubMenu(int type);                  // O(n)
void registerChoiceSubMenu(int input, int type); // O(n)
#endif