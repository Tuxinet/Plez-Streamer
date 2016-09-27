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

void Plez_Server::set_directory(char *dir)
{
    cout << "Changing directory to " << dir << endl;
}

void Plez_Server::start(int port)
{
    cout << "Started listening on port " << port << "..." << endl;
}