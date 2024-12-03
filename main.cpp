#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "header/storyline.cpp"
using namespace std;

int main()
{
    vector<string> storyline = Summary();

    for (int i = 0; i < storyline.size(); i++)
    {
        cout << storyline[i] << endl;
    }
    return 0;
}
