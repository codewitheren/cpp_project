/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:17:11 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 16:18:00 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *temp = new Zombie[N];
    for(int i = 0; i < N; i++){
        temp[i].setName(name);
    }
    return temp;
}