#ifndef __SECONDARY_PLAYER__
#define __SECONDARY_PLAYER__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Player.hpp"

class SecondaryPlayer : public Player {
    public:
    /*---- CONSTRUCTOR ----*/
    SecondaryPlayer();

    /*---- DESTRUCTOR ----*/
    virtual ~SecondaryPlayer();

    /*---- DISPLAY ----*/
    virtual void display() const;

    protected:
    
    private:
};

#endif // __SECONDARY_PLAYER__