#include <iostream>
#include <fstream>
using namespace std;


int a[100000] = {};

void sort(int n)
{
    int temp;
    for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
}

int main()
{
    ifstream inFile;
    inFile.open("input.txt", ios::in);
    int x, i=0;
    while (!inFile.eof()) 
    {
        inFile >> x;
        a[i] = x;
        i++;
    }
    sort(i-1);
    ofstream outFile;
    outFile.open("output.txt", ios::out);
    for (int j=0; j<i-1; j++)
    outFile << a[j] << endl;
    outFile.close();
    inFile.close();
    return 0;
}