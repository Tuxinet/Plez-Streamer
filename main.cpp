//
// Created by tuxinet on 27.09.16.
//

#include <iostream>
#include "Plez_Server.h"
#include "Plez_Client.h"
#include <cstdio>

using namespace std;

const int PORT = 32401;

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
        server.start(PORT);
    }

    if (tolower(userInput) == 'c')
    {
        boost::asio::io_service svc;
        Plez_Client client(svc, "127.0.0.1", "32401");
    }

    return 0;
}