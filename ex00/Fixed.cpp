#include "Fixed.hpp"

int Fixed::nbr = 8;

Fixed::Fixed(){
	n = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw){
	n = raw;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getrawbits member function called" << std::endl;
	return (n);
}

Fixed::Fixed(Fixed const &uno){
	std::cout << "copy constructor called" << std::endl;
	*this = uno;
}

Fixed &Fixed::operator=(const Fixed &uno){
	std::cout << "overloaded operator called" << std::endl;
	this->n = uno.getRawBits();
	return *this;
}