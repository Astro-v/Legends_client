/*---- LIBRARY ----*/
#include <vector>
#include <iostream>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Map.hpp"
#include "Legends.hpp"
#include "Dimension.hpp"
#include "ClientToServer.hpp"

/*---- CONSTRUCTOR ----*/
Legends::Legends():_running(true),_userName("Astro") {
}

/*---- DESTRUCTOR ----*/
Legends::~Legends() {

}

/*---- OTHER ----*/
void Legends::playing() {
	_socket.setBlocking(true);
	// Connection to the server
	if (_socket.connect(SERVER_ADRESS,SERVER_PORT) != sf::Socket::Done){
		// error
	}
	std::cout << "Connected to the server" << std::endl;
	
	_socket.setBlocking(false);
	while (_running) {

	}
}