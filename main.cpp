#include <QCoreApplication>
#include <fstream>
#include <sstream>
#include <QDir>
#include <QFile>
#include <QString>
#include <sstream>
#include <sstream>
#include <string>
#include <ostream>
#include <Qstring>
#include <iostream>
#include <Qlinkedlist>
#include <verilogbase.h>
#include <verilogderivada.h>
#include <cverilogcode.h>





using namespace std;
using namespace codeGenerator;


#define HEX( x )   hex << uppercase << (int)( x )

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir    qdir;

    if(!qdir.cd("debug"))
        cout << "could not cd " << endl;

    qdir.cdUp();

    QString qstring         = qdir.currentPath();
    string  currentDir      = qstring.toStdString();


    //currentDir.append("/debug");
    
    cout << "STARTING " << endl;
    cout << currentDir << endl;

    if(argc > 1)
    {
        string  cvsFile(argv[1]);


        if(argv[1]!=NULL)
        {
            //ifstream *fb = new ifstream;

            currentDir.append("/");
            currentDir.append(argv[1]);

            //cVerilogCode *code = new cVerilogCode (&currentDir);

            //if(!code->getError())
            //{

            //}
            //else
              //  code->displayError();





        }
    }
    
    return a.exec();
}
