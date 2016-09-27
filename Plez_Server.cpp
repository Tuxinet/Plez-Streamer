//
// Created by tuxinet on 27.09.16.
//

#include "Plez_Server.h"
#include <iostream>

using namespace std;

Plez_Server::Plez_Server()
{
}

Plez_Server::~Plez_Server()
{
}

void Plez_Server::start_listening(int port)
{
    cout << "Started listening on port " << port << "..." << endl;
}