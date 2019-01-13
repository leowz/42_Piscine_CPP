/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:54:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/12 19:19:12 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(int ac, char **av)
{
	try
	{
		std::cout << "Error test" << std::endl;
		Bureaucrat test1("test1", 1);
		Form		form("A Form", 151, 100);
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
		std::cout << "Error test" << std::endl;
		Bureaucrat test1("test1", 1);
		Form		form("A Form", 140, 0);
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
		std::cout << "Sign Test" << std::endl;
		Bureaucrat test("test1", 140);
		std::cout << test;
		Form		form("A Form", 130, 100);
		std::cout << form;

		form.beSigned(test);
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
		std::cout << "Sign Test" << std::endl;
		Bureaucrat test("test1", 10);
		std::cout << test;
		Form		form("A Form", 130, 100);
		std::cout << form;

		form.beSigned(test);

		std::cout << std::endl;
		std::cout << form;
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
