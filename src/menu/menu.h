#ifndef MENU_H
#define MENU_H
//keep them separate 

// third party libraries


//our own libraries
#include "variaveis.h"
#include "busca.h"

//c libraries
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <limits>

//func menu
void menu();
void printMenu();
void printSeparator();
void choiceMenu();
int choiceInput(int min, int max);
void registerSubMenu(int type);
void registerChoiceSubMenu(int input, int type);
#endif