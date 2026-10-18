#ifndef REGISTER_PERSON_H
#define REGISTER_PERSON_H
#include "src/structs/structs.h"
#include <iostream>
#include <string>

void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[]);
bool cadastrandoPessoaManual(struct Pessoa listaPessoas[], int &quantidadePessoas);
#endif