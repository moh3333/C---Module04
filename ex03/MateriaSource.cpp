/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-27 19:52:58 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-27 19:52:58 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4;i++){
        materias[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other){
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if(this != &other){
        for (int i = 0;i < 4; i++){
            delete this->materias[i];
            this->materias[i] = 0;
            if(other.materias[i])
                this->materias[i] = other.materias[i]->clone();
        }
    }
    return (*this);
}   

MateriaSource::~MateriaSource(){
    for (int i = 0;i < 4; i++){
        if (this->materias[i])
            delete materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if (!m)
        return;
    for (int i = 0;i < 4;i++){
        if (this->materias[i] == 0){
            this->materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (this->materias[i] &&  this->materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    return 0;
}
