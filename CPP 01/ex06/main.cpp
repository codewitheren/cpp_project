/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:20:33 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 16:34:05 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    if(ac != 2){
        std::cout << "Hatalı argüman sayısı" << std::endl;
        return 1;
    }
    Harl h;
    h.complain(av[1]);
    return 0;  
}