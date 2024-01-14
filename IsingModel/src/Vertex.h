/*
 * Vertex.h
 *
 *  Created on: 14 Jan 2024
 *      Author: Robin
 */

#ifndef VERTEX_H_
#define VERTEX_H_

class Vertex {
public:
	Vertex();
	virtual ~Vertex();
	Vertex(const Vertex &other);
	Vertex& operator=(const Vertex &other);
	bool isSpin() const;
	void setSpin(bool spin);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);

private:
	int x;
	int y;
	bool spin;
};

#endif /* VERTEX_H_ */
