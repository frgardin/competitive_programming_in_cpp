#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem vindos ao jogo da adivinhação *" << endl;
    cout << "*************************************" << endl;

    bool nao_acertou = true;
    const int NUMERO_SECRETO = 42;
    int tentativas = 0;

    while(nao_acertou) {
        tentativas++;
        int chute;
        cout << "Qual é o seu chute? ";
        cin >> chute;
        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou) {
            cout << "Parabens! Você acertou o número secreto!" << endl;
            nao_acertou = false;
        }
        else if (maior) {
            cout << "Seu chute foi maior que o número secreto" << endl;
        }
        else {
            cout << "Seu chute foi menor que o número secreto" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    cout << "Voce acertou em " << tentativas << " tentativas" << endl;
    return 0;
}