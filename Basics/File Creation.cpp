#include <iostream>
#include <ofstream>

using namespace std;

int main()
{
ofstream outFile;
outFile.open("out.txt")
outFile<<"Hellow World";
outFile.close();

return 0;
}
