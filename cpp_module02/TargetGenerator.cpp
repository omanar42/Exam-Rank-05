/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:25:30 by omanar            #+#    #+#             */
/*   Updated: 2023/06/19 13:21:43 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator &src) {
	*this = src;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &other) {
	if (this != &other)
		_targets = other._targets;
	return *this;
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		_targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &targetType) {
	if (_targets.find(targetType) != _targets.end())
		_targets.erase(targetType);
}

ATarget *TargetGenerator::createTarget(std::string const &targetType) {
	if (_targets.find(targetType) != _targets.end())
		return _targets[targetType]->clone();
	return NULL;
}
