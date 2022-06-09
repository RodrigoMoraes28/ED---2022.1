#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void vacinacao(vector<int>& vacinas , vector<int>& cel_T){

/*
ideia : vacina - celulas t paciente tem que ser maior que zero
e dae poe 1 contador pra cada vez q isso passar, se forem maior q 0 e o contador for igual
ao tamanho do vetor � pq tds as vacinas dao certo ae imprime yes,
se n for igual ao tamanho ja imprime no pq n deu certo
*/
    int tamanho = vacinas.size();
    int cont = 0;

    sort(vacinas.begin(), vacinas.end());
    sort(cel_T.begin(), cel_T.end());

    for(int i = 0 ; i < tamanho ; i++){
        if(vacinas[i] - cel_T[i] > 0){
            cont++;
        }

    }

    if(cont == tamanho){
        cout << "Yes";
    }
    else{
        cout << "No";
    }



}






/*
Uma pessoa � curada somente se a contagem de c�lulas T no lote da vacina
for maior do que a contagem de c�lulas T em uma pessoa

Um m�dico recebe um novo conjunto de relat�rios que cont�m a contagem de c�lulas T de cada paciente infectado,
o laborat�rio QuixaVax armazena todas as vacinas que o m�dico possui e sua contagem de c�lulas T.
Voc� precisa determinar se o m�dico pode salvar todos os pacientes com as vacinas que possui.
O n�mero de vacinas e pacientes s�o iguais.
*/

int main(){

    int tamanho;
    cin >> tamanho;
    vector<int> vacinas;
    vector<int> cel_T;

     for(int j = 0 ; j < tamanho ; j++){
        int num2;
        cin >> num2;
        vacinas.push_back(num2);
    }



    for(int i = 0 ; i < tamanho ; i++){
        int num;
        cin >> num;
        cel_T.push_back(num);
    }




    vacinacao(vacinas,cel_T);
    cout << "\n";


    return 0;
}





