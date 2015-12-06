/*
 * Query.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#include "Query.h"

Target::Target() {
	// TODO Auto-generated ructor stub

}
Target::Target(string _targetName) {
	// TODO Auto-generated ructor stub
	setTargetName(_targetName);
}
Target::~Target() {
	// TODO Auto-generated destructor stub
}

string& Target::getQuery() {
	return query;
}

void Target::setQuery(string& query) {
	this->query = query;
}

int Target::getQueryLength() {
	return queryLength;
}

void Target::setQueryLength(int queryLength) {
	this->queryLength = queryLength;
}

string& Target::getTargetName() {
	return targetName;
}

void Target::setTargetName(string& targetName) {
	this->targetName = targetName;
}
