/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:37:15 by zweng             #+#    #+#             */
/*   Updated: 2019/01/13 16:48:26 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &lhs, T &rhs)
{
	if (&lhs != &rhs)
	{
		T	tmp;
		tmp = lhs;
		lhs = rhs;
		rhs = tmp;
	}
}

template <typename T>
const T	&min(const T &lhs, const T &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

template <typename T>
const T	&max(const T &lhs, const T &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

int		main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
