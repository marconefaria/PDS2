#include <iostream>
#include <string>
using namespace std;

bool anagram(std::string s0, std::string s1){
    int x=0, i= 0, j=0;

    if((s0.length()) != (s1.length())){
        return 0;
    }

    else{
        for(i=0; i<=(s0.length()); i++){
            for(j=(s1.length()); j>=0; j--){
                if (s0[i] == s1[j]){
                    return 1;
                }
            }
        }
        if(i==(s0.length())){
            return 0;
        }
    }
}

int main(){
    std::string s0, s1;

    std::cout << "Digite o valor da string 1:" << std::endl;
    std::cin >> s0;

    cout << "Digite o valor da string 2:" << std::endl;
    std::cin >> s1;

    std::cout << anagram(s0, s1) << std::endl;
}
