#include "Filter.h"
#include "Stream.h"
#include "Sink.h"

using namespace std;

Sink::Sink(Stream* streamObj):streamObj(streamObj)
{
}

Sink::Sink(Filter* filterObj) :filterObj(filterObj)
{

}

void Sink::printText() 
{
	if (streamObj != nullptr)
	{
		cout << streamObj->getStreamInput() << endl;
	}
	else if(filterObj != nullptr)
	{
		cout << filterObj->getFilterInput() << endl;
	}
}

Sink::~Sink()
{
}