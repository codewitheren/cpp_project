/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:24:57 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:24:57 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal{
    protected:
        std::string _type; 
    public:
        Animal();
        Animal(std::string type);

        virtual ~Animal();

        Animal(const Animal& tmp);
        Animal& operator=(const Animal& tmp);

        virtual void makeSound() const;
        std::string getType() const;
};

#endif