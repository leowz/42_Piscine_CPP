#include <string>
#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr;
    std::string &ref = str;

    ptr = &str;
    std::cout << "display by pointer:" << std::endl;
    std::cout << *ptr << std::endl; 
    std::cout << std::endl; 
    std::cout << "display by reference:" << std::endl;
    std::cout << ref << std::endl; 
}
