/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:46:37 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 10:24:58 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_nbrOfFractional;
	
	public:
		Fixed();
		Fixed( const float & floatNumber );
		Fixed( const int & fixedPoint );
		Fixed( const Fixed & copy );
		Fixed & operator = ( Fixed const & instance );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator > ( Fixed const & instance ) const;
		bool	operator < ( Fixed const & instance ) const;
		bool	operator >= ( Fixed const & instance ) const;
		bool	operator <= ( Fixed const & instance ) const;
		bool	operator == ( Fixed const & instance ) const;
		bool	operator != ( Fixed const & instance ) const;
		Fixed	operator + ( Fixed const & instance ) const;
		Fixed	operator - ( Fixed const & instance ) const;
		Fixed	operator * ( Fixed const & instance ) const;
		Fixed	operator / ( Fixed const & instance ) const;
		Fixed	operator ++ ( void );
		Fixed	operator -- ( void );
		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );
		static	Fixed & min( Fixed & fp1, Fixed & fp2);
		static	Fixed const & min( const Fixed & fp1, const Fixed & fp2);
		static	Fixed & max( Fixed & fp1, Fixed & fp2);
		static	Fixed const & max( Fixed const & fp1, Fixed const & fp2);
		~Fixed();
};

std::ostream & operator << ( std::ostream & input, const Fixed & instance );

#endif