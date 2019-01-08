/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:11:11 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:29:17 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
    std::string _name;
    std::string _gender;
    int         _age;

public:
    Pony(void);
    Pony(std::string name, std::string gender, int age);
    ~Pony(void);
    std::string name(void);
    std::string gender(void);
    int         age(void);
    void        ponyRun(void);
    void        ponyCry(void);
};
#endif
