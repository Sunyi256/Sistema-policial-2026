#ifndef REGISTER_PERSON_H
#define REGISTER_PERSON_H
// keep them separate

// third party libraries
#define MAX_PESSOAS 100

// our own libraries
#include "variaveis.h"
#include "stringParaChar.h"

// c libraries
#include <iostream>
#include <limits>
#include <string>

// func REGISTER PERSON
void cadastrandoPessoaAleatoria(int quantidadePessoas, struct Pessoa listaPessoas[]);
bool cadastrandoPessoaManual(struct Pessoa listaPessoas[], int &quantidadePessoas);
#endif