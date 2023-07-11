/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:24:49 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:24:49 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& tmp){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = tmp;
}

Animal& Animal::operator=(const Animal &tmp){
    std::cout << "Animal assignment operator called" << std::endl;
    this->_type = tmp._type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType() const{
    return this->_type;
}