/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:46:49 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 18:03:51 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Timer.hpp"

Timer::Timer(void) {}

Timer::Timer(clock_t t) : _timer(t) {}

Timer::Timer(Timer &obj)
{
	*this = obj;
}

Timer::~Timer(void) {}

Timer &Timer::operator=(Timer const &obj)
{
	this->_timer = obj._timer;
	return (*this);
}

int		Timer::checkTime(clock_t t)
{
	return ((this->_timer - t) / (CLOCKS_PER_SEC / 1000));
}

int		Timer::getSec(clock_t t)
{
	return ((t - this->_timer) / CLOCKS_PER_SEC);
}

