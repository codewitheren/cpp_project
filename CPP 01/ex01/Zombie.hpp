/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:13:29 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 16:18:33 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif