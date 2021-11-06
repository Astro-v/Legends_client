/*---- OVERLOAD FLUX OPERATOR ----*/

#include "ClientToServer.hpp"
#include "ServerToClient.hpp"

/*---- SERVER_TO_CLIENT ----*/

/*---- PROTOCOL ----*/

sf::Packet& operator <<(sf::Packet& packet, const STC::Protocol& data) {   
	sf::Uint16 send;
	send = (sf::Uint16)data;
    return packet << send;
}

/*---- LOAD_MAP ----*/

sf::Packet& operator <<(sf::Packet& packet, const STC::LoadMap& data) {   
	sf::Uint16 send;
	send = (sf::Uint16)data;
    return packet << send;
}

/*---- UPDATE_MAP ----*/

sf::Packet& operator <<(sf::Packet& packet, const STC::UpdateMap& data) {   
	sf::Uint16 send;
	send = (sf::Uint16)data;
    return packet << send;
}

/*---- CLIENT_TO_SERVER ----*/

/*---- PROTOCOL ----*/

sf::Packet& operator >>(sf::Packet& packet, CTS::Protocol& data){   
	sf::Uint16 receive;
	packet >> receive;
    data = (CTS::Protocol)receive;
    return packet;
}

/*---- LOGGED ----*/

sf::Packet& operator >>(sf::Packet& packet, CTS::Logged& data){   
    return packet >> data.userName;
}