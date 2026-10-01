#ifndef MENU_H
#define MENU_H
//deixar separado pfvr seguindo como eu deixei

//bibliotecas nossas
#include "variaveis.h"
#include "busca.h"

//bibliotecas do c
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
// array menu
const string textmenu[11] = {"Cadastrar Pessoas","Cadastrar Ocorrencias","Cadastrar Evidencias","Buscar Pessoas",
"Buscar Ocorrencias", "Buscar Evidencias", "Ordenar pessoas","Ordenar ocorrencias","Listar evidencias de uma ocorrencia","Analisar ocorrencia",
"Relatorio de desempenho"};

//func ord



//func cad



//func bus


#endif