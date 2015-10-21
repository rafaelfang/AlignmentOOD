/*
 * Template.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#include "Template.h"

Template::Template() {
	// TODO Auto-generated ructor stub

}
Template::Template(Query _query) {
	// TODO Auto-generated ructor stub
	setTargetName(_query.getTargetName());
	setQuery(_query.getQuery());
	setQueryLength(_query.getQueryLength());
}
Template::~Template() {
	// TODO Auto-generated destructor stub
}

string& Template::getMethodUsed() {
	return methodUsed;
}

void Template::setMethodUsed(string& methodUsed) {
	this->methodUsed = methodUsed;
}

Point* Template::getTemplateCAlphaCoords() {
	return templateCAlphaCoords;
}

void Template::setTemplateCAlphaCoords(Point* templateCAlphaCoords) {
	this->templateCAlphaCoords = templateCAlphaCoords;
}

string& Template::getTemplateName() {
	return templateName;
}

void Template::setTemplateName(string& templateName) {
	this->templateName = templateName;
}
