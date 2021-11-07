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
Legends::Legends():_display(&Legends::display,this),_running(true),_userName("Astro") {
	_packetReceive.clear();
	_packetSend.clear();
}

/*---- DESTRUCTOR ----*/
Legends::~Legends() {

}

/*---- PLAYING ----*/
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

/*---- COMMUNICATION ----*/
void Legends::send(const CTS::Protocol& protocol) const { 
	_packetSend.clear();
	if (protocol == CTS::LOGGED) {
		_packetSend << CTS::LOGGED;
		CTS::Logged logged;
		logged.userName = _mainPlayer->getUserName();
		_packetSend << logged;
	} else if (protocol == CTS::CHECK_CONNECTION) {
		_packetSend << CTS::CHECK_CONNECTION)
	}
	_packetSend << CTS::EOF_PROTOCOL;
	_socket.send(_packetSend);
	_packetSend.clear();
}

void Legends::receive() {
	_packetReceive.clear();
	if (_socket.receive(_packetReceive) != sf::Socket::Done) {
		STC::Protocol protocol;
		_packetReceive >> protocol;
		} while (protocol != STC::EOF_PROTOCOL) {
			switch (protocol) {
				case (STC::UPDATE_MAP):

					break;
				case (STC::LOAD_MAP):
					STC::LoadMap loadMap;
					_packetReceive >> loadMap;
					while (loadMap != STC::EOF_LOAD_MAP) {
						switch (loadMap) {
							case (STC::PLAYER):
								break;
							case (STC::MONSTER):
								break;
						}
					}
					break;
				case (STC::FIGHT):
					break;
			}
			_packetReceive >> protocol;
		}
	}
	_packetReceive.clear();
}

/*---- DISPLAY ----*/
void Legends::display() {

}