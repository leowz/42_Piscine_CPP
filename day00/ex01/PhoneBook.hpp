#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    Contact _contacts[8];
    int     _current_size;
    void    _addContact(void);
    void    _printSearch(void);
    void    _printContact(int index);
    void    _displayPrompt(void);

public:
            PhoneBook(void);
    void    start(void);
};
#endif
