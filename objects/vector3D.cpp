/*
 * vector.cpp
 *
 *  Created on: Jul 2, 2016
 *      Author: Nate
 */
#include <cmath>
#include "vector3D.h"

vector3D<T> vector3D::operator +(vector3D prime){
	this->setXCoord(this->getXCoord() + prime.getXCoord());
	this->setYCoord(this->getYCoord() + prime.getYCoord());
	this->setZCoord(this->getXCoord() + prime.getZCoord());
	return *this;
}

vector3D<T> vector3D::operator -(vector3D prime){
	this->setXCoord(this->getXCoord() - prime.getXCoord());
	this->setYCoord(this->getYCoord() - prime.getYCoord());
	this->setZCoord(this->getXCoord() - prime.getZCoord());
	return *this;
}

vector3D<T> vector3D::operator *(vector3D prime){
	this->setXCoord(this->getXCoord() * prime.getXCoord());
	this->setYCoord(this->getYCoord() * prime.getYCoord());
	this->setZCoord(this->getZCoord() * prime.getZCoord());
	return *this;
}
