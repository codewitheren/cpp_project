/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:40:03 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 11:40:03 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Varsayılan Kurucu Çağrıldı" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &tmp){
    std::cout << "Kopyalama Kurucusu Çağrıldı" << std::endl;
    this->_value = tmp.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &tmp){
    std::cout << "Kopyalama Atama Operatörü Çağrıldı" << std::endl;
    this->_value = tmp.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Yıkıcı Çağrıldı" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits Fonksiyonu Çağrıldı" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}
