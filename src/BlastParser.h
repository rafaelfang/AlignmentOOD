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

#include "BlastAlignment.h"
#include "Parser.h"
class BlastParser: public Parser {
public:
	BlastParser();
	BlastParser(string);
	virtual ~BlastParser();
	void parseFile(string);

	void storeCoordinates(string, string);

	void storeRecords(string);

private:

	vector<BlastAlignment> blastRecords;

};

#endif /* BLASTPARSER_H_ */
