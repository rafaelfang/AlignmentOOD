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
	setTemplateSequenceInfo(_template.getTemplateSequenceInfo());
	setTemplateSequenceLength(_template.getTemplateSequenceLength());
	setTemplateCAlphaCoords(_template.getTemplateCAlphaCoords());

}

Point* Alignment::fetchSubjectAlignedPart3DPointsForQuery() {

	int sizeOfAlignment = subjectPart.size();

	Point* subjectPoints = (Point*) malloc(sizeof(Point) * sizeOfAlignment);

	int numOfGapsInSubjectPart = 0;
	for (int i = 0; i < sizeOfAlignment; i++) {
		if (subjectPart[i] == '-') {
			Point bigNum(10000, 10000, 10000);
			subjectPoints[i] = bigNum;

			numOfGapsInSubjectPart++;
		} else {

			subjectPoints[i] = templateCAlphaCoords[subjectStart + i
					- numOfGapsInSubjectPart - 1];

		}

	}

	int numOfGapsInQueryPart = 0;
	for (int i = 0; i < queryPart.size(); i++) {
		if (queryPart[i] == '-') {
			numOfGapsInQueryPart++;
		}
	}

	int candidateQueryAlignedPartLength = queryEnd - queryStart + 1;
	Point* candidateQueryAlignedPart3DCoords = (Point*) malloc(
			sizeof(Point) * candidateQueryAlignedPartLength);

	int gapOffset = 0;
	for (int i = 0; i < queryPart.size(); i++) {
		if (queryPart[i] == '-') {
			gapOffset++;
		} else {
			candidateQueryAlignedPart3DCoords[i - gapOffset] = subjectPoints[i];
		}

	}

	return candidateQueryAlignedPart3DCoords;

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

int Alignment::getItentities() {
	return itentities;
}

void Alignment::setItentities(int itentities) {
	this->itentities = itentities;
}

double Alignment::getScore() {
	return score;
}

void Alignment::setScore(double score) {
	this->score = score;
}
