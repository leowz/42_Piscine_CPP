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
