#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int escolha;
vector <int> numeros{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

void imprime_opcoes() {
	cout << "--------------------------------------------------------" << endl;
	cout << "[1] Incluir um numero no vetor." << endl;
	cout << "[2] Consultar todos os numeros do vetor." << endl;
	cout << "[3] Consultar um numero do vetor." << endl;
	cout << "[4] Excluir um numero no vetor." << endl;
	cout << "[5] Esvaziar o vetor." << endl;
	cout << "[6] Sair." << endl;
	cout << "--------------------------------------------------------" << endl;
}


int main() {


	for (int contador = 0; contador < 10; contador++) {
		imprime_opcoes();
		cin >> escolha;
		switch (escolha) {
		case 1: {
			cout << "\nQual numero deseja incluir? " << endl;
			int numero_incluso;
			cin >> numero_incluso;
			numeros.push_back(numero_incluso);
			break;
		}

		case 2: {
			cout << "\n************ ";
			for (int a = 0; a < numeros.size(); a++) {
				cout << numeros[a] << "  ";
			}
			cout << "************ " << endl;
			break;
		}

		case 3: {
			cout << "\nDeseja consultar o numero em qual posicao? " << endl;
			int posicao_verif;
			cin >> posicao_verif;
			cout << "O numero na posicao " << posicao_verif << " eh o " << numeros[posicao_verif] << endl;
			break;
		}

		case 4: {
			cout << "\nDeseja excluir o numero que esta em qual posicao? " << endl;
			int posicao_excluir;
			cin >> posicao_excluir;
			numeros.erase(numeros.begin() + posicao_excluir);
			break;
		}

		case 5: {
			for (int b = 0; b < numeros.size(); b++) {
				numeros[b] = 0;
			}
			break;
		}

		case 6: {
			cout << "Fechando aplicacao.." << endl;
			exit(0);
			break;
		}

		default: {
			cout << "Numero invalido!" << endl;
		}

		}
	}

	system("pause");
	return 0;
}