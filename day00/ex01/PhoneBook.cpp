#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_current_size = 0;
}

void    PhoneBook::_displayPrompt(void)
{
    std::cout << "please input a command: ";
}

void    PhoneBook::_addContact(void)
{
    int         i;
    std::string line;
    std::string arr[11] = {"first name", "last name", "nickname", "login", "postal address",
    "email address", "phone number", "birthday data", "favorite meal", "underwear color", 
    "darkest secret"};

    i = 0;
    line = "";
    while (i < 11)
    {
        std::cout << "Input " << arr[i] << ": ";
        std::getline(std::cin, line);
        this->_contacts[this->_current_size].setField(i, line);
        i++;
    }
    this->_current_size++;
}

std::string trim_string(std::string str)
{
    std::string ret;

    if (str.length() > 10)
    {
        ret = str.substr(0, 9);
        ret += ".";
    }
    else
        ret = str;
    return (ret);
}

void    PhoneBook::_printContact(int index)
{
    int         i = 0;
    std::string arr[11] = {"first name", "last name", "nickname", "login", "postal address",
    "email address", "phone number", "birthday data", "favorite meal", "underwear color", 
    "darkest secret"};

    if (index < 0 && index > this->_current_size)
        std::cout << "index of the contact does not exist" << std::endl;
    else
    {
        while (i < 11)
        {
            std::cout << arr[i] << " : " << this->_contacts[index].getField(i) << std::endl;
            i++;
        }
    }
}

void    PhoneBook::_printSearch(void)
{
    int         i = 0;
    int         index = -1;
    std::string tmp;

    if (this->_current_size <= 0)
        std::cout << "No contact find, add one!"<< std::endl;
    else
    {
        std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
        while (i < this->_current_size)
        {
            std::cout << "|         " << (i + 1) << "|";
            std::cout << std::setw(10) << trim_string(this->_contacts[i].getField(0)) << "|";
            std::cout << std::setw(10) << trim_string(this->_contacts[i].getField(1)) << "|";
            std::cout << std::setw(10) << trim_string(this->_contacts[i].getField(2))
                << "|" << std::endl;
            i++; 
        }
        std::cout << std::endl;
        std::cout << "Choose a index to get full details: ";
        std::cin >> index;
        std::getline(std::cin, tmp);
        this->_printContact(index - 1);
    }
}

void    PhoneBook::start(void)
{
    std::string line;

    while (42)
    {
        line = "";
        this->_displayPrompt();
        std::getline(std::cin, line);
        if (line == "ADD")
        {
            if (this->_current_size < 9)
                this->_addContact();
            else
                std::cerr << "PhoneBook Full" << std::endl;
        }
        else if (line == "SEARCH")
            this->_printSearch();
        else if (line == "EXIT")
            break ;
        else
            std::cerr << "PhoneBook Comand not found: " << line << std::endl;
        std::cout << std::endl;
    }
}
