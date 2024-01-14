/*
 * Vertex.cpp
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#include "Vertex.h"

Vertex::Vertex() :
x(0),
y(0),
spin(false)
{
}

Vertex::~Vertex()
{

}

Vertex::Vertex(const Vertex &other)
{
	this->x = other.getX();
	this->y = other.getY();
	this->spin = other.isSpin();
}

Vertex& Vertex::operator=(const Vertex &other) 
{
	this->x = other.getX();
	this->y = other.getY();
	this->spin = other.isSpin();
}


bool Vertex::isSpin() const {
return spin;
}

void Vertex::setSpin(bool spin) {
this->spin = spin;
}

int Vertex::getX() const {
return x;
}

void Vertex::setX(int x) {
this->x = x;
}

int Vertex::getY() const {
return y;
}

void Vertex::setY(int y) {
this->y = y;
}
