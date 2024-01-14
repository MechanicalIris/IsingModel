/*
 * Vertex.h
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

//Spin takes values in the set {-1,1}

#ifndef VERTEX_H_
#define VERTEX_H_

class Vertex {
public:
	Vertex();
	virtual ~Vertex();
	Vertex(const Vertex &other);
	Vertex& operator=(const Vertex &other);
	int getSpin() const;
	void setSpin(int spin);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);

private:
	int x;
	int y;
	int spin;
};

#endif /* VERTEX_H_ */
