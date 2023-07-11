/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:40:21 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 17:40:36 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        std::string& getType();
        void setType(std::string type);
};

#endif