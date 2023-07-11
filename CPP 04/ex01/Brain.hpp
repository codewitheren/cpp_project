/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:26:54 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/11 12:33:33 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string text[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& tmp);
        Brain& operator=(const Brain& tmp);
};

#endif