/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:41:25 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 17:41:13 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA__HPP
#define HUMANA__HPP

#include "HumanA.hpp"
#include "HumanB.hpp"

class HumanA{
    private:
        Weapon &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();    
};

#endif