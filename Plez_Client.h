//
// Created by tuxinet on 28.09.16.
//

#ifndef PLEZ_STREAMER_PLEZ_CLIENT_H
#define PLEZ_STREAMER_PLEZ_CLIENT_H


#include <boost/asio.hpp>
#include "Networking/Networking.h"

using namespace Plez_Streamer;

class Plez_Client {
private:
    boost::asio::io_service& io_service;
    boost::asio::ip::tcp::socket socket;

public:
    Plez_Client(boost::asio::io_service& iosv, std::string const& host, std::string const& port);
    ~Plez_Client();

    void send(Plez_Streamer::Networking::data const& d);
};


#endif //PLEZ_STREAMER_PLEZ_CLIENT_H
