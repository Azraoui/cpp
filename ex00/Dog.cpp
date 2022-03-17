/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:40 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 16:55:41 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){

}

Dog::Dog(const Dog &instance){
    *this = instance;
}

Dog::~Dog(){

}

Dog & Dog::operator = (const Dog &instance){
    //this->Attributes = instance.attributes
    return (*this);
}