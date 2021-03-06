/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:31:04 by zweng             #+#    #+#             */
/*   Updated: 2019/01/14 18:17:31 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <iomanip>
# include <sstream>
# include <fstream>

class Bureaucrat;

class Form
{
	const std::string	_name;
	const int			_signGrade;
	const int			_execGrade;
	bool				_isSigned;

public:
	Form(void);
	Form(std::string name, int sGrade, int eGrade);
	Form(const Form &obj);
	~Form(void);
	Form	&operator=(const Form &obj);

	std::string		name(void) const;
	bool			isSigned(void) const;
	int				sGrade(void) const;
	int				eGrade(void) const;

	void			beSigned(const Bureaucrat &obj);
	
	class	GradeTooHighException: public std::exception
	{
		public:

			GradeTooHighException(void);
			GradeTooHighException(const GradeTooHighException &);
			virtual ~GradeTooHighException() throw();
			GradeTooHighException	&operator=(const GradeTooHighException &);
			virtual const char	*what() const throw();
	};

	class	GradeTooLowException: public std::exception
	{
		public:

			GradeTooLowException(void);
			GradeTooLowException(const GradeTooLowException &);
			virtual ~GradeTooLowException() throw();
			GradeTooLowException	&operator=(const GradeTooLowException &);
			virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &, const Form &);
#endif
