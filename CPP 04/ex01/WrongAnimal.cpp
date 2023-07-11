/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:30 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:30 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tmp){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = tmp;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &tmp){
    this->_type = tmp._type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->_type;
}