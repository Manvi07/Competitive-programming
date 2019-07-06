#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("input.txt", ios::in);
    ofstream outFile;
    outFile.open("output.txt", ios::out);
    string x;

    while (!inFile.eof()) 
    {
        int cnt = 0;
        inFile >> x;
        for(int i=0; i<x.size(); i++)
        if(x[i] == '@')
        cnt++;
        if(cnt == 1)
        outFile << x << endl;
        else
        outFile << "ERROR\n";
    }
    outFile.close();
    inFile.close();
    return 0;
}