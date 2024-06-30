#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include "Contact.hpp"
class Phonebook
{
        Contact fields[8];
    public:
    void setValues(int i);
    void getValues(int i);
    void lookfor();
};
#endif