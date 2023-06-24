/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:23:50 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 13:33:00 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <map>

class TargetGenerator {
	private:
		std::map<std::string, ATarget *> _targets;
		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator=(const TargetGenerator &other);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &targetType);
		ATarget *createTarget(std::string const &targetType);
};

#endif
