#ifndef SINK_H
#define SINK_H
#include <iostream>
#include "Stream.h"
#include "Filter.h"

using namespace std;

class Sink {
public:
	virtual void printText();
	Sink(Stream* streamObj);
	Sink(Filter* fltrObj);
	~Sink();

protected:
	Stream* streamObj = nullptr;
	Filter* filterObj = nullptr;
};

#endif 
