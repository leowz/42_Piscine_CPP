/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:24:39 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 10:24:42 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed
{
    int                 _val;
    static const int    _fractional;
public:
    Fixed(void);
    Fixed(const Fixed & obj);
    Fixed(const int val);
    Fixed(const float val);
    ~Fixed(void);

    Fixed   &operator=(const Fixed & obj);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Fixed &obj);
#endif
