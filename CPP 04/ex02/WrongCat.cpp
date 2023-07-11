/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:40 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:40 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "Miyavvv" << std::endl;
}