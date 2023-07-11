/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:20 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:20 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* a = new Animal();
    std::cout << std::endl;
    const Animal* d = new Dog();
    std::cout << std::endl;
    const Animal* c = new Cat();
    std::cout << std::endl;

    std::cout << "Animal Type: " << a->getType() << " " << std::endl;
    std::cout << "Dog Type: " << d->getType() << " " << std::endl;
    std::cout << "Cat Type: " << c->getType() << " " << std::endl;
    std::cout << std::endl;

    a->makeSound();
    d->makeSound();
    c->makeSound();
    std::cout << std::endl;
    
    delete  a;
    delete  d;
    delete  c;

    std::cout << std::endl << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal *w = new WrongAnimal();
    std::cout << std::endl;
    const WrongAnimal *wc = new WrongCat();
    std::cout << std::endl;

    std::cout << "Wrong Type: " << w->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wc->getType() << " " << std::endl;
    std::cout << std::endl;

    w->makeSound();
    wc->makeSound();
    std::cout << std::endl;

    delete  w;
    delete  wc;

    return 0;
}