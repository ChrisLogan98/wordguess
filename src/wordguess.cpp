//============================================================================
// Name        : wordguess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "currentgame.h"
#include "dictionary.h"

using namespace std;


int main(){
	CurrentGame cg;
	Dictionary d;

	d.buildDictionary();

	char choice, letter;
	bool done;
	int wordidx;

	srand((unsigned) time(NULL));
	cout << "Would you like to play the WordGuess Game? Y/N" << endl;
	cin >> choice;
	while ((choice != 'n') && (choice != 'N')){
		wordidx = rand() % d.size();// get index subscript of next word to play
		cg.reset(d.getWord(wordidx));
		int result = cg.play();
		cout << "Would you like to play the WordGuess Game? Y/N" << endl;
		cin >> choice;
	}
}




