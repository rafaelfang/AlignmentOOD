/*
 * Parser.h
 *
 *  Created on: Oct 24, 2015
 *      Author: Chao
 */

#ifndef PARSER_H_
#define PARSER_H_
#include <string>
#include <sys/stat.h>
using namespace std;
class Parser {
public:
	Parser();

	virtual ~Parser();

	virtual void storeCoordinates(string, string)=0;
	virtual void parseFile(string)=0;
	virtual void storeRecords(string)=0;
	string& getRootName();
	void setRootName(string& rootName);

protected:
	string rootName;
};

#endif /* PARSER_H_ */
