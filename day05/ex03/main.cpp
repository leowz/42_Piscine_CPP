/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:54:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/14 18:18:50 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	test("Big Bure", 1);
	Bureaucrat	test2("Small Bure", 150);

	Form	*f1;
	Form	*f2;
	Form	*f3;
	Intern	intern;
	
	f1 = intern.makeForm("Shrubbery Creation", "Home");
	f2 = intern.makeForm("Robotomy Request", "robot");
	f3 = intern.makeForm("Presidential Pardon", "Fugitive");
	std::cout << std::endl;

	f3->beSigned(test);
	test.executeForm(*f3);
	std::cout << std::endl;

	f2->beSigned(test);
	test.executeForm(*f2);
	std::cout << std::endl;

	f1->beSigned(test);
	test.executeForm(*f1);
	std::cout << std::endl;
	try
	{
		std::cout << "Error test: grade too low" << std::endl;
		test2.executeForm(*f2);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete f1;
	delete f2;
	delete f3;
	return (0);
}
