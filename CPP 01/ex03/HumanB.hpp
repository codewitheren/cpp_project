/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:51:53 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 19:23:06 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
#define HUMANB__HPP

#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *_weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();      
        void setWeapon(Weapon &weapon);   
};

#endif