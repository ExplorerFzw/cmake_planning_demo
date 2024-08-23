#include <iostream>
#include "process.h"

using std::cout, std::endl;

void planProcessTest()
{
    cout << "this is planProcess test" << endl;
    Process myProcess;
    myProcess.planProcess();
}

int main()
{
    planProcessTest();
    return 0;
}