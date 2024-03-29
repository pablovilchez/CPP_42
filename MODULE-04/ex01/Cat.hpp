/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:31:53 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/17 15:00:53 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat(const Animal& other);
		~Cat();

		Cat& operator=(const Cat& other);

		void makeSound() const;

		void fillBrain(int num);
		void readBrain() const;
	
	private:
		Brain *_brain;
};

#endif