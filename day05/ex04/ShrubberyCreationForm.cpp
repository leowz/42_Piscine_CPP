/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:39 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 13:59:41 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):
	Form(obj.name(), 145, 137)
{
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	
	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
		(void)obj;
		return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if ((this->isSigned() == true) &&
			(executor.grade() <= this->eGrade()))
	{
		std::string		file = this->name() + "_shrubbery";
		std::ofstream	ofs(file);
		ofs << 
"                                                         ." << std::endl <<
"                                              .         ;  " << std::endl <<
"                 .              .              ;%     ;;   " << std::endl <<
"                   ,           ,                :;%  %;  " << std::endl <<
"                    :         ;                   :;%;'     .," << std::endl<<
"           ,.        %;     %;            ;        %;'    ,; " << std::endl <<
"             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl <<
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
"                      `@%:.  :;%.         ;@@%;'  " << std::endl << 
"                        `@%.  `;@%.      ;@@%;  " << std::endl <<       
"                          `@%%. `@%%    ;@@%;  " << std::endl <<      
"                            ;@%. :@%%  %@@%;  " << std::endl <<     
"                              %@bd%%%bd%%:;  " << std::endl <<   
"                                #@%%%%%:;;" << std::endl <<
"                                %@@%%%::;" << std::endl <<
"                                %@@@%(o);  . '   " << std::endl <<      
"                                %@@@o%;:(.,'  " << std::endl <<       
"                            `.. %@@@o%::;    " << std::endl <<     
"                               `)@@@o%::;     " << std::endl <<    
"                                %@@(o)::;     " << std::endl <<   
"                               .%@@@@%::;         " << std::endl <<
"                               ;%@@@@%::;.        " << std::endl <<  
"                              ;%@@@@%%:;;;. " << std::endl <<
"                          ...;%@@@@@%%:;;;;,..   " << std::endl;
		ofs.close();
		std::cout << "Shrubbery Form has been executed by " << executor.name()
		<< std::endl;
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

std::ostream	&operator<<(std::ostream &os, ShrubberyCreationForm const &r)
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
