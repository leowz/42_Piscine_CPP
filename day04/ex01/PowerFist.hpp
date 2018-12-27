/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 18:06:23 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:35:18 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist(void);
	PowerFist(const PowerFist &obj);
	~PowerFist(void);

	PowerFist		&operator=(const PowerFist &obj);

	void	attack(void) const;
};
#endif
