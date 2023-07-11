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
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;

    Dog d1;
    Dog d2 = d1;
    std::cout << std::endl;

    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    std::cout << std::endl;
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
        std::cout << std::endl;
    }

    return 0;
}