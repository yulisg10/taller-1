//============================================================================
// Name          : Taller_La_Bolita.cpp
// C�digo_1		 : 1561806-2711
// Author_1      : Rub�n Dar�o Holgu�n Castro
// C�digo_2 	 : 1561798-2711
// Author_2		 : Yuliana Sarria Garc�a
// Version       : 2.0
// Copyright     :
// Description   : Crea un �rbitro e indica el inicio del juego.
//============================================================================
// Nota: este c�digo compila sin ning�n tipo de problemas en Windows debido
// que contiene system("pause"); system("cls");. A la hora de compilar en Linux
// posee algunos problemas con dichas funciones anteriormente.
// Debido a que los dos se ha manejado con Linux y Windows entonces para tener en
// cuenta esa observaci�n.

#include <iostream>
#include "Arbitro.h"
using namespace std;

int main() {
   Arbitro arbitro = Arbitro();
   arbitro.iniciarJuego();

	return 0;
}
