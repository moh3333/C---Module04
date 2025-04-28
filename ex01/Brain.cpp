/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 00:48:19 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 00:48:19 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = "Default";
    }
    std::cout << "Brain Default Constructor Called\n";
    
}    
Brain::Brain(const Brain& other){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Constructor Called\n";
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Copy Assignment Operator Called\n";
    if (this != &other){
        for (int i = 0; i < 100; i++){
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called\n";
}