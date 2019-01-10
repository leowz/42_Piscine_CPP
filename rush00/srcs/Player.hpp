/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:18:28 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:38:52 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "ft_retro.hpp"
# include "Enemy.hpp"

class	Player : public Enemy
{
public:
    Player(void);
    Player(int x, int y);
    Player(Player &obj);
    virtual ~Player(void);
    Player &operator=(Player const &r);

    int		loseLife(void);

    int		bulletHit(void);

};
#endif

