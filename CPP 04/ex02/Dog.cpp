/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:09 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:09 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& tmp){
    *this = tmp;
}

Dog& Dog::operator=(const Dog& tmp){
    std::cout << "Dog copy called" << std::endl;
    this->_type = tmp._type;
    this->_brain = new Brain(*tmp._brain);
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Havvv" << std::endl;
}