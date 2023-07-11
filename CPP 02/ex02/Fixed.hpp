/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:51:46 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 11:51:46 by muerdoga         ###   ########.fr       */
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
        ~Fixed();

        Fixed& operator=(const Fixed &tmp);

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat() const;
        int toInt() const;

        bool operator>(const Fixed &tmp) const;
        bool operator<(const Fixed &tmp) const;
        bool operator>=(const Fixed &tmp) const;
        bool operator<=(const Fixed &tmp) const;
        bool operator==(const Fixed &tmp) const;
        bool operator!=(const Fixed &tmp) const;

        Fixed operator+(const Fixed &tmp) const;
        Fixed operator-(const Fixed &tmp) const;
        Fixed operator*(const Fixed &tmp) const;
        Fixed operator/(const Fixed &tmp) const;

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed& b);
        static const Fixed& min(const Fixed &a, const Fixed& b);
        static Fixed& max(Fixed &a, Fixed& b);
        static const Fixed& max(const Fixed &a, const Fixed& b);

};

std::ostream & operator<<(std::ostream &o, const Fixed &tmp);

#endif