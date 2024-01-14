/*
 * StateVariables.cpp
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#include "StateVariables.h"

StateVariables::StateVariables():
	H(0),
	J(0)
{

}

StateVariables::~StateVariables() {
	// TODO Auto-generated destructor stub
}



void
StateVariables::updateEnergy(Lattice &lattice)
{
	H = 0;
	unsigned int xDim = lattice.getXDim();
	unsigned int yDim = lattice.getYDim();
	for(unsigned int i = 0; i < xDim; i++)
	{
		for(unsigned int j = 0; j < yDim; j++)
		{
			double spin = lattice.getVertex(i, j).getSpin();
			if(i != 0 || i != xDim -1 || j != 0 || j != yDim -1)
			{
				double nearestNbrEnergy = 0;
				nearestNbrEnergy += spin*lattice.getVertex(i-1,j).getSpin();
				nearestNbrEnergy += spin*lattice.getVertex(i+1,j).getSpin();
				nearestNbrEnergy += spin*lattice.getVertex(i,j-1).getSpin();
				nearestNbrEnergy += spin*lattice.getVertex(i,j+1).getSpin();
				H -= nearestNbrEnergy;

			}
		}
	}
}

double StateVariables::getH() const {
	return H;
}

void StateVariables::setH(double h) {
	H = h;
}

double StateVariables::getJ() const {
	return J;
}

void StateVariables::setJ(double j) {
	J = j;
}
