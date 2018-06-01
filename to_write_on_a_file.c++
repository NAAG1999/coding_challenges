
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt");

    char str[300] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";

    //Write string to the file.
    fout << str;

    fout.close();
    return 0;
}
