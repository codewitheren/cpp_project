/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:13 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:13 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& tmp);
        Dog& operator=(const Dog& tmp);

        void makeSound() const;
};

#endif