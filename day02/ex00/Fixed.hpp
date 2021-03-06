/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:24:18 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 10:24:22 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed
{
    int                 _val;
    static const int    _fractional;
public:
    Fixed(void);
    Fixed(const Fixed & obj);
    ~Fixed(void);

    Fixed   &operator=(const Fixed & obj);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif
