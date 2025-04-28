/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-27 17:06:04 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-27 17:06:04 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():name("Default"){
    for (int i = 0; i < 4; i++){
        inventorySlots[i] = 0;
    }
}

Character::Character(std::string  name){
    this->name = name;
    for (int i = 0; i < 4; i++){
        inventorySlots[i] = 0;
    }
}

Character::Character(const Character& other){
    *this = other;
}

Character& Character::operator=(const Character& other){
    if (this != &other){
        this->name = other.getName();
        for (int i = 0; i < 4; i++){
            if (other.inventorySlots[i]){
                if (this->inventorySlots[i])
                    delete this->inventorySlots[i];
                this->inventorySlots[i] = other.inventorySlots[i]->clone();
            }
            else
                this->inventorySlots[i] = 0;
        }
    }
    return (*this);
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (inventorySlots[i]){
            delete inventorySlots[i];
        }
    }
}

std::string const & Character::getName() const{
    return (name);
}

void Character::equip(AMateria* m){
    if (!m)
        return ;
    for (int i = 0; i < 4; i++){
        if (inventorySlots[i] == 0){
            inventorySlots[i] = m->clone();
            delete m;
            return;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
        this->inventorySlots[idx] = 0;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && inventorySlots[idx])
        inventorySlots[idx]->use(target);
}
