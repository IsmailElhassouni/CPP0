#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <stdlib.h>
class Contact
{
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string Darksecret;
        int is;
        public:
        void setValues(int i);
        void getValues();
        void values();

};
#endif