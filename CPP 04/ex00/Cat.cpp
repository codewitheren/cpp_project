/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:00 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:00 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& tmp){
    *this = tmp;
}

Cat& Cat::operator=(const Cat& tmp){
    this->_type = tmp._type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Miyavvv" << std::endl;
}