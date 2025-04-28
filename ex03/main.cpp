/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:15:37 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:15:37 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    ICharacter* me1 = new Character("messss");
    AMateria* tmp = src->createMateria("ice");
    AMateria* tmp2= src->createMateria("ice");
    AMateria* tmp3= src->createMateria("ice");
    AMateria* tmp4= src->createMateria("ice");
    // AMateria* tmp5= src->createMateria("ice");
    // AMateria* tmp5= src->createMateria("ice");
    
    
    me->equip(tmp);
    me->equip(tmp2);
    me->equip(tmp3);
    me->unequip(1);
    // me->unequip(2);
    // me->unequip(3);
    // me->unequip(0);q
    me->equip(tmp4);

    me->use(1, *me1);

    delete me;
    delete me1;
    delete src;
    delete tmp2;

    return 0;
}
