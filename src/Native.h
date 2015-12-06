/*
 * Native.h
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#ifndef NATIVE_H_
#define NATIVE_H_

#include "Query.h"

class Native: public Target {
public:
	Native();
	Native(Target);
	virtual ~Native();
	Point* getCAlphaCoords();
	void setCAlphaCoords(Point*);

private:
	Point* cAlphaCoords;
};

#endif /* NATIVE_H_ */
