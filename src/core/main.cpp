#include "init.hpp"
#include "core.hpp"
#include "version.hpp"

#include <iostream>

using std::cout;
using std::endl;


int main(int, char**)
{
    cout << "Initializing..." << endl;
    core::init();

    cout << "Running " << PROJECT_NAME << ' '
         << VERSION_MAJOR << '.' << VERSION_MINOR << endl;

    core::run();

    cout << "Closing " << PROJECT_NAME << ' '
         << VERSION_MAJOR << '.' << VERSION_MINOR << endl;

    core::deinit();

    return 0;
}

