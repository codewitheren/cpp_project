/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:25:05 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:25:05 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    private:
        Brain *_brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& tmp);
        Cat& operator=(const Cat& tmp);

        void makeSound() const;
};

#endif