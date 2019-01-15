/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:54:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/14 18:15:02 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int		main(void)
{
    Intern      idiotOne;
    Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);

    try
    {
        ob.doBureaucracy("presidential pardon", "Pigley");
    
    }
    catch (OfficeBlock::NoEnoughPeopleException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (OfficeBlock::SignerLowGradeException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (OfficeBlock::ExecuterLowGradeException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
