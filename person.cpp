#include "person.h"
#include <string>

Person::Person(){}

void Person::setName(std::string name){this -> name = name;}
void Person::setVorname(std::string vorname){this -> vorname = vorname;}
void Person::setEmail(std::string email){this -> email = email;}
void Person::setAlter(int alter){this -> alter = alter;}

std::string Person::getName(){return this -> name;}
std::string Person::getVorname(){return this -> vorname;}
std::string Person::getEmail(){return this -> email;}
int Person::getAlter(){return this ->alter;}

