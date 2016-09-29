//
// Created by tuxinet on 27.09.16.
//

#include "Plez_Server.h"
#include <iostream>
#include <boost/asio.hpp>

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
    cout << "Attempting to start server at port: " << port << endl;

    boost::asio::io_service io_service;
    boost::asio::ip::tcp::acceptor acceptor(io_service,
                                            boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), port));

    boost::asio::ip::tcp::socket socket(io_service);
    acceptor.accept(socket);

    boost::asio::streambuf sb;
    boost::system::error_code ec;

    while(boost::asio::read(socket, sb, ec))
    {
        cout << "received: " << &sb << endl;

        if (ec)
        {
            cout << "status: " << ec.message() << endl;
        }
    }
}