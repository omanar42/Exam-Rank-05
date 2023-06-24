/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:50:48 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 12:51:36 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) : _type(type) {}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const {
	return this->_type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}
