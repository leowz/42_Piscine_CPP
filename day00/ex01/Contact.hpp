/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:21:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/07 12:21:10 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _email;
    std::string _phone;
    std::string _birthday;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
public:
    void        setField(int index, const std::string str);
    std::string getField(int index);
};

#endif
