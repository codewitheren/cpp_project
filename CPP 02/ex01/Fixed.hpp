/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:42:37 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 11:42:37 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
       int _value;
       static const int _bits = 8;    
    public:
        Fixed();
        Fixed(const Fixed &tmp);
        Fixed(const int n);
        Fixed(const float n);
        Fixed& operator=(const Fixed &tmp);
        ~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat() const;
        int toInt() const;
};

std::ostream & operator<<(std::ostream &o, const Fixed &tmp);

#endif