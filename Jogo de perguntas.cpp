#include <iostream>
using namespace std; 

int main ()
{
    int pontos = 0;

    cout << "Bem-vindo ao meu jogo!" << endl;
    

 // Pergunta 1

string resposta;

cout << "Qual eh a capital do Brasil? " << endl;
cin >> resposta;

if (resposta == "Brasilia") 
{
    pontos += 10;
    cout << "Parabens, voce acertou!" << endl;
} 

else 
{
    cout << "Desculpe, a resposta correta eh Brasilia" << endl;
}

 // Pergunta 2

    cout << "Normalmente, quantos litros de sangue uma pessoa tem? Em media, quantos sao retirados numa doacao de sangue?" << endl;
    cout << "A) Tem entre 2 a 4 litros. Sao retirados 450 mililitros " << endl;
    cout << "B) Tem entre 4 a 6 litros. São retirados 450 mililitros" << endl;
    cout << "C) Tem 10 litros. São retirados 2 litros" << endl;
    cout << "D) Tem 7 litros. São retirados 1,5 litros" << endl;
    cout << "E) Tem 0,5 litros. São retirados 0,5 litros" << endl;

    cin >> resposta;

    if (resposta == "B")
    {
        pontos +=10;
        cout << "Resposta correta" << endl;
    }
  else 
    {
        cout << "Desculpe, a resposta correta eh letra b" << endl;

    }

    
    cout << "Seu placar final eh: " << pontos << endl;

    return 0;
}