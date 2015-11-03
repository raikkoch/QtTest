#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person
{
private:
    std::string name, vorname, email;
    int alter;

public:
    Person();

    void setName(std::string name);
    void setVorname(std::string vorname);
    void setEmail(std::string email);
    void setAlter(int alter);

    std::string getName();
    std::string getVorname();
    std::string getEmail();
    int getAlter();
};

#endif // PERSON_H
