/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:16:50 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 14:37:02 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern &obj)
{
	*this = obj;
}

Intern::~Intern(void) {}

Intern	&Intern::operator=(Intern const &r)
{
	(void)r;
	return (*this);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	if (form == "shrubbery creation" || form == "Shrubbery Creation")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "robotomy request" || form == "Robotomy Request")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "presidential pardon" || form == "Presidential Pardon")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else
		std::cout << "Itern failed to create " << form << std::endl;
	return (NULL);
}
