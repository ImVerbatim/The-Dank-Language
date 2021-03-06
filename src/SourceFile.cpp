#include "../h/sourceFile.h"
#include "../h/sourceFileUtils.h"
#include "../h/errorHandle.h"

SourceFile::SourceFile(std::string fileNameIn,bool printOutput) {
    fileName = fileNameIn;
    try {
        loadFile(fileNameIn,contents);
        contents+="\n";
    }
    catch(std::string err) {
        throw DankErrors(err, SOURCE_ERROR);
    }
}

std::string SourceFile::getFileName() { return fileName; }

std::string SourceFile::getDirPath() { 
    int i = fileName.size();

    while(i>=0 && fileName[i]!='/') {
        i--;
    }

    return fileName.substr(0,i);
}


//TODO: Implement this function 
std::string getLine(int lineNum) {
    return "your mom";
}
