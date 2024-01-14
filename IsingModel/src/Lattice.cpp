/*
 * Lattice.cpp
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#include "Lattice.h"


Lattice::Lattice(unsigned int xDim, unsigned int yDim, bool spin):
		xDim(xDim),
		yDim(yDim),
		grid(new Vertex*[xDim])
{
	std::cout << "Lattice constructor called for " << xDim << " by " << yDim << "grid with all spins aligned " << spin << std::endl;

	for(unsigned int i = 0; i < xDim; i++)
	{
		grid[i] = new Vertex[yDim];
		std::memset(grid[i], spin, yDim*sizeof(bool));
	}
}

Lattice::~Lattice()
{

	for(unsigned int i = 0; i < this->xDim; i++)
		delete[] grid[i];
	delete[] grid;
}


unsigned int Lattice::getXDim() const {
	return xDim;
}

void Lattice::setXDim(unsigned int xDim) {
	this->xDim = xDim;
}

unsigned int Lattice::getYDim() const {
	return yDim;
}

void Lattice::setYDim(unsigned int yDim) {
	this->yDim = yDim;
}

const Vertex& Lattice::getVertex(unsigned int x, unsigned int y)
{
	return grid[x][y];
}

