#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "storyline.h"
using namespace std;

int main()
{
    vector<string>storyline = getStoryline();
    cout << storyline[0] << endl;
    return 0;
}
