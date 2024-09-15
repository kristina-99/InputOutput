#ifndef STREAM_H
#define STREAM_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Stream
{
public:
    string getStreamInput();
    void setStreamInput();
    Stream();
    ~Stream();

protected:
    vector<char> streamInput;
};

#endif 