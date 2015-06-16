#ifndef CVERILOGCODE_H
#define CVERILOGCODE_H

#include <iostream>
#include <fstream>
#include <QString>
#include <sstream>
#include <sstream>
#include <string>
#include <ostream>
#include <Qstring>
#include <iostream>

using namespace std;


namespace codeGenerator {

    enum eReason {badInputFile};

    class cVerilogCode
    {
    public:
        cVerilogCode(string *InputFile);
        cVerilogCode(string*currentDir, string inputFile);



        void displayError();

        bool getError();




    private:

        bool        isError;
        eReason     reasonCode;
        ifstream    *inputFile;

    };

    #endif // CVERILOGCODE_H

}

