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

Fixed::Fixed(const int ar){
	std::cout << "Int constructor called" << std::endl;
	n = ar << nbr;
}

Fixed::Fixed(const float ft){
	std::cout << "Float constructor called" << std::endl;
	n = (int)(roundf(ft  * (1 << nbr)));
}

float Fixed::toFloat(void) const{
	return (((float)(n) / (1 << nbr)));
}

int Fixed::toInt(void) const{
	return (n >> nbr);
}

bool	Fixed::operator>(const Fixed &cp) const{
	return (this->n > cp.n);
}

bool	Fixed::operator<(const Fixed &cp) const{
	return (this->n < cp.n);
}

bool	Fixed::operator>=(const Fixed &cp) const{
	return (this->n >= cp.n);
}

bool	Fixed::operator<=(const Fixed &cp) const{
	return (this->n <= cp.n);
}

bool	Fixed::operator==(const Fixed &cp) const{
	return (this->n == cp.n);
}

bool	Fixed::operator!=(const Fixed &cp) const{
	return (this->n != cp.n);
}

Fixed Fixed::operator+(const Fixed &ad) const{
	Fixed res(this->toFloat() + ad.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed &ss) const{
	Fixed res(this->toFloat() - ss.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed &ff) const{
	Fixed res(this->toFloat() * ff.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed &dd) const{
	Fixed res(this->toFloat() / dd.toFloat());
	return (res);
}

Fixed& Fixed::operator++(){
	++this->n;
	return (*this);
}

Fixed& Fixed::operator--(){
	--this->n;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	++this->n;
	return (tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	--this->n;
	return (tmp);
}

Fixed &Fixed::operator=(const Fixed &uno){
	std::cout << "overloaded operator called" << std::endl;
	this->n = uno.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &f, Fixed &s){
	if (f >= s)
		return(s);
	return(f);
}

Fixed &Fixed::max(Fixed &f, Fixed &s){
	if (f > s)
		return(f);
	return(s);
}

const Fixed &Fixed::min(const Fixed &f, const Fixed &s){
	if (f >= s)
		return(s);
	return(f);
}

const Fixed &Fixed::max(const Fixed &f, const Fixed &s){
	if (f > s)
		return(f);
	return(s);
}