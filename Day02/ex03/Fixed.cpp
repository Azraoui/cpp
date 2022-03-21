/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:52:40 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 13:32:54 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nbrOfFractional = 8;

// ------------- Defualt Constructor --------------

Fixed::Fixed() : _fixedPoint(0)
{
}

// ------------- constant integer --------------------

Fixed::Fixed( const int & fixedPoint) : _fixedPoint(fixedPoint * 256)
{
}

// ------------- constant float number ---------------

Fixed::Fixed ( const float & floatNumber ) : _fixedPoint(roundf(floatNumber * 256))
{
}

//--------------- copy constructor ------------------

Fixed::Fixed( Fixed const & copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator = (const Fixed & instance)
{
	this->_fixedPoint = instance.getRawBits();
	return *this;
}

std::ostream &  operator << (std::ostream & input, Fixed const & instance)
{
	return (input << instance.toFloat());
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	float	floatNumber;

	floatNumber = ( float )getRawBits() / 256;
	return (floatNumber);
}

int		Fixed::toInt(void) const
{
	float	intNumber;

	intNumber = getRawBits() / 256;
	return (intNumber);
}

// The 6 comparison operators: >, <, >=, <=, == and !=

bool	Fixed::operator > ( Fixed const & instance ) const
{
	if (this->toFloat() > instance.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator < ( Fixed const & instance ) const
{
	if (this->toFloat() < instance.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator <= ( Fixed const & instance ) const
{
	if (this->toFloat() <= instance.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator >= ( Fixed const & instance ) const
{
	if (this->toFloat() >= instance.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator == ( Fixed const & instance ) const
{
	if (this->toFloat() == instance.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator != ( Fixed const & instance ) const
{
	if (this->toFloat() != instance.toFloat())
		return true;
	else
		return false;
}

// The 4 arithmetic operators: +, -, *, and /.

Fixed	Fixed::operator + ( Fixed const & instance ) const
{
	return Fixed(this->toFloat() + instance.toFloat());
}

Fixed	Fixed::operator - ( Fixed const & instance ) const
{
	return Fixed(this->toFloat() - instance.toFloat());
}

Fixed	Fixed::operator * ( Fixed const & instance ) const
{
	return Fixed(this->toFloat() * instance.toFloat());
}

Fixed	Fixed::operator / ( Fixed const & instance ) const
{
	return Fixed(this->toFloat() / instance.toFloat());
}

/*	The 4 increment/decrement (pre-increment and post-increment,
	pre-decrement and post-decrement) operators */

Fixed	Fixed::operator ++ ( void )
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator -- ( void )
{
	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed temp(this->toFloat());
	this->_fixedPoint++;
	return (temp);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed temp(this->toFloat());
	this->_fixedPoint--;
	return (temp);
}

//  public overloaded member functions

Fixed & Fixed::min( Fixed & fp1, Fixed & fp2)
{
	if (fp1 < fp2)
		return (fp1);
	else
		return (fp2);
}

Fixed const & Fixed::min( const Fixed & fp1, const Fixed & fp2)
{
	if (fp1 < fp2)
		return (fp1);
	else
		return (fp2);
}

Fixed & Fixed::max( Fixed & fp1, Fixed & fp2)
{
	if (fp1 > fp2)
		return (fp1);
	else
		return (fp2);
}

Fixed const & Fixed::max( Fixed const & fp1, Fixed const & fp2)
{
	if (fp1 > fp2)
		return (fp1);
	else
		return (fp2);
}