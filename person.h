#ifndef PERSON_H
#define PERSON_H
#include <QString>


class Person
{
private:
    QString name, vorname, email;
    int alter;

public:
    Person();

    void setName(QString name);
    void setVorname(QString vorname);
    void setEmail(QString email);
    void setAlter(int alter);

    QString getName();
    QString getVorname();
    QString getEmail();
    int getAlter();
};

#endif // PERSON_H
