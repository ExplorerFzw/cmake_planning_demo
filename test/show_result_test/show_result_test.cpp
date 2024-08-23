#include <iostream>
#include "show_result.h"

using std::cout, std::endl;

void drawResultTest()
{
    cout << "this is drawResult test" << endl;
    ShowResult show;
    show.drawResult();
}

int main() 
{
    drawResultTest();
    return 0;
}