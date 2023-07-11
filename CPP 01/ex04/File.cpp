/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:35:47 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 13:05:06 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string fileName) : _inFile(fileName){
    this->_outFile = this->_inFile + ".replace";
}

File::~File(){
}

void File::replace(std::string s1, std::string s2){
    std::ifstream ifs(this->_inFile);
    if(ifs.is_open()){
        std::string content;
        if(std::getline(ifs, content, '\0')){
            std::ofstream ofs(this->_outFile);
            size_t loc = content.find(s1);
            while(loc != std::string::npos){
                content.erase(loc, s1.length());
                content.insert(loc, s2);
                loc = content.find(s1);
            }
            ofs << content;
            ofs.close();
        }
        else{
            std::cout << "Dosya boş" << std::endl;   
        }
        ifs.close();
    }
    else{
        std::cout << "Dosya açılamadı" << std::endl;
        exit(1);
    }
}