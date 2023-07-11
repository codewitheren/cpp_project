/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:05:44 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 16:19:11 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie z1("Ahmet");
    
    std::cout << std::endl;

    Zombie *z2 = newZombie("Mehmet");
    z2->announce();
    delete z2;

    std::cout << std::endl;

    randomChump("Ayşe");
}