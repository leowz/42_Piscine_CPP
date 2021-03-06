/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:06:53 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 12:43:07 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class	PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &); 
	~PresidentialPardonForm(void);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &); 

	void            execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &r); 

#endif

