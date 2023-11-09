#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>

struct ProgramSettings {
    bool helpRequested;    //help requested
    bool versionRequested; //version requested 
    std::string inputFile; //input file name
    std::string outputFile;    //output file name
    std::string cipherKey; //cipher key
    CipherMode encryptionMode;  //encryption request
};

bool processCommandLine(const std::vector<std::string>& cmdLineArgs, ProgramSettings& cmdLineInputs);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP