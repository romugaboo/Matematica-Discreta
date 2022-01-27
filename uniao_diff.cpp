#include <iostream>
using namespace std;
#define A 3                 //Coloque aqui o número de elementos do conjunto A
#define B 3                 //Coloque aqui o número de elementos do conjunto B

void uniao (int a[], int b[]);
void diff (int a[], int b[]);

int main (){
    int a[A] = {1, 2, 3};   //Modifique aqui os elementos do conjunto A
    int b[B] = {3, 4, 5};   //Modifique aqui os elementos do conjunto B

    cout << "Conjunto A:\n";
    for (int i = 0; i < A; i++){
        cout << a[i] << "\t";
    }
    cout << "\n\n";

    cout << "Conjunto B:\n";
    for (int i = 0; i < B; i++){
        cout << b[i] << "\t";
    }
    cout << "\n\n";
    
    cout << "A U B: \n";
    uniao (a, b);

    cout << "A - B: \n";
    diff (a, b);
    return 0;
}

void uniao (int a[], int b[]){
    int i = 0, j = 0;
    for (i; i < A; i++){
        cout << a[i] << "\t";
    }
    diff (b, a);
}

void diff (int a[], int b[]){
    int i = 0, j = 0;
    bool repete;
    for (i; i < A; i++){
        repete = true;
        for (j; j < B; j++){
            if (a[i] == b[j]){
                repete = false;
                break;
            }
        }
        if (repete == true){
            cout << a[i] << "\t";
        }
    }
    cout << "\n\n";
}
