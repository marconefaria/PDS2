#include <iostream>
#include <string.h>
using namespace std;

bool anagram(string s0, string s1){
    int i= 0, j=0, compare=0;
    compare = strncmp(s0,s1,3);

    if((((s0.length()) != (s1.length()))) || (compare != 0)){
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
    }
}

int main(){
    string s0, s1;

    cin >> s0;
    cin >> s1;

    cout << anagram(s0, s1) << std::endl;
}
