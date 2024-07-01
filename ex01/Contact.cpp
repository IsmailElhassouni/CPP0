#include "Contact.hpp"
#include "iomanip"
static int ispr(std::string str)
{
    for(int i =0;str[i];i++)
        {
            if(!std::isprint(str[i]))
            {
                std::cout<<"i dont take non printable chars\n";
                return 0;
            }
        }
        return 1;
}
void Contact::setValues(int i)
{
    while(1)
    {
        is=i;
    std::cout<< "First Name: \n";
    getline(std::cin,FirstName);
        if(std::cin.eof())
            std::exit(1);
        
        if(ispr(FirstName) == 0)
            FirstName="";
        if(!FirstName.empty())
            break;
    }
    while(1)
    {
    std::cout<< "Last Name: \n";
    getline(std::cin,LastName);
        if(std::cin.eof())
            std::exit(1);
        if(ispr(LastName) == 0)
           LastName="";
        if(!LastName.empty())
            break;
    }
    while(1)
    {
    std::cout<< "Nick Name: \n";
    getline(std::cin,NickName);
        if(std::cin.eof())
            std::exit(1);
        if(ispr(NickName) == 0)
            NickName="";
        if(!NickName.empty())
            break;
    }
    while(1)
    {
        std::cout << "Phone number: \n";
        getline(std::cin,PhoneNumber);
        if(std::cin.eof())
            std::exit(1);
        if(ispr(PhoneNumber) == 0)
            PhoneNumber="";
        if(!PhoneNumber.empty())
            break;
    }
    while(1)
    {
    std::cout<< "Dark Secret: \n";
    getline(std::cin,Darksecret);
        if(std::cin.eof())
            std::exit(1);
        if(ispr(Darksecret) == 0)
           Darksecret ="";
        if(!Darksecret.empty())
            break;
    }
    // std::cout<< "LastName: ";
    // getline(std::cin,LastName);
    // std::cout<< "NickName: ";
    // getline(std::cin,NickName);
    // std::cout<< "PhoneNumber: ";
    // getline(std::cin,Darksecret);
    // std::cout<< "Darksecret: ";
    // getline(std::cin,Darksecret);

}
static std::string println(std::string str)
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
    << "\n";
}
void Contact::values()
{
    if(FirstName.empty())
    {
        std::cout<<"empty slot\n";
        return;
    }
    std::cout<<"First Name\t"<<FirstName
    <<"\nLastName\t"<<LastName
    <<"\nNickName\t"<<NickName
    <<"\nPhoneNumber\t"<<PhoneNumber
    <<"\nDarksecret\t"<<Darksecret
    <<"\n";
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