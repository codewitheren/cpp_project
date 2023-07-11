#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& tmp){
    *this = tmp;
}

Brain& Brain::operator=(const Brain& tmp){
    std::cout << "Brain copy called" << std::endl;
    for(int i = 0; i < 100; i++){
        this->text[i] = tmp.text[i];
    }
    return *this;
}