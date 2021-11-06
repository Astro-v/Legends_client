#ifndef __LEGENDS__
#define __LEGENDS__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Map.hpp"

/*---- SERVER ----*/
#define SERVER_PORT 5500    
#define SERVER_ADRESS sf::IpAddress("90.39.145.229") // IP adress of the server

class Legends {
    public:
    /*---- CONSTRUCTOR ----*/
    Legends();

    /*---- DESTRUCTOR ----*/
    ~Legends();

    /*---- OTHER ----*/
    void playing();                               // Main thread 


    protected:

    private:
    bool _running;

    sf::TcpSocket _socket;
    sf::IpAddress _addressServer;
    unsigned short _portServer;

    std::string _userName;
    Map* _map;

    /*---- THREAD ----*/
    sf::Mutex _mutex;
};

#endif // __LEGENDS__