//
// Created by tuxinet on 28.09.16.
//

#include "Plez_Client.h"
#include "Networking/Networking.h"

using namespace Plez_Streamer::Networking;

Plez_Client::~Plez_Client() {

}

Plez_Client::Plez_Client(boost::asio::io_service& iosv, std::string const& host, std::string const& port):
        io_service(iosv), socket(io_service)
{
    boost::asio::ip::tcp::resolver resolver(io_service);
    boost::asio::ip::tcp::resolver::iterator endpoint = resolver.resolve(boost::asio::ip::tcp::resolver::query(host, port));
    boost::asio::connect(this->socket, endpoint);

    data d;
    d.data = "Hello";

    send(d);
}

void Plez_Client::send(Plez_Streamer::Networking::data const& d)
{
    socket.send(boost::asio::buffer(d.data));
}