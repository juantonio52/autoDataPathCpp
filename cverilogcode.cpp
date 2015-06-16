#include "cverilogcode.h"

namespace codeGenerator{

    cVerilogCode::cVerilogCode(string *currentDir, string inputFile)
    {

        this->isError           =  0;
        string *inputPath       =  new string(currentDir->append(inputFile));
        this->inputFile         =  new ifstream(inputPath->c_str(), ifstream::in);


        if(this->inputFile->is_open())
        {
            string line;

            while(getline(*this->inputFile,line))
            {
                cout << line << endl;

            }
        }
        else
        {
            this->isError       = 1;
            this->reasonCode    = badInputFile;
        }


    }

    void cVerilogCode::displayError()
    {
        switch(this->reasonCode)
        {
            case badInputFile: cout << "InputFile missing \n"; break;
        }
    }

    bool cVerilogCode::getError()
    {
        return isError;
    }


}
