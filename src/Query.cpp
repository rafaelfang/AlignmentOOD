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
Query::Query(string _targetName) {
	// TODO Auto-generated ructor stub
	setTargetName(_targetName);
}
Query::~Query() {
	// TODO Auto-generated destructor stub
}

string& Query::getQuery() {
	return query;
}

void Query::setQuery(string& query) {
	this->query = query;
}

int Query::getQueryLength() {
	return queryLength;
}

void Query::setQueryLength(int queryLength) {
	this->queryLength = queryLength;
}

string& Query::getTargetName() {
	return targetName;
}

void Query::setTargetName(string& targetName) {
	this->targetName = targetName;
}
