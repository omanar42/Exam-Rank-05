/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:43:31 by omanar            #+#    #+#             */
/*   Updated: 2023/06/18 13:03:25 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		virtual ASpell *clone() const = 0;
		void launch(ATarget const &target) const;
};

#endif
