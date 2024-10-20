#include <iostream> // input output stream
#include <fstream>
#include <sstream>
using namespace std;

// statically typed language because we define a set in stone type for each variable
int main()
{

    string filename;
    cin >> filename;

    cout << "Please supply the source file";
   

    cout << "Reading from the file name : " << filename << endl;

    ifstream sourceFileStream(filename);

    stringstream buffer;

    char temp;

    while (sourceFileStream.get(temp))
    {

        buffer << temp;
    }
    string sourceCode = buffer.str();
    cout << "This is the source code" << endl
         << sourceCode;

    return 0;
}