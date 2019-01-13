/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:43 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 12:51:51 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class	ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &); 
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &); 

	void            execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &r); 
#endif

