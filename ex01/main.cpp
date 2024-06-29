#include<iostream>
#include"PhoneBook.hpp"

int main()
{
    Phonebook phonebook;
    int i=0,j = 0;
    std::string command;
    while(command != "EXIT")
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if(!std::cin.eof())
        {if( i == 8)
            i = 0;
        if(command == "ADD")
        {
            phonebook.setValues(i);
            i++;
            if (j != 8)
                j++;
        }
        else if(command == "SEARCH")
        {
            phonebook.getValues(j);
            phonebook.lookfor();
        }
        else if(command != "EXIT")
        {
            std::cout << "Invalid command{" << command << "}\n";
        }}
        else
            break;
    }
    return 0;
}