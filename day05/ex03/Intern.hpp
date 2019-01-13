/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:17:41 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 14:34:40 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	Intern(void);
	Intern(Intern &obj);
	virtual ~Intern(void);
	Intern	&operator=(Intern const &r);

	Form	*makeForm(std::string form, std::string target);
};

#endif

