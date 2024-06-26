/*. Faça um algoritmo que leia uma matriz AnXm (1 ≤ n ≤ 15, 1 ≤ m ≤ 25) de números inteiros e 
calcule o vetor resultante da soma dos elementos de cada linha da matriz. */
#include<iostream>
using namespace std;
int main(){
    int n, m;
    do{
        cout << "Digite o numero de linhas da matriz:";
        cin >> n;
    }while(n < 1 || n > 15);
    do
    {
        cout << "Digite o numero de colunas da matriz:";
        cin >> m;
    } while (m < 1 || m > 25);
    
    int mat[15][25]={{0}};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cout << "Posicao " << i + 1 << j + 1 << ": ";
            cin >> mat[i][j];
        }
    }
    
    int vet[15]={0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            vet[i] += mat[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "[" << vet[i] << "]";
    }
    
    return 0;
}