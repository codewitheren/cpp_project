/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:19:32 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 16:36:58 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(){
    std::cout << "DEBUG : 7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info(){
    std::cout << "INFO : Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl; 
}

void Harl::warning(){
    std::cout << "WARNING : Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın." << std::endl;
}

void Harl::error(){
    std::cout << "ERROR : Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4 && levels[i].compare(level))
        i++;     
    switch (i)
    {
    case 0:
        this->debug();
    case 1:
        this->info();
    case 2:
        this->warning();
    case 3:
        this->error();
        break;
    default:
        std::cout << "Bulunamadı" << std::endl;
        break;
    }    
}