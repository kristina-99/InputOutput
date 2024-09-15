#include "FileSink.h"
#include <iostream>
#include <fstream>
using namespace std;

FileSink::FileSink(Stream* streamObj):Sink(streamObj)
{
	
}

FileSink::FileSink(Filter* filterObj) :Sink(filterObj)
{

}

void FileSink::printText() 
{
	if (streamObj != nullptr)
	{
        ofstream newFile("newfile.txt");
		newFile << streamObj->getStreamInput();
		newFile.close();
	}
	else if (filterObj != nullptr)
	{
		ofstream newFile("newfile.txt");
		newFile << filterObj->getFilterInput();
		newFile.close();
	}
}

FileSink::~FileSink() {
}