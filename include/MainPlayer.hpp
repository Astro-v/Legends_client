#ifndef __MAIN_PLAYER__
#define __MAIN_PLAYER__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Player.hpp"

class MainPlayer : public Player {
    public:
    /*---- CONSTRUCTOR ----*/
    MainPlayer();

    /*---- DESTRUCTOR ----*/
    virtual ~MainPlayer();

    /*---- DISPLAY ----*/
    virtual void display() const;

    protected:
    
    private:
};

#endif // __MAIN_PLAYER__