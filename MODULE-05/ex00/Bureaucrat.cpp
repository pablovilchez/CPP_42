/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:33:18 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/21 14:34:31 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150) { }

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) { }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
		{
			_grade = 150;
			throw GradeTooHighException();
		}
		else if (grade > 150)
		{
			_grade = 150;
			throw GradeTooLowException();
		}
		_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) { }
		
Bureaucrat::~Bureaucrat() { }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	_grade = other._grade;
	return *this;
}

const std::string & Bureaucrat::getName() const
{
	return _name;
}

const int & Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::upGrade()
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException();
		_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::downGrade()
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException();
		_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
	return std::cout << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
}
	