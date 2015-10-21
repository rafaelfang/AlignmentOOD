/*
 * Alignment.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#include "Alignment.h"

Alignment::Alignment() {
	// TODO Auto-generated ructor stub

}
Alignment::Alignment(Template _template) {
	// TODO Auto-generated ructor stub
	setTemplateName(_template.getTemplateName());

}

Alignment::~Alignment() {
	// TODO Auto-generated destructor stub
}

double Alignment::getExpectedValue() {
	return expectedValue;
}

void Alignment::setExpectedValue(double expectedValue) {
	this->expectedValue = expectedValue;
}

int Alignment::getQueryEnd() {
	return queryEnd;
}

void Alignment::setQueryEnd(int queryEnd) {
	this->queryEnd = queryEnd;
}

string& Alignment::getQueryPart() {
	return queryPart;
}

void Alignment::setQueryPart(string& queryPart) {
	this->queryPart = queryPart;
}

int Alignment::getQueryStart() {
	return queryStart;
}

void Alignment::setQueryStart(int queryStart) {
	this->queryStart = queryStart;
}

int Alignment::getSubjectEnd() {
	return subjectEnd;
}

void Alignment::setSubjectEnd(int subjectEnd) {
	this->subjectEnd = subjectEnd;
}

string& Alignment::getSubjectPart() {
	return subjectPart;
}

void Alignment::setSubjectPart(string& subjectPart) {
	this->subjectPart = subjectPart;
}

int Alignment::getSubjectStart() {
	return subjectStart;
}

void Alignment::setSubjectStart(int subjectStart) {
	this->subjectStart = subjectStart;
}
