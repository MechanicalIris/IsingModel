/*
 * StateVariables.h
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#ifndef STATEVARIABLES_H_
#define STATEVARIABLES_H_

#include "Lattice.h"
#include "Vertex.h"

class StateVariables {
public:
	StateVariables();
	virtual ~StateVariables();
	void
	updateEnergy(Lattice &lattice);
	double getH() const;
	void setH(double h);
	double getJ() const;
	void setJ(double j);

private:
	double H;
	double J;

};

#endif /* STATEVARIABLES_H_ */
