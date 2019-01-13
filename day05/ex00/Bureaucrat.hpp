/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 13:54:38 by zweng             #+#    #+#             */
/*   Updated: 2019/01/12 16:54:39 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <iomanip>
# include <sstream>
# include <fstream>

class Bureaucrat 
{
	std::string	_name;
	int			_grade;

public:
	Bureaucrat(void);
	Bureaucrat(const std::string, int);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat	&operator=(const Bureaucrat &);
	virtual ~Bureaucrat(void);

	std::string	name(void) const;
	int			grade(void) const;

	void		increment(const int);
	void		decrement(const int);

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

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif
