/*
 * BlastParser.h
 *
 *  Created on: Sep 27, 2015
 *      Author: Chao
 */

#ifndef BLASTPARSER_H_
#define BLASTPARSER_H_



#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Alignment.h"
using namespace std;
class BlastParser {
public:
	BlastParser();
	BlastParser(string);
	virtual ~BlastParser();
	void parseFile(string);
	string& getRootName();
	void setRootName(string& rootName);
	void storeCoordinates( string ,string);

	void storeRecords(string);

private:
	string rootName;
	vector<Alignment> blastRecords;

};

#endif /* BLASTPARSER_H_ */
