/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:11:40 by zweng             #+#    #+#             */
/*   Updated: 2019/01/14 17:28:46 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class OfficeBlock
{
    Intern		*_intern;
    Bureaucrat	*_signer;
    Bureaucrat	*_executer;

    OfficeBlock(const OfficeBlock &);
    OfficeBlock &operator=(const OfficeBlock &);

public:
    OfficeBlock(void);
    OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer);
    virtual ~OfficeBlock(void);

    void	setIntern(Intern &obj);
    void	setSigner(Bureaucrat &obj);
    void	setExecutor(Bureaucrat &obj);
    void	doBureaucracy(std::string form, std::string target);

    class NoEnoughPeopleException : public std::exception
    {
        public:
            
            NoEnoughPeopleException(void);
            NoEnoughPeopleException(NoEnoughPeopleException const &obj);
            virtual ~NoEnoughPeopleException(void) throw();
            NoEnoughPeopleException &operator=(NoEnoughPeopleException
                    const &r);
            virtual const char* what() const throw();
    };

    class SignerLowGradeException : public std::exception
    {
        public:

            SignerLowGradeException(void);
            SignerLowGradeException(SignerLowGradeException const &obj);
            virtual ~SignerLowGradeException(void) throw();
            SignerLowGradeException &operator=(SignerLowGradeException const &r);
            virtual const char* what() const throw();
    };

    class ExecuterLowGradeException : public std::exception
    {
        public:

            ExecuterLowGradeException(void);
            ExecuterLowGradeException(ExecuterLowGradeException const &obj);
            virtual ~ExecuterLowGradeException(void) throw();
            ExecuterLowGradeException &operator=(ExecuterLowGradeException const &r);
            virtual const char* what() const throw();
    };

};

#endif

