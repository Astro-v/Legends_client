/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

/*---- LOCAL FILE ----*/
#include "Player.hpp"


/*---- CONSTRUCTOR ----*/
Player::Player():_pos(0) {

}

/*---- DESTRUCTOR ----*/
Player::~Player() {

}

/*---- ACCESSOR ----*/
void Player::setPos(const int& pos) {
	_pos = pos;
}

int Player::getPos() const {
	return _pos;
}

std::string Player::getUserName() const {
	retrun _userName;
}