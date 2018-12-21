#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_val = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(val << _fractional);
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(val * (1 << _fractional)));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    if (this !=  &obj || *this != obj)
        this->setRawBits(obj.getRawBits());
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return (this->_val);
}

void    Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << _fractional));
}

int     Fixed::toInt(void) const
{
    return (getRawBits() >> _fractional);
}

std::ostream    &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed   Fixed::operator+(const Fixed & obj)
{
    return (this->_val + obj.getRawBits());
}

Fixed   Fixed::operator-(const Fixed & obj)
{
    return (this->_val - obj.getRawBits());
}

Fixed   Fixed::operator*(const Fixed & obj)
{
    return (this->toFloat() * obj.toFloat());
}

Fixed   Fixed::operator/(const Fixed & obj)
{
    if (obj.toFloat() == 0)
    {
        std::cout << "Cannot divide by 0, resolving results to 0." << std::endl;
		return (Fixed(0));
    }
    return (this->toFloat() / obj.toFloat());
}

bool    Fixed::operator>(const Fixed & obj)
{
    return (this->toFloat() > obj.toFloat());
}

bool    Fixed::operator<(const Fixed & obj)
{
    return (this->toFloat() < obj.toFloat());
}

bool    Fixed::operator>=(const Fixed & obj)
{
    return (this->toFloat() >= obj.toFloat());
}

bool    Fixed::operator<=(const Fixed & obj)
{
    return (this->toFloat() <= obj.toFloat());
}

bool    Fixed::operator==(const Fixed & obj)
{
    return (this->toFloat() == obj.toFloat());
}
bool    Fixed::operator!=(const Fixed & obj)
{
    return (this->toFloat() != obj.toFloat());
}

Fixed   &Fixed::operator++(void)
{
    setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed   &Fixed::operator--(void)
{
    setRawBits(this->getRawBits() - 1);
    return (*this);
}

Fixed   Fixed::operator++(int t)
{
    return (Fixed(this->getRawBits() + 1));
}

Fixed   Fixed::operator--(int t)
{
    return (Fixed(this->getRawBits() - 1));
}

Fixed   &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    return (obj2);
}

Fixed   &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    return (obj2);
}

const Fixed   &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    return (obj2);
}
    static const Fixed   &max(const Fixed &obj1, const Fixed &obj2);

const int   Fixed::_fractional = 8;
