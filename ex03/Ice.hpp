/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice..hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:47:33 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:47:33 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice(std::string const& type);    
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);    
    virtual ~Ice();

    AMateria* clone() const ;
    void use(ICharacter& target);
};

#endif