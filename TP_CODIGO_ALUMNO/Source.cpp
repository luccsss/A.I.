/*SIETE Y MEDIO*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h> 
#include <Windows.h> 

using namespace System;
using namespace std;

void dibujarTitulo();
int menu();
float generarValor();
int generarSimbolo();
void DibujarCarta(int carta);
float JugarJugardor1(string jugador1);
float JugarJugardor2(string jugador2);
string JugarPartida(string jugador1, string jugador2);
void ImprimirGanador(string ganador);

void dibujarTitulo() {

    Console::ForegroundColor = ConsoleColor::Magenta;
    cout << endl;
    cout << endl;
    Console::SetCursorPosition(44, 2);
    cout << "*********    **     **" << endl;
    Console::SetCursorPosition(44, 3);
    cout << "*********     **   **" << endl;

    Console::ForegroundColor = ConsoleColor::Cyan;
    Console::SetCursorPosition(51, 4);
    cout << "**      ** ** " << endl;
    Console::SetCursorPosition(48, 5);
    cout << "******      ***" << endl;

    Console::ForegroundColor = ConsoleColor::Magenta;
    Console::SetCursorPosition(48, 6);
    cout << "******      ***" << endl;
    Console::SetCursorPosition(51, 7);
    cout << "**       ***" << endl;

    Console::ForegroundColor = ConsoleColor::Cyan;
    Console::SetCursorPosition(51, 8);
    cout << "**       ***" << endl;
    Console::SetCursorPosition(51, 9);
    cout << "**       ***" << endl;


    Console::ForegroundColor = ConsoleColor::Magenta;
    Console::SetCursorPosition(32, 12);
    cout << "***     ***   ********   *****      **      *****" << endl;
    Console::SetCursorPosition(32, 13);
    cout << "****   ****   ********   **  **     **     **   **" << endl;

    Console::ForegroundColor = ConsoleColor::Cyan;
    Console::SetCursorPosition(32, 14);
    cout << "** ** ** **   **         **   **    **    **     **" << endl;
    Console::SetCursorPosition(32, 15);
    cout << "**  **   **   ********   **    **   **   **       **" << endl;

    Console::ForegroundColor = ConsoleColor::Magenta;
    Console::SetCursorPosition(32, 16);
    cout << "**       **   ********   **    **   **   **       **" << endl;
    Console::SetCursorPosition(32, 17);
    cout << "**       **   **         **   **    **    **     **" << endl;

    Console::ForegroundColor = ConsoleColor::Cyan;
    Console::SetCursorPosition(32, 18);
    cout << "**       **   ********   **  **     **     **   **" << endl;
    Console::SetCursorPosition(32, 19);
    cout << "**       **   ********   *****      **      *****" << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << endl;
}

int menu() {
    int opcion;
    cout << "BIENVENIDO!" << endl;
    cout << "El objetivo del juego 'Siete y medio' es acumular cartas hasta 7 y medio durante 6 partidas" << endl;
    cout << "Si obtienes un puntaje acumulativo igual 7.5 en cartas => 100 puntos " << endl;
    cout << "Si obtienes un puntaje acumulativo entre 6 y 9 en cartas => 50 puntos " << endl;
    cout << "Buena suerte!" << endl;
    cout << endl;
    do
    {
        cout << "Seleccione una opción para continuar..." << endl;
        cout << "1. Comenzar" << endl;
        cout << "2. Salir del juego" << endl;
        cout << "Opción seleccionada: "; cin >> opcion;
        cout << endl;
        if (opcion != 1 && opcion != 2)
        {
            cout << "La opción marcada es inválida, seleccione una opción váida" << endl;
            cout << endl;
        }
    } while (opcion != 1 && opcion != 2);

    return opcion;
}

float generarValor() {
    return 1 + rand() % (13 - 1 + 1);
}

int generarSimbolo() {
    return 3 + rand() % (6 - 3 + 1);
}

void DibujarCarta(int carta) {
    char simbolo;
    simbolo = generarSimbolo();
    cout << "+-------+" << endl;
    switch (carta)
    {
        break;
    case 1:
        cout << "|       |\n";
        cout << "|       |\n";
        cout << "|   A   |\n";
        cout << "|       |\n";
        cout << "|       |\n";
        break;
    case 2:
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|       |\n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";

        break;
    case 3:
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";

        break;
    case 4:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|       |\n";
        cout << "|       |\n";
        cout << "|       |\n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 5:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 6:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|       |\n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|       |\n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 7:
        cout << "| " << simbolo << " " << simbolo << " " << simbolo << " | \n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "| " << simbolo << " " << simbolo << " " << simbolo << " | \n";

        break;
    case 8:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|   " << simbolo << "   | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|   " << simbolo << "   | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 9:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "|   " << simbolo << "   | \n";
        cout << "| " << simbolo << " " << simbolo << " " << simbolo << " | \n";
        cout << "|   " << simbolo << "   | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 10:
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        cout << "| " << simbolo << "   " << simbolo << " | \n";
        break;
    case 11:
        cout << "| J     |\n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|     J |\n";
        break;
    case 12:
        cout << "| Q     |\n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|     Q |\n";
        break;
    case 13:
        cout << "| K     |\n";
        cout << "|       |\n";
        cout << "|   " << simbolo << "   | \n";
        cout << "|       |\n";
        cout << "|     K |\n";
        break;
    }
    cout << "+-------+" << endl;
}

float JugarJugardor1(string jugador1) {
    float carta1, nueva1, valor1, gana1 = 0;
    char otraCarta;

    srand(time(0));
    cout << "Es el turno de " << jugador1 << ". Tu carta al azar es:" << endl;
    Console::ForegroundColor = ConsoleColor::Magenta;
    carta1 = generarValor();
    DibujarCarta(carta1);
    Console::ForegroundColor = ConsoleColor::White;
    if (carta1 == 10 || carta1 == 11 || carta1 == 12 || carta1 == 13)
    {
        valor1 = 0.5;
    }
    else
    {
        valor1 = carta1;
    }
    cout << endl;
    if (valor1 > 7.5)
    {
        cout << endl;
        cout << "Te pasaste!!" << endl;
        cout << "su carta es de : " << valor1;
        cout << endl;
        if (valor1 <= 9)
        {
            gana1 += 50;
        }
    }
    else
    {
        do
        {
            do
            {
                cout << "su valor acumulado es de : " << valor1;
                cout << endl;
                cout << "¿Desea otra carta? ( s:sí / n:no ) : "; cin >> otraCarta;
            } while (!(otraCarta == 's' || otraCarta == 'S' || otraCarta == 'N' || otraCarta == 'n'));
            if (otraCarta == 's' || otraCarta == 'S') {
                Console::ForegroundColor = ConsoleColor::Magenta;
                nueva1 = generarValor();
                DibujarCarta(nueva1);
                Console::ForegroundColor = ConsoleColor::White;
                if (nueva1 == 10 || nueva1 == 11 || nueva1 == 12 || nueva1 == 13)
                {
                    valor1 += 0.5;
                }
                else
                {
                    valor1 += nueva1;
                }
                if (valor1 > 7.5)
                {
                    cout << endl;
                    cout << "Te pasaste!!" << endl;
                    cout << "Su valor acumulado es de: " << valor1 << endl;
                    cout << endl;
                    if (valor1 <= 9)
                    {
                        gana1 += 50;
                    }
                }
                else if (valor1 == 7.5)
                {
                    cout << endl;
                    cout << "Su valor acumulado es de: " << valor1 << endl;
                    cout << "LOGRASTE UN SIETE Y MEDIO!!" << endl;
                    cout << endl;
                    gana1 += 100;
                }
            }
            else
            {
                cout << endl;
                if (valor1 >= 6)
                {
                    gana1 += 50;
                }
            }
        } while (valor1 < 7.5 && (otraCarta == 's' || otraCarta == 'S'));
    }
    return gana1;
}

float JugarJugardor2(string jugador2) {
    float carta2, nueva2, valor2, gana2 = 0;
    char otraCarta;

    srand(time(0));
    cout << "Es el turno de " << jugador2 << ". Tu carta al azar es:" << endl;
    Console::ForegroundColor = ConsoleColor::Cyan;
    carta2 = generarValor();
    DibujarCarta(carta2);
    Console::ForegroundColor = ConsoleColor::White;
    if (carta2 == 10 || carta2 == 11 || carta2 == 12 || carta2 == 13)
    {
        valor2 = 0.5;
    }
    else
    {
        valor2 = carta2;
    }

    cout << endl;

    if (valor2 > 7.5)
    {
        cout << endl;
        cout << "Te pasaste!!" << endl;
        cout << "su carta es de : " << valor2;
        cout << endl;
        if (valor2 <= 9)
        {
            gana2 += 50;
        }
    }
    else
    {
        do 
        {
            do
            {
                cout << "Su valor acumulado es de : " << valor2;
                cout << endl;
                cout << "¿Desea otra carta? ( s:sí / n:no ) : "; cin >> otraCarta;
            } while (!(otraCarta == 's' || otraCarta == 'S' || otraCarta == 'N' || otraCarta == 'n'));
            if (otraCarta == 's' || otraCarta == 'S') {
                Console::ForegroundColor = ConsoleColor::Cyan;
                nueva2 = generarValor();
                DibujarCarta(nueva2);
                Console::ForegroundColor = ConsoleColor::White;
                if (nueva2 == 10 || nueva2 == 11 || nueva2 == 12 || nueva2 == 13)
                {
                    valor2 += 0.5;
                }
                else
                {
                    valor2 += nueva2;
                }
                if (valor2 > 7.5)
                {
                    cout << endl;
                    cout << "Te pasaste!!" << endl;
                    cout << "Su valor acumulado es de: " << valor2 << endl;
                    cout << endl;
                    if (valor2 <= 9)
                    {
                        gana2 += 50;
                    }
                }
                else if (valor2 == 7.5)
                {
                    cout << endl;
                    cout << "Su valor acumulado es de: " << valor2 << endl;
                    cout << "LOGRASTE UN SIETE Y MEDIO!!" << endl;
                    cout << endl;
                    gana2 += 100;
                }
            }
            else
            {
                cout << endl;
                if (valor2 >= 6)
                {
                    gana2 += 50;
                }
            }
        } while (valor2 < 7.5 && (otraCarta == 's' || otraCarta == 'S'));
    }
    return gana2;
}

string JugarPartida(string jugador1, string jugador2) {
    float gana_acumulado1 = 0, gana_acumulado2 = 0, puntos1, puntos2;
    string ganador;

    for (int numPartida = 0; numPartida < 6; numPartida++)
    {
        Console::BackgroundColor = ConsoleColor::DarkMagenta;
        cout << "Partida " << numPartida + 1 << " :" << endl;
        Console::BackgroundColor = ConsoleColor::Black;
        cout << endl;

        puntos1 = JugarJugardor1(jugador1);
        gana_acumulado1 += puntos1;
        cout << jugador1 << " obtuvo un total de " << puntos1 << " puntos";
        _getch();
        Console::Clear();

        Console::BackgroundColor = ConsoleColor::DarkCyan;
        cout << "Partida " << numPartida + 1 << " :" << endl;
        Console::BackgroundColor = ConsoleColor::Black;
        cout << endl;

        puntos2 = JugarJugardor2(jugador2);
        gana_acumulado2 += puntos2;
        cout << jugador2 << " obtuvo un total de " << puntos2 << " puntos";
        cout << endl;
        cout << endl;
        Console::ForegroundColor = ConsoleColor::Yellow;
        cout << "*********" << endl;
        Console::ForegroundColor = ConsoleColor::White;
        if (puntos1 > puntos2)
        {
            cout << jugador1 << " gana esta esta partida acumulando " << gana_acumulado1 << " puntos!!";
        }
        else if (puntos2 > puntos1)
        {
            cout << jugador2 << " gana esta esta partida acumulando " << gana_acumulado2 << " puntos!!";
        }
        else
        {
            cout << "Es un empate. Nadie gana esta partida...";
        }
        _getch();
        Console::Clear();
    }
    cout << endl;
    cout << endl;
    Console::ForegroundColor = ConsoleColor::Red;
    cout << "SE ACABÓ EL JUEGO!" << endl;
    cout << "******************" << endl;
    Console::ForegroundColor = ConsoleColor::White;
    cout << jugador1 << " obtuvo " << gana_acumulado1 << " puntos acumulados!" << endl;
    cout << jugador2 << " obtuvo " << gana_acumulado2 << " puntos acumulados!" << endl;
    if (gana_acumulado1 > gana_acumulado2)
    {
        ganador = jugador1;
    }
    else if (gana_acumulado2 > gana_acumulado1)
    {
        ganador = jugador2;
    }
    else
    {
        ganador = "EMPATE";
    }
    return ganador;
}

void ImprimirGanador(string ganador) {

    if (ganador == "EMPATE")
    {
        cout << "No hay ganador" << endl;
        cout << endl;
        Console::BackgroundColor = ConsoleColor::Gray;
        Console::ForegroundColor = ConsoleColor::Black;
        cout << "ES UN " << ganador;
        Console::ForegroundColor = ConsoleColor::White;
        Console::BackgroundColor = ConsoleColor::Black;
    }
    else
    {
        Console::BackgroundColor = ConsoleColor::White;
        Console::ForegroundColor = ConsoleColor::Black;
        cout << "El ganador es: " << ganador;
        Console::ForegroundColor = ConsoleColor::White;
        Console::BackgroundColor = ConsoleColor::Black;
    }
}

int main() {
    char respuesta;
    int opcion;
    string jugador1, jugador2, ganador;
    Console::CursorVisible = false;
    setlocale(LC_ALL, "spanish");

    do
    {
        dibujarTitulo();
        opcion = menu();
        switch (opcion)
        {
        case 1:
            system("cls");
            dibujarTitulo();
            Console::ForegroundColor = ConsoleColor::Magenta;
            cout << "Ingrese el nombre del primer jugador: "; cin >> jugador1;
            cout << endl;
            Console::ForegroundColor = ConsoleColor::Cyan;
            cout << "Ingrese el nombre del segundo jugador: "; cin >> jugador2;
            cout << endl;
            Console::ForegroundColor = ConsoleColor::White;
            cout << "A JUGAR!" << endl;
            Sleep(800);
            system("cls");

            ganador = JugarPartida(jugador1, jugador2);
            Console::ForegroundColor = ConsoleColor::Yellow;
            cout << "*****************" << endl;
            Console::ForegroundColor = ConsoleColor::White;
            ImprimirGanador(ganador);
            cout << endl;
            cout << endl;

            cout << "¿Desea volver a jugar? (S:si / N:no): "; cin >> respuesta;            
            system("cls");
            break;
        case 2:
            cout << "Saliendo del juego..." << endl;
            Sleep(800);
            system("cls");
            break;
        }        
    } while (respuesta == 'S' || respuesta == 's');


    _getch();
    return 0;
}