#ifndef __PLAYER__
#define __PLAYER__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/

class Player {
    public:
    /*---- CONSTRUCTOR ----*/
    Player();

    /*---- DESTRUCTOR ----*/
    virtual ~Player();

    /*---- DISPLAY ----*/
    virtual void display() const = 0;

    /*---- ACCESSOR ----*/
    void setPos(const int& pos);
    int getPos() const;
    std::string getUserName() const;

    protected:
    
    private:
    /*---- POSITION ----*/
    int _pos;                        // Position of the player on the map

    /*---- NAME ----*/
    std::string _userName;
};

#endif // __PLAYER__