/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:48:55 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 15:56:50 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "STR değişkeninin bellek adresi : " << &string << std::endl;
    std::cout << "stringPTR tarafından tutulan bellek adresi :" << stringPTR << std::endl;
    std::cout << "stringREF tarafından tutulan bellek adresi :" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "STR değişkeninin değeri : " << string << std::endl;
    std::cout << "stringPTR tarafından işaret edilen değer :" << *stringPTR << std::endl;
    std::cout << "stringREF tarafından işaret edilen değer :" << stringREF << std::endl;
}