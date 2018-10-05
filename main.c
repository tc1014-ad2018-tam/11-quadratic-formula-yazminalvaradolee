/*
 * Programa para sacar la formula cuadratica de cualquier numero
 *
 * Autora: Yasmin Alvarado Lee
 * correo:yazminalvlee@gmail.com
 * fecha: 4 de octubre
 *
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h> //Para funciones de caracteres

int main(void) {
    //Variables.
    double x1;
    double x2;
    double radical;
    int a;
    int b;
    int c;

    //Le pedimos al usuario sus variables
    printf("Valor de a:");
    scanf("%i", &a);
    printf("Valor de b:");
    scanf("%i", &b);
    printf("Valor de c:");
    scanf("%i", &c);

    //Si alguno de los valores a, b o c no son numeros su valor va a ser 0
    if(isdigit(a)==0 || isdigit(b)==0 || isdigit(c)==0){

        //Si a es 0 no se puede ejecutar porque nada es divisible entre 0
        if(a==0){
            printf("A = 0, no se puede dividir.");
        } else {

            //En esta operacion es cuando a no es 0 y se multiplica por el radical
            radical=pow(b,2)-4*a*c;
            printf("radical= %lf\n", radical);

            //Aqui llegaria a ser si el numero es negativo y por ende no se puede sacar la raiz cuadrada
            if (radical<0){
                printf("No podemos sacar raices a numeros negativos.");
            } else {
                //Se dan los valores de x1 y x2
                x1=-b+sqrt(radical)/2*a;
                x2=-b-sqrt(radical)/2*a;

                printf("X1: %lf\n", x1);
                printf("X2: %lf\n", x2);
            }
        }
    } else {
        //Por si no llegaran a poner un valor en numero, y fuera una letra no se podria hacer la operacion
        printf("\nAlguno de los valores no es un numero.");
    }

    return 0;
}