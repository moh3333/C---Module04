/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:47:30 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:47:30 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria{
public:
    Cure();
    Cure(std::string const& type);    
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);    
    virtual ~Cure();

    AMateria* clone() const ;
    void use(ICharacter& target);
};

#endif