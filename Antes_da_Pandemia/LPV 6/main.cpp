#include <map>
#include <vector>
#include <iomanip>
#include <iostream>

struct WordCounter {
  WordCounter() {
    // TODO
  }
  void addWord(std::string w) {
    // TODO
  }
  void print() const {
    size_t longestWordSize = getLongestWord();
    for (auto const& entry : words) {
      std::cout << std::setw(longestWordSize + 1) << std::left <<
        entry.first << '|' << std::setw(4) << std::right << entry.second
        << std::endl;
    }
  }
  private:
    // TODO: declare aqui as estruturas de dados usadas.
    size_t getLongestWord() const {
      // TODO
    }
};

int main(){
    WordCounter wc;
    std::string s;
    std::cin >> s;

    while (s != ".") {
        wc.addWord(s);
        std::cin >> s;
    }

    wc.print();
}
