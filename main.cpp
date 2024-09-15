#include <iostream>
#include "Stream.h"
#include "Filter.h"
#include "Sink.h"
#include "FileSink.h"

using namespace std;

int main()
{
    Stream stream;
    cout << "Enter text (end with ^Z): ";
    stream.setStreamInput();
    /*cout << "You entered: " << stream.getStreamInput() << endl;
    Filter fltr1(stream,"apple");
    fltr1.setFilterInput();
    cout <<endl<<endl<< fltr1.getFilterInput();
    Sink n1(&fltr1);*/
    FileSink testfile(&stream);
    testfile.printText();
    //FileSink testfile(fltr1);
    return 0;
}