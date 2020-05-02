//
//
#include <iostream>
#include <cmath>
#include "apex_code.h"

using namespace std;

// This function calculates how many tiles are needed to cover a floor. 
// The inputs to the function are height in feet, width in feet and tile 
// size in inches. The output of the function is the number of tiles. 
// Think about how tiles are laid out, you have whole tiles until you get 
// the last tile where mostly like the last tile won't fit, so you need a 
// partial tile. Once a tile is cut to fit a space it can't be reused.
int getNumberTiles(double heightInFt, double widthInFt, int tileSizeInInches) {
	
	const double foot2Inch = 12.00; // conversion factor from foot to inch
	double heightInInches, widthInInches;
	int heightDiv, widthDiv, fullTile;
	int partTile, totalTile;

	//cout << "\nheightInFt = " << heightInFt
	//	<< " ; widthInFt = " << widthInFt
	//	<< " ; tileSizeInInches = " << tileSizeInInches << endl;

	// convert from foot to inch
	heightInInches = heightInFt * foot2Inch;
	widthInInches = widthInFt * foot2Inch;
	
	// calculate the full part
	widthDiv = (int)widthInInches / tileSizeInInches; // full part
	heightDiv = (int)heightInInches / tileSizeInInches; // full part
	//cout << "Full part width : " <<  widthDiv << endl;
	//cout << "Full part height : " << heightDiv << endl;
	fullTile = widthDiv * heightDiv;

	
	// fraction part: check if width is divisible by tile size or not
	if (fmod(widthInInches,tileSizeInInches)) {
		//cout << "fmod results = 1" << endl;
		// if not, need one more tile
		widthDiv += 1.00;
	}

	// check if height is divisible by tile size
	if (fmod(heightInInches, tileSizeInInches)) {
		//cout << "fmod results = 1" << endl;
		// if not, need one more tile 
		heightDiv += 1.00;
	}
	
	// calculate fraction part
	//partTile = (widthDiv * heightDiv) - fullTile;
	//cout << "Full Tile: " << fullTile << " ; partTile : " << partTile;
	//cout << "\n" << endl;
	totalTile = widthDiv * heightDiv;

	// return total tile with fraction part
	return totalTile;

}

// This function takes two characters, checks if they are both upper case. 
// The function returns true only if both characters are upper case. 
// It returns false otherwise.
bool upperCharAnd(unsigned char char1, unsigned char char2) {

	//cout << "Char 1 = " << char1 << " ; Char 2 = " << char2 << endl;

	//Both char 1 and char 2 are upper case
	if (isupper(char1) && isupper(char2)) {
		//cout << "Both char 1 and char 2 are upper case" << endl;
		return true;
	}
	else if (isupper(char1) || isupper(char2)) { 
		//cout << "Either char 1 or char 2 is upper case. Not both" << endl;
		return false; //Either char 1 or char 2 is upper case. Not both
	}
	else {
		//cout << "Both char 1 and char 2 are small case." << endl;
		return false; //Both char 1 and char 2 are small case.
	}
}