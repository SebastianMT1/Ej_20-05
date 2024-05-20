#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    int num_user = 0, num_cpu = 0;
    int victorias = 0, derrotas = 0, empates = 0;
    int t = 0;

    do{
//Pedir datos
    cout<<"Piedra = 1\n";
    cout<<"Papel = 2\n";
    cout<<"Tijera = 3\n";
    cout<<"Salir del juego = 0\n\n";
    cin>>num_user;
    cout<<"\n";
//numero aleatorio
    t = time(NULL);
    srand(t);
    num_cpu = rand() % 3 + 1;
//menu
    switch (num_cpu){
        //CPU elige piedra
        case 1:
//usuario elige piedra
        if (num_user == 1){
            cout<<"Empate!\n\n";
            empates++;
        }
//usuario elige papel
        else if (num_user == 2){
            cout<<"Victoria!\n\n";
            victorias++;
        }
//usuario elige tijera
        else if (num_user == 3){
            cout<<"Derrota!\n\n";
            derrotas++;
        }

        else{
            num_user = 0;
        }
    
        break;
//CPU elige papel
        case 2:

        if (num_user == 1){
            cout<<"Derrota!\n\n";
            derrotas++;
        }

        else if (num_user == 2){
            cout<<"Empate!\n\n";
            empates++;
        }

        else if (num_user == 3){
            cout<<"Victoria!\n\n";
            victorias++;
        }

        else{
            num_user = 0;
        }

        break;

        case 3:

         if (num_user == 1){
            cout<<"Victoria!\n\n";
            victorias++;
        }

        else if (num_user == 2){
            cout<<"Derrota!\n\n";
            derrotas++;
        }

        else if (num_user == 3){
            cout<<"Empate!\n\n";
            empates++;
        }

        else{
            num_user = 0;
        }

        break;
        
    default:
        break;
    }
        
    } while (num_user != 0);
//Pantalla de resultados
    cout<<"Fin del juego \n\n";
    cout<<"victorias = "<<victorias<<"\n";
    cout<<"Empates = "<<empates<<"\n";
    cout<<"Derrotas = "<<derrotas<<"\n\n";

    return 0;
}