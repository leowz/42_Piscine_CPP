/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:54:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 14:07:59 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(int ac, char **av)
{
	Bureaucrat	test("Big Bure", 1);
	Bureaucrat	test2("Small Bure", 150);
	ShrubberyCreationForm f1("Home");
	RobotomyRequestForm f2("Robot");
	PresidentialPardonForm f3("Good guy");
	PresidentialPardonForm f4("Bad guy");

	f3.beSigned(test);
	test.executeForm(f3);
	std::cout << std::endl;

	f2.beSigned(test);
	test.executeForm(f2);
	std::cout << std::endl;

	f1.beSigned(test);
	test.executeForm(f1);
	std::cout << std::endl;
	try
	{
		std::cout << "Error test: grade too low" << std::endl;
		test2.executeForm(f2);
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

	try
	{
		std::cout << "Error test: not signed" << std::endl;
		test.executeForm(f4);
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

	return (0);
}
