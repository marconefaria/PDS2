#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ponto{
    float x;
    float y;
};
typedef struct ponto Point;

float farthest(Point* vetor, int numPontos){
    int i;
    float maiorNorma=0, norma=0;

    for(i=0; i <numPontos; i++){
        norma = sqrt( pow((vetor[i].x),2) + (pow((vetor[i].y),2)) );

        if(norma > maiorNorma){
            maiorNorma = norma;
            norma=0;
        }
    }

    return maiorNorma;
}

int main()
{
    int n;
    std::cin >> n;

    Point* points = new Point[n];
    for (int i = 0; i < n; i++) {
        //std::cout << "Digite a coordenada x do " << i+1 << " ponto:" <<endl;
        std::cin >> points[i].x;

        //std::cout << "Digite a coordenada y do " << i+1 << " ponto:" <<endl;
        std::cin >> points[i].y;
    }

    if (n==0){
        cout << 0;
    }else{
        std::cout.precision(2);
        std::cout << std::fixed <<farthest(points, n) << endl;
    }
}
