/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:20:20 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 13:33:16 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook &src) {
	*this = src;
}

SpellBook &SpellBook::operator=(const SpellBook &other) {
	if (this != &other)
		_spells = other._spells;
	return *this;
}

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		_spells[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &spellName) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spellName);
	if (it != _spells.end())
		_spells.erase(it);
}

ASpell *SpellBook::createSpell(std::string const &spellName) {
	if (_spells.find(spellName) != _spells.end())
		return _spells[spellName]->clone();
	return NULL;
}
