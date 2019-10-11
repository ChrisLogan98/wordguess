#include "dictionary.h"
void Dictionary::buildDictionary(){
	string word;
	ifstream infile("words.txt");
	if (!infile){
		cout << "Severe error opening words.txt" << endl;
	    exit(-1);
	}

	infile >> word;
	while(!infile.eof()){
		_words.push_back(word);
		 infile >> word;
	}
}

