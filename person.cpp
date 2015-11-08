#include "person.h"
#include <QString>

Person::Person(){}

void Person::setName(QString name){this -> name = name;}
void Person::setVorname(QString vorname){this -> vorname = vorname;}
void Person::setEmail(QString email){this -> email = email;}
void Person::setAlter(int alter){this -> alter = alter;}

QString Person::getName(){return this -> name;}
QString Person::getVorname(){return this -> vorname;}
QString Person::getEmail(){return this -> email;}
int Person::getAlter(){return this ->alter;}

