/*
 * Lattice.h
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#ifndef LATTICE_H_
#define LATTICE_H_

#include <vector>
#include <iostream>
#include <cstring>

#include "Vertex.h"

class Lattice {
public:
	Lattice(unsigned int xDim, unsigned int yDim, bool spin);
	virtual ~Lattice();
private:
	unsigned int xDim;
	unsigned int yDim;
	Vertex** grid;
};

#endif /* LATTICE_H_ */
