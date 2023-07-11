/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:02:41 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/03 12:42:57 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

class File{
    private:
        std::string   _inFile;
        std::string   _outFile;
    public:
        File(std::string fileName);
        ~File();
        void replace(std::string s1, std::string s2);
};

#endif