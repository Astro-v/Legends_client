#ifndef __LEGENDS__
#define __LEGENDS__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Map.hpp"
#include "MainPlayer.hpp"
#include "SecondaryPlayer.hpp"

/*---- SERVER ----*/
#define SERVER_PORT 5500    
#define SERVER_ADRESS sf::IpAddress("90.39.145.229") // IP adress of the server

class Legends {
    public:
    /*---- CONSTRUCTOR ----*/
    Legends();

    /*---- DESTRUCTOR ----*/
    ~Legends();

    /*---- PLAYING ----*/
    void playing();                    // Main Thread

    /*---- COMMUNICATION ----*/
    void send(const CTS::Protocol& protocol) const;
    void receive(); 

    /*---- DISPLAY ----*/
    void display();                    // Another Thread


    protected:

    private:
    /*---- LEGENDS ----*/
    bool _running;

    /*---- PLAYERS ----*/
    MainPlayer* _mainPlayer;                          // For the main player
    std::vector<SecondaryPlayer *> _secondaryPlayers; // For the other player on the map

    /*---- COMMUNICATION ----*/
    sf::TcpSocket _socket;
    sf::IpAddress _addressServer;
    unsigned short _portServer;
    sf::Packet _packetReceive;
    sf::Packet _packetSend;

    /*---- MAP ----*/
    Map* _map;

    /*---- THREAD ----*/
    sf::Mutex _mutex;
    sf::Thread _display;
};

#endif // __LEGENDS__