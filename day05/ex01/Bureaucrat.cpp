/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 13:54:56 by zweng             #+#    #+#             */
/*   Updated: 2019/01/12 19:14:44 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->_name = obj.name();
	this->_grade = obj.grade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {}

void		Bureaucrat::increment(const int i)
{
	if (this->grade() - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= i;
}

void		Bureaucrat::decrement(const int i)
{
	if (this->grade() + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += i;
}

std::string	Bureaucrat::name(void) const
{
	return (this->_name);
}

int			Bureaucrat::grade(void) const
{
	return (this->_grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException
		const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::
operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high !");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException
		const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::
operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low !");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.name() << ", bureaucrat grade " << obj.grade() << std::endl;
	return (os);
}

void		Bureaucrat::signForm(Form &obj)
{
	if (obj.isSigned())
	{
		std::cout << this->name() << " cannot sign "
			<< obj.name() << " because form is already signed" << std::endl;
	}
	else
	{
		obj.beSigned(*this);
	}
}
