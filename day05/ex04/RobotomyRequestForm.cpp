/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:45 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 13:58:45 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):
	Form(obj.name(), 72, 45)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm	
	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
		(void)obj;
		return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	int		i;

	srand (time(NULL));
	i = rand();
	if ((this->isSigned() == true) &&
			(executor.grade() <= this->eGrade()))
	{
		std::cout << "* Bzzt... BZZZT... VrrrrRrRRRRRrrrr... *" << std::endl;
		if (i % 2 == 0)
			std::cout << this->name() <<
				" has been robotomized successfully" << std::endl;
		else
			std::cout << this->name() <<
				" has failed to be robotomized" << std::endl;
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

std::ostream	&operator<<(std::ostream &os, RobotomyRequestForm const &r)
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
