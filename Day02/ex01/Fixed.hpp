/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:53:57 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/13 21:42:30 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int			_fixedPoint;
		static const int	_nbrOfFractional;
	
	public:
		Fixed();
		Fixed( const int fixedPoint );
		Fixed( const float floatNumber );
		Fixed( const Fixed &copy );
		Fixed & operator = ( Fixed const & instance );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream & operator << ( std::ostream & input, const Fixed & instance );

#endif