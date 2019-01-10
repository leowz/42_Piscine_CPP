/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:47:03 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 17:50:00 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_HPP
# define TIMER_HPP

# include "ft_retro.hpp"

class Timer 
{
    clock_t	_timer;

public:
    Timer(void);
    Timer(clock_t t);
    Timer(Timer &obj);
    virtual ~Timer(void);
    Timer &operator=(Timer const &r);

    int		checkTime(clock_t t);
    int		getSec(clock_t t);
};
#endif
