/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 17:30:51 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:35:03 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &obj);
	PlasmaRifle		&operator=(const PlasmaRifle &obj);

	void	attack(void) const;
};
#endif
