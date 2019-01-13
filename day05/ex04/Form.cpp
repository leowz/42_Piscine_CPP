/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:30:55 by zweng             #+#    #+#             */
/*   Updated: 2019/01/12 19:17:29 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name(""), _signGrade(1), _execGrade(1) {}

Form::Form(std::string name, int sGrade, int eGrade): _name(name),
	_signGrade(sGrade), _execGrade(eGrade), _isSigned(false)
{
	if (sGrade < 1 || eGrade < 1)
		throw Form::GradeTooHighException();
	else if (sGrade > 150 || eGrade > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(const Form &obj): _name(obj.name()), _signGrade(obj.sGrade()),
	_execGrade(obj.eGrade())
{
	*this = obj;
}

Form::~Form(void) {}

Form	&Form::operator=(const Form &obj)
{
	this->_isSigned= obj.isSigned();
	return (*this);
}

std::string		Form::name(void) const
{
	return (this->_name);
}

bool			Form::isSigned(void) const
{
	return (this->_isSigned);
}

int				Form::sGrade(void) const
{
	return (this->_execGrade);
}

int				Form::eGrade(void) const
{
	return (this->_signGrade);
}

void			Form::beSigned(const Bureaucrat &obj)
{
	if (obj.grade() > this->sGrade())
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_isSigned = true;
		std::cout << this->name() << " is signed!" << std::endl;
	}
}

Form::GradeTooHighException::GradeTooHighException(void) {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException
		const &obj)
{
	*this = obj;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException &Form::GradeTooHighException::
operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high !");
}

Form::GradeTooLowException::GradeTooLowException(void) {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException
		const &obj)
{
	*this = obj;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException &Form::GradeTooLowException::
operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low !");
}

std::ostream	&operator<<(std::ostream &os, const Form &obj)
{
	os << "Form Details:" << std::endl
	<< "Name: " << obj.name() << std::endl
	<< "Signing Grade Requirement: " << obj.sGrade() << std::endl
	<< "Execution Grade Requirement: " << obj.eGrade() << std::endl;
	if(obj.isSigned())
		os << "Form has been signed." << std::endl;
	else
		os << "Form has not been signed yet." << std::endl;
	return (os);
}
