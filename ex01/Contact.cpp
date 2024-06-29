#include "Contact.hpp"
#include "iomanip"
void Contact::setValues(int i)
{
    is=i;
    std::cout<< "First Name: ";
    getline(std::cin,FirstName);
    std::cout<< "LastName: ";
    getline(std::cin,LastName);
    std::cout<< "NickName: ";
    getline(std::cin,NickName);
    std::cout<< "PhoneNumber: ";
    getline(std::cin,Darksecret);
    std::cout<< "Darksecret: ";
    getline(std::cin,Darksecret);

}
std::string println(std::string str)
{
    if(str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    else
    {
        return str;
    }
}
void Contact::getValues()
{
    if(FirstName.empty())
    {
        std::cout<<"empty slot\n";
        return;
    }
    std::cout << "|"<<std::setw(10)<<is 
    << "|"<<std::setw(10)<< println(FirstName)
    << "|" << std::setw(10)<<println(LastName)
    << "|" << std::setw(10)<<println(NickName)
    << "|" << std::setw(10)<<println(Darksecret)
    << std::endl;
}
// int main()
// {
//     Contact contact[8];
//     for(int i = 0; i < 8; i++)
//     {
//         contact[i].setValues();
//     }
//     for(int i = 0; i < 8; i++)
//     {
//         contact[i].getValues();
//     }
//     return 0;
// }