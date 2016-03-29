//Debe escribir una cabecera de archivo con la plantilla CRC: Clase, Responsabilidad y Colaboracion
/*
 *  Clase: Tablero
 *
 *  Responsabilidad: El Tablero tiene como finalidad en generar la dimensi�n de la matriz por
 *  medio de lo que ingrese el usuario. De este modo se manipula las coordenadas para hallar y
 *  esconder la posici�n de la Bolita.
 *
 *  Colaboraci�n: La clase Tablero utiliza la clase Arbitro para obtener los datos incorporados por el jugador.
 */
#ifndef SRC_TABLERO_H_ //Debe definirse
#define SRC_TABLERO_H_

class Tablero {
private:
    char** casillas; // Los asteriscos son Punteros
    int dimension;

public:
    Tablero();
    Tablero(int n);
    ~Tablero(); //Destructor
    char getCasilla(int x, int y);
    void setCasilla(int x, int y, char value);
    int getDimension();

};

#endif /* SRC_TABLERO_H_ */
