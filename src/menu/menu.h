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
#include "src\sorting\sort_people\sort_people.h"
#include "src/sorting/sort_case/sort_case.h"
#include "src\menu\Evidence _correlated _occurrence\Analyze_Case.h"
#include "src\menu\Evidence _correlated _occurrence\List_Evidences.h"

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
void SubMenu(int size, const std::string *textarray, int type);                  // O(n)
void listEvidenceMenu(); // O(n)
void analyzeCaseMenu();
void DeleteArrays();                             // O(n)

#endif