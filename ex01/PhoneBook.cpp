#include"PhoneBook.hpp"
#include<ctype.h>
#include"stdio.h"
void Phonebook::setValues(int i)
{
    fields[i].setValues(i);
}
void Phonebook::getValues(int i)
{    
    std::cout << "|"<<std::setw(10)<<"index" 
    << "|"<<std::setw(10)<< "FirstName"
    << "|" << std::setw(10)<<"LastName"
    << "|" << std::setw(10)<<"NickName"
    << std::endl;
    for(int k =0; k < i;k++)
        fields[k].getValues();
}
void Phonebook::lookfor()
{
    int index;
    std::string str;
    std::cout << "Enter index: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        exit(1);
    index = atoi(str.c_str());
    if(index < 0 || index > 7 || !isdigit(str[0]) || str.size()>1 )
    {
        std::cout << "Invalid index\n";
        return;
    }
    fields[index].values();
}
// #include <iostream>
// int main()
// {
//     std::string s = "123456";
//     char ss[7];
//     for(int i =0;i<7;i++)
//     {
//         ss[i] = s[i];
//     }
//     std::cout << atoi(ss)+1 << std::endl;
// }