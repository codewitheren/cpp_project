/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:20:33 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 16:23:26 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl h;
    h.complain("DEBUG");
    std::cout << std::endl;
    h.complain("INFO");
    std::cout << std::endl;
    h.complain("WARNING");
    std::cout << std::endl;
    h.complain("ERROR");
}