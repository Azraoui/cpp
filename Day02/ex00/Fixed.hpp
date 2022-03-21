/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:02:02 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/12 18:53:15 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			_fixedPoint;
		static const int	_nbrOfFractional;
	
	public:
		Fixed();
		Fixed( int fixedPoint );
		Fixed( const Fixed &copy );
		Fixed & operator = ( Fixed const & instance );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();
};

std::ostream & operator << ( std::ostream & input, const Fixed & instance );

# endif
