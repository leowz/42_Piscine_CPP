/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:21:24 by zweng             #+#    #+#             */
/*   Updated: 2019/01/07 12:21:29 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
