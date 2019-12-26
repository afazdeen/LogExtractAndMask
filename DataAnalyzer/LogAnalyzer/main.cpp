#include <map>
#include <string>
#include <iostream>
#include "CPlusPlusEntry.h"
#include <thread>

#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "MemMan.h"
#include "Node.h"
#include "MetaData.h"
#include "ExecutionTemplateList.h"
#include "ExecutionContext.h"
#include "Int.h"
#include <iostream>
#include <memory>
#include <pthread.h>

using namespace std;

int main(int argc, const char * argv[])
{
    CPlusPlusEntry cppEntry;
    cppEntry.RunDefault();

    cout<<"\n\nLog data extracted successfully";
    cout<<"\n\nPress Enter To Exit";
    std::getchar();

    //system("pause");
    return 0;
}