#include "Stream.h"

Stream::Stream() {}

Stream::~Stream() {}

void Stream::setStreamInput()
{
    streamInput.clear(); 
    char ch;
    while (cin.get(ch) && ch != '^Z') 
    {
            streamInput.push_back(ch);
    }
}

string Stream::getStreamInput()
{
    return string(streamInput.begin(), streamInput.end());
}