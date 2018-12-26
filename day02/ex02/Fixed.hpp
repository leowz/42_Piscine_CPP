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

    Fixed   operator+(const Fixed & obj) const;
    Fixed   operator-(const Fixed & obj) const;
    Fixed   operator*(const Fixed & obj) const;
    Fixed   operator/(const Fixed & obj) const;

    bool    operator>(const Fixed & obj) const;
    bool    operator<(const Fixed & obj) const;
    bool    operator>=(const Fixed & obj) const;
    bool    operator<=(const Fixed & obj) const;
    bool    operator==(const Fixed & obj) const;
    bool    operator!=(const Fixed & obj) const;

    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator++(int t);
    Fixed   operator--(int t);

    static Fixed   &min(Fixed &obj1, Fixed &obj2);
    static Fixed   &max(Fixed &obj1, Fixed &obj2);
    static const Fixed   &min(const Fixed &obj1, const Fixed &obj2);
    static const Fixed   &max(const Fixed &obj1, const Fixed &obj2);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Fixed &obj);
#endif
