/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:30:53 by zweng             #+#    #+#             */
/*   Updated: 2019/01/17 15:43:00 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <iostream>
# include <list>
# include <string>
# include <ctime>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	std::list<T>		_stack;
public:

    MutantStack<T>(void) {}

    MutantStack(MutantStack const &r)
    {
        (void)r;
    }

    ~MutantStack<T>(void) {}

    MutantStack &operator=(MutantStack const &r)
    {
        (void)r;
    }

    T top(void)
    {
        return (this->_stack.front());
    }

    T size(void)
    {
        return (this->_stack.size());
    }

    typedef std::list<int>::iterator iterator;

    iterator begin()
    {
        return (this->_stack.begin());
    }

    iterator end() {
        return (this->_stack.end());
    }

    void push(T value)
    {
        this->_stack.push_front(value);
    }

    void pop(void)
    {
        this->_stack.pop_front();
    }
};
#endif
