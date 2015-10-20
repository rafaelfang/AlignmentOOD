/*
 * Query.h
 *
 *  Created on: Oct 20, 2015
 *      Author: Chao
 */

#ifndef QUERY_H_
#define QUERY_H_
#include <string>
using namespace std;
class Query {
public:
	Query();

	virtual ~Query();
	string& getQueryName();
	void setQueryName(string& queryName);
	string& getQuerySequence();
	void setQuerySequence(string& querySequence);
	int getQuerySequenceLength();
	void setQuerySequenceLength(int querySequenceLength);

private:
	string queryName;
	string querySequence;
	int querySequenceLength;
};

#endif /* QUERY_H_ */
