#ifndef REGISTER_INPUT_H
#define REGISTER_INPUT_H
// keep them separate

// c libraries
#include <iostream>
#include <string>


bool hasDigit(const std::string &text);                         // O(n)
bool isBlank(const std::string &text);                          // O(n)
bool readText(const std::string &fieldLabel, std::string &output); // O(n)
#endif
