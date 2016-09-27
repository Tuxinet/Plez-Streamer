//
// Created by tuxinet on 27.09.16.
//

#include <iostream>
#include <boost/asio.hpp>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "server"))
            cout << argv[i] << endl;
    }

    return 0;
}