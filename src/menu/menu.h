#ifndef MENU_H
#define MENU_H
// keep them separate

// third party libraries

// our own libraries
#include "../structs/structs.h"
#include "Menu_Search/Search_People.h"
#include "Menu_Search/search_o/Search_Occurrence.h"
#include "../register/register_person/register_person.h"
#include "../register/register_evidence/register_evidence.h"
#include "../register/register_case/register_case.h"
#include "../sorting/sort_people/sort_people.h"
#include "../sorting/sort_case/sort_case.h"
#include "Evidence _correlated _occurrence/Analyze_Case.h"
#include "Evidence _correlated _occurrence/List_Evidences.h"

// c libraries
#include <chrono>
#include <thread>
#include <ctime>
#include <string>

// func menu
void menu();                                                    // O(n)
void printMenu(int size, const std::string *textarray);         // O(n)
void printSeparator();                                          // O(n)
bool choiceMenu();                                              // O(n)
int choiceInput(int min, int max);                              // O(n)
void subMenu(int size, const std::string *textarray, int type); // O(n)
void listEvidenceMenu();                                        // O(n)
void analyzeCaseMenu();
void DeleteArrays(); // O(n)

#endif