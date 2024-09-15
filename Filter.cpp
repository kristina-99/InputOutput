#include "Filter.h"
#include "Stream.h"
#include <cstring>  
#include <sstream>

Filter::Filter(Stream& streamObj, string phrase) : streamObj(streamObj), phrase(phrase) {}

Filter::~Filter() {}

string Filter::getFilterInput() const {
    return string(filterInput.begin(), filterInput.end());
}

void Filter::setFilterInput() {

    char currLine[200] = { '\0' };
    istringstream inStream(streamObj.getStreamInput());

    while (inStream.getline(currLine, 200, '\n')) {
        inStream.clear();
        if (strstr(currLine, phrase.c_str())) {
            for (int j = 0; currLine[j] != '\0'; j++) {
                filterInput.push_back(currLine[j]);
            }
            filterInput.push_back('\n');
        }
    }
    filterInput.push_back('\0');
}