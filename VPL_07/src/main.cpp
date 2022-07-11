#include <iostream>
#include "WordCounter.hpp"

using namespace std;

int main() {

	WordCounter *wc = new WordCounter(100);
	string s;
	cin >> s;
	while (s != ".") {
		//lê palavra por palavra
		wc->addWord(s);
		cin >> s;
	}
	wc->print();

	//delete wc;
	return 0;
}

/*
Para terminar esse exercício, você precisa completar os arquivos WordCounter.hpp e 
WordCounter.cpp. O construtor já está implementado.  Você deve implementar os métodos 
que estão faltando (addWord(), print() e ~WordCounter())
*/