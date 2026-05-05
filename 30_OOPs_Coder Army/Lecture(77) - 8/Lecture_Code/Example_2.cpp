#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("z1.txt");

    fout << "Hello Bharat\n";
    fout << "Hello Rohan\n";
    fout << "Hello Bhai\n";

    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    return 0;
}