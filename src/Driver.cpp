//============================================================================
// Name        : AlignmentOOD.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Query.h"
#include "Native.h"
#include "Point.h"
#include "Template.h"
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
	Query query("T0759");
	cout << "target name" << query.getTargetName() << endl;
	query.setQueryLength(53);
	cout << "query Length" << query.getQueryLength() << endl;
	string testQuery("asdfasdf");
	query.setQuery(testQuery);
	cout << "query" << query.getQuery() << endl;

	Native native(query);
	cout << "native name" << native.getTargetName() << endl;
	cout << "native length" << native.getQueryLength() << endl;
	cout << "native sequence " << native.getQuery() << endl;
	Point testCoords[2];
	testCoords[0] = Point(1.2, 2.3, 4.5);
	testCoords[1] = Point(2.3, 4.2, 1.6);
	native.setCAlphaCoords(testCoords);
	Point* testCoordOut = native.getCAlphaCoords();
	cout << "native 3D" << testCoordOut[0].getX() << endl;

	Template aTemplate(query);
	cout << "aTemplate name" << native.getTargetName() << endl;
	string templateName("1H2L_A");
	aTemplate.setTemplateName(templateName);
	cout << "aTemplate name" << aTemplate.getTemplateName() << endl;
	string methodUsed("blast");
	aTemplate.setMethodUsed(methodUsed);
	cout << "aTemplate method used " << aTemplate.getMethodUsed() << endl;
	aTemplate.setTemplateCAlphaCoords(testCoords);
	Point* testTemplateCoordOut = native.getCAlphaCoords();
	cout << "native 3D" << testTemplateCoordOut[1].getY() << endl;


	return 0;
}
