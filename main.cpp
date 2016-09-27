//
// Created by tuxinet on 27.09.16.
//

#include <iostream>
#include "Plez_Server.h"

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {

    }

    cout << "Enter operation mode:\n" << "\t(S)erver\n" << "\t(C)lient\n" << "Input:";

    char userInput;
    cin >> userInput;

    if (tolower(userInput) == 's')
    {
        Plez_Server server;
        server.start(32401);
    }

    return 0;
}