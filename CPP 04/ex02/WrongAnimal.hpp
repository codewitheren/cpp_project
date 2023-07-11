/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:34 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:34 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();

        WrongAnimal(const WrongAnimal& tmp);
        WrongAnimal& operator=(const WrongAnimal& tmp);

        void makeSound() const;
        std::string getType() const;
};

#endif