#ifndef __MAP__
#define __MAP__

/*---- LIBRARY ----*/
#include <vector>
#include <string>

/*---- LIBRARY SFML ----*/
#include "SFML/Network.hpp"

/*---- LOCAL FILE ----*/
#include "Tile.hpp"
#include "Dimension.hpp"

class Map {
    public:
    /*---- CONSTRUCTOR ----*/
    Map();

    /*---- DESTRUCTOR ----*/
    ~Map();

    /*---- INITIALIZE ----*/
    void loadMap(const int& idMap);   // Load the map

    /*---- COMMUNICATION ----*/
    void changeMap(const int& idMap);  // Move the player to another map

    /*---- ACCESSOR ----*/

    protected:
    
    private:
    Tile _tile[NUMBER_TILE_X][NUMBER_TILE_Y];                 // Table of all tiles

    int _posX;                        // Position of the map
    int _posY;                        // Position of the map
    int _posZ;                        // Altitude of the map (<0 for underground maps)

    std::vector<int> _posXNeighbors;  // Position of the neighbors map
    std::vector<int> _posYNeighbors;  // Position of the neighbors map
    std::vector<int> _posZNeighbors;  // Altitude of the neighbors map

    int _numberOfNeighbors;                   // Number of Neighbors
};


#endif // __MAP__