//
// Created by tuxinet on 29.09.16.
//

#ifndef PLEZ_STREAMER_CONNECTION_H
#define PLEZ_STREAMER_CONNECTION_H

#include <string>

namespace Plez_Streamer
{
    namespace Networking
    {
        class Connection {
        public:
            Connection();
            ~Connection();

            bool bind(std::string host, int port);
            bool listen(int port);
        };

    }
}

#endif //PLEZ_STREAMER_CONNECTION_H
