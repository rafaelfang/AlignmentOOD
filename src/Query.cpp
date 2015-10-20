/*
 * Query.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#include "Query.h"

Query::Query() {
	// TODO Auto-generated ructor stub

}

Query::~Query() {
	// TODO Auto-generated destructor stub
}

string& Query::getQueryName() {
	return queryName;
}

void Query::setQueryName(string& queryName) {
	this->queryName = queryName;
}

string& Query::getQuerySequence() {
	return querySequence;
}

void Query::setQuerySequence(string& querySequence) {
	this->querySequence = querySequence;
}

int Query::getQuerySequenceLength() {
	return querySequenceLength;
}

void Query::setQuerySequenceLength(int querySequenceLength) {
	this->querySequenceLength = querySequenceLength;
}
