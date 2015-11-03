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
#include "BlastParser.h"
#include "HHSearchParser.h"
#include "CNFSearchParser.h"
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {

	if (argc != 3) {
		cout << "the input should like this:" << endl;
		cout << "<excutable> <type> <rootName>" << endl;
		return 0;
	}

	if (strcmp(argv[1], "-blaPDB") == 0) {

		string querySeqLocation("/home/cf797/test/casp11Seq/");
		string alignmentResultLocation("/home/cf797/test/casp11Alignment/");
		string experimentLocation("/home/cf797/test/casp11OutputResultFolder/");
		string proteinDatabaseLocation("/home/lihongb/DATABASE/DBInfo/");
		BlastParser blastParser(argv[2]);
		blastParser.parseFile(alignmentResultLocation);
		blastParser.storeRecords(experimentLocation);
		blastParser.storeCoordinates(experimentLocation,
				proteinDatabaseLocation);
	}
	if (strcmp(argv[1], "-hhsearch") == 0) {
		string querySeqLocation("/home/cf797/test/casp11Seq/");
		string alignmentResultLocation("/home/cf797/test/casp11Alignment/");
		string experimentLocation("/home/cf797/test/casp11OutputResultFolder/");
		string proteinDatabaseLocation("/home/lihongb/DATABASE/DBInfo/");
		HHSearchParser hhsearchParser(argv[2]);
		hhsearchParser.parseFile(alignmentResultLocation);
		hhsearchParser.storeRecords(experimentLocation);
		hhsearchParser.storeCoordinates(experimentLocation,
				proteinDatabaseLocation);
	}

	if (strcmp(argv[1], "-cnfSearch") == 0) {
		string querySeqLocation("/home/cf797/test/casp11Seq/");
		string alignmentResultLocation("/home/cf797/test/casp11Alignment/");
		string experimentLocation("/home/cf797/test/casp11OutputResultFolder/");
		string proteinDatabaseLocation("/home/lihongb/DATABASE/DBInfo/");
		CNFSearchParser cnfSearchParser(argv[2]);
		cnfSearchParser.parseFile(alignmentResultLocation);
		cnfSearchParser.storeRecords(experimentLocation);
		cnfSearchParser.storeCoordinates(experimentLocation,
				proteinDatabaseLocation);
	}

	return 0;
}
