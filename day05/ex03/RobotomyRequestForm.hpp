/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:49 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 12:43:09 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class	RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &); 
	~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &); 

	void            execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &r); 

#endif

