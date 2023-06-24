/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:46:00 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 13:05:22 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	private:
		std::string _type;
	public:
		ATarget(std::string const &type);
		virtual ~ATarget();

		std::string const &getType() const;

		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const &spell) const;
};

#endif
