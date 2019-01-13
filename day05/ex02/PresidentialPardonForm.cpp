/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:51 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 13:55:42 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):
	Form(obj.name(), 25, 5)
{
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	
	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
		(void)obj;
		return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if ((this->isSigned() == true) &&
			(executor.grade() <= this->eGrade()))
	{
		std::cout << this->name() <<
			" has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	else if (!this->isSigned())
	{
		std::cout <<
		"A Bureaucrat must signed this form first before it can be requested."
		<< std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &os, PresidentialPardonForm const &r)
{
	os << "Shrubbery Creation Form Details:" << std::endl
		<< "Name: " << r.name() << std::endl
		<< "Signing Grade Requirement: " << r.sGrade() << std::endl
		<< "Execution Grade Requirement: " << r.eGrade() << std::endl;
	if(r.isSigned())
		os << "Form has been signed." << std::endl;
	else
		os << "Form has not been signed yet." << std::endl;
	return (os);
}

