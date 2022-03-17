/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:42 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 16:55:43 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){

}

Cat::Cat(const Cat &instance){
    *this = instance;
}

Cat::~Cat(){

}

Cat & Cat::operator = (const Cat &instance){
    //this->Attributes = instance.attributes
    return (*this);
}