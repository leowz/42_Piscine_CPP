/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:11:22 by zweng             #+#    #+#             */
/*   Updated: 2019/01/14 18:12:33 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void): _intern(NULL), _signer(NULL), _executer(NULL)
{
}

OfficeBlock::~OfficeBlock(void) {}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer,
        Bureaucrat &executer): _intern(&intern), _signer(&signer),
    _executer(&executer)
{
}

void	OfficeBlock::setIntern(Intern &obj)
{
    this->_intern = &obj;
}
    
void	OfficeBlock::setSigner(Bureaucrat &obj)
{
    this->_signer = &obj;
}

void	OfficeBlock::setExecutor(Bureaucrat &obj)
{
    this->_executer = &obj;
}

void	OfficeBlock::doBureaucracy(std::string form, std::string target)
{
    Form *creation = NULL;

	if (!this->_intern || !this->_signer || !this->_executer)
	{
		throw OfficeBlock::NoEnoughPeopleException();
		return;
	}
	if (!(creation = this->_intern->makeForm(form, target)))
    {
        std::cout << "Form Not Exist" << std::endl;
        return ;
    }

	if (this->_signer->grade() > creation->sGrade())
	{
		delete creation;
		throw OfficeBlock::SignerLowGradeException();
		return;
	}
	creation->beSigned(*this->_signer);

	if (this->_signer->grade() > creation->eGrade())
	{
		delete creation;
		throw OfficeBlock::ExecuterLowGradeException();
		return;
	}
	this->_executer->executeForm(*creation);

	delete creation;
	return;

}

OfficeBlock::NoEnoughPeopleException::NoEnoughPeopleException(void) {}

OfficeBlock::NoEnoughPeopleException::
NoEnoughPeopleException(NoEnoughPeopleException const &obj)
{
    *this = obj;
}

OfficeBlock::NoEnoughPeopleException::~NoEnoughPeopleException(void) throw()
{
}

OfficeBlock::NoEnoughPeopleException
&OfficeBlock::NoEnoughPeopleException::NoEnoughPeopleException::
operator=(NoEnoughPeopleException const &r)
{
    (void)r;
    return (*this);
}
const char* OfficeBlock::NoEnoughPeopleException::what() const throw()
{
    return ("OfficeBlock Error: No Enough People in the Office!");
}

OfficeBlock::SignerLowGradeException::SignerLowGradeException(void)
{
	return;
}

OfficeBlock::SignerLowGradeException::SignerLowGradeException(SignerLowGradeException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::SignerLowGradeException::~SignerLowGradeException(void) throw()
{
	return;
}

OfficeBlock::SignerLowGradeException &OfficeBlock::SignerLowGradeException::operator=(SignerLowGradeException const &r)
{
	(void)r;
	return (*this);
}

const char* OfficeBlock::SignerLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: Signer's Grade is too low to sign this form");
}

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(void)
{
	return;
}

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(ExecuterLowGradeException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::ExecuterLowGradeException::~ExecuterLowGradeException(void) throw()
{
	return;
}

OfficeBlock::ExecuterLowGradeException &OfficeBlock::ExecuterLowGradeException::operator=(ExecuterLowGradeException const &r)
{
	(void)r;
	return (*this);
}

const char* OfficeBlock::ExecuterLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: No Interns Present");
}
