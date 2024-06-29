#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
class Contact
{
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneBook;
        std::string Darksecret;
        int is;
        public:
        void setValues(int i);
        void getValues();
        

};
#endif