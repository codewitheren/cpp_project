#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Varsayılan Kurucu Çağrıldı" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &tmp){
    std::cout << "Kopyalama Kurucusu Çağrıldı" << std::endl;
    *this = tmp;
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
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}

Fixed::Fixed(const int n){
    this->_value = n << this->_bits;
    std::cout << "Int Kurucu Çağrıldı" << std::endl;
}

Fixed::Fixed(const float n){
    this->_value = std::roundf(n * (1 << this->_bits));
    std::cout << "Float Kurucu Çağrıldı" << std::endl;
}

int Fixed::toInt() const{
    return this->_value >> _bits;
}

float Fixed::toFloat() const{
    return static_cast<float>(this->_value) / (1 << this->_bits);
}

std::ostream& operator<<(std::ostream &os, const Fixed &tmp){
    os << tmp.toFloat();
    return os;
}

