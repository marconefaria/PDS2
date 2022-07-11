#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words) {
	words = new Word[num_words];
}

void WordCounter::print() const{
	string words_aux[100];

	for (int i = 0; i < size; ++i) {
		words_aux[i] = words[i].word;
	}

	for (int i = 0; i < size; ++i) {
        int indiceMenor = i;
        for (int j = i+1; j < size; ++j) {
            if (words_aux[j] < words_aux[indiceMenor]) {
                indiceMenor = j;
            }
        }
        string aux = words_aux[i];
        words_aux[i] = words_aux[indiceMenor];
    	words_aux[indiceMenor] = aux;
    }

	for(int i = 0; i < size; i++){
		for (int j = 0; j < size; j++) {
			if(words_aux[i] == words[j].word){
				cout << words_aux[i] << " " << words[j].count + 1 << endl;
			}
		}
	}
	/*A saída do problema corresponde a lista de palavras e suas frequências. 
	As frequências e as palavras devem ser separadas por um único espaço em branco (" "). 
	Além disso, as palavras devem ser apresentadas em ordem alfabética.*/
}

void WordCounter::addWord(string w){
	for(int i = 0; i < size; i++){
		if(words[i].word == w){
			words[i].incrementFreq();
			return;
		}
	}
	words[size].word = w;
	size++;
}

WordCounter::~WordCounter(){
	//destruir word
	delete words;
}