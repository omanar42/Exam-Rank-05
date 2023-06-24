/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:39:38 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 13:09:39 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const {
	return _name;
}

std::string const &Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell)
		_spells[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spellName);
	if (it != _spells.end())
		_spells.erase(it);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spellName);
	if (it != _spells.end())
		it->second->launch(target);
}
