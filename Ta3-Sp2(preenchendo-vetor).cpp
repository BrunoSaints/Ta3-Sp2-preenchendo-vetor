#include <iostream>
#include <locale>
using namespace std;

void inserir (int a[]) {

    int i;
    for (i = 0; i < 3; i++) {
        printf ("\n Digite o valor %d - ", i);
        scanf ("%d", &a[i]);
    }

}
void imprimir (int b[]) {

    int i;
    for (i = 0; i < 3; i++)
    {
        printf ("\n numeros [%d] = %d", i, (2*b[i]));        
    }

}
int main (int argc, char** argv) {
setlocale(LC_ALL, "portuguese");

    int numero [3];
    printf ("\n Preechendo o vetor : \n");
    inserir (numero);

    printf ("\n Valor final");
    imprimir (numero);

return 0;
}
