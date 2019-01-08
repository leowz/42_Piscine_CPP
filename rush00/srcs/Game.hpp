/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:50:14 by zweng             #+#    #+#             */
/*   Updated: 2019/01/07 12:54:10 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include "ft_retro.hpp"

class Game
{


public:
    Game(void);
    Game(const Game &);
    ~Game(void);
    Game    &operator=(const Game &);

};
#endif
