/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:35:27 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 13:07:39 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av){
    if(ac != 4){
        std::cout << "Hatalı argüman sayısı" << std::endl;
        return 1;
    }
    else{
        File file(av[1]);
        file.replace(av[2], av[3]);
    }
    return 0;
}