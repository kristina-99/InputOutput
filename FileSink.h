#ifndef FILESINK_H
#define FILESINK_H
#include "Sink.h"

class FileSink: Sink 
{
public:
	FileSink(Stream* streamObj); 
	FileSink(Filter* streamObj);
	void printText();
	~FileSink();
};

#endif // !FILESINK_H

