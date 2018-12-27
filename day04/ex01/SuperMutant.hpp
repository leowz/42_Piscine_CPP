/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 18:54:38 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 19:18:41 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant(void);
	~SuperMutant(void);
	SuperMutant(const SuperMutant &obj);
	SuperMutant	&operator=(const SuperMutant &obj);

	virtual	void	takeDamage(int);
};

#endif
