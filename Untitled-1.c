#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingrese un numero:\n");
    scanf("%d", &numero);

    printf("%d", numero%10);
    return 0;
}


//1.11

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingrese Numero\n");
    scanf("%d", &numero);

    printf("Separacion en digitos: %d-%d-%d-%d-%d", (numero/10000)%10, (numero/1000)%10, (numero/100)%10, (numero/10)%10, numero%10);
    return 0;
}

//1.12

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parte_entera;
    double numero_ingresado, parte_decimal;

    printf("Ingrese un numero con coma\n");
    scanf("%lf", &numero_ingresado);
    parte_entera = numero_ingresado;
    parte_decimal = (numero_ingresado - parte_entera);
    printf("Parte entera: %d\n", parte_entera);
    printf("Parte decimal: %.2lf\n", parte_decimal);

    return 0;
}

//1.13

#include <stdio.h>
#include <stdlib.h>

int main()
{

    double numero_ingresado;
    int parte_entera;

    printf("Ingrese un numero a redondear\n");
    scanf("%lf", &numero_ingresado);
    parte_entera = numero_ingresado;
    printf("Numero redondeado: %d\n", (parte_entera+1));
    return 0;
}

//1.14

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double metros;
    printf("Ingrese una distancia en metros\n");
    scanf("%lf", &metros);
    printf("Son: %.0lf Centimetros\n", (metros*100));
    printf("Son: %.0lf Milimetros\n", (metros*1000));
    printf("Son: %.3lf Kilometros\n", (metros/1000));
    return 0;
}

//1.15

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double radio;
    printf("Ingrese el radio: \n");
    scanf("%lf", &radio);
    printf("El area del circulo es %.2lf",     (M_PI*(radio*radio))    );
    return 0;
}

//1.16

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char simbolo;
    printf("Ingrese un simbolo\n");
    simbolo = getche();
    printf("\n El codigo ASCII de la %c es %d", simbolo, simbolo);
}

//1.17

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero;
    printf("Ingrese un numero \n");
    scanf("%d", &numero);
    printf("\n El codigo ASCII %D corresponde al simbolo %C", numero, numero);
    return 0;
}

//1.18

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char letra_mayuscula;
    int distancia;
    distancia = ('a'-'A');
    printf("Ingrese una letra MAYUSCULA\n");
    letra_mayuscula = getche();
    printf("\nSu minuscula es: %c", letra_mayuscula+distancia);
    return 0;
}




//2.3

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char simbolo;
    int numero_simbolo;
    printf("Ingrese un Simbolo: \n");
    simbolo = getche();
    numero_simbolo = simbolo;
    printf("\n");
    printf("%d \n", numero_simbolo);

    if(numero_simbolo>=97 && numero_simbolo<=121)
    {
        printf("Esto es una minuscula");
    }
    else if(numero_simbolo>=65 && numero_simbolo<=90)
    {
        printf("Esto es una MAYUSCULA");
    }
    else
    {
        printf("este es el else");
    }

    return 0;
}

//2.5

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int dni, edad, edad_joven, dni_joven, edad_viejo, dni_viejo;

    printf("Ingrese el primer DNI: \n");
    scanf("%d", &dni);
    printf("Ingrese la edad del DNI %d : \n", dni);
    scanf("%d", &edad);

        edad_viejo = edad;
        dni_viejo = dni;

        edad_joven = edad;
        dni_joven = dni;


    printf("Ingrese el segundo DNI: \n");
    scanf("%d", &dni);
    printf("Ingrese la edad del DNI %d: \n", dni);
    scanf("%d", &edad);

    if(edad>edad_viejo)
    {
        edad_viejo = edad;
        dni_viejo = dni;
    }
    if(edad<edad_joven)
    {
        edad_joven = edad;
        dni_joven = dni;
    }

    printf("Ingrese el tercer DNI: \n");
    scanf("%d", &dni);
    printf("Ingrese la edad del DNI %d: \n", dni);
    scanf("%d", &edad);

    if(edad>edad_viejo)
    {
        edad_viejo = edad;
        dni_viejo = dni;
    }
    if(edad<edad_joven)
    {
        edad_joven = edad;
        dni_joven = dni;
    }

    printf("el dni de la personas mas vieja es %d\n", dni_viejo);
    printf("el dni de la persona mas joven es %d\n", dni_joven);
    return 0;
}



//2.6

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char caracter_1, caracter_2, caracter_3;
    int int_caracter_1, int_caracter_2, int_caracter_3, menor;

    printf("Ingrese la primer letra: \n");
    caracter_1 = getche();
    printf("\n");
    int_caracter_1 = caracter_1;

    if(int_caracter_1>=97 && int_caracter_1<=122)
    {
        int_caracter_1 = int_caracter_1 - 'a';
    }
    else if(int_caracter_1>=65 && int_caracter_1<=90)
    {
        int_caracter_1 = int_caracter_1 - 'A';
    }
    else
    {
        int_caracter_1 = "ZZZ";
    }
    menor = int_caracter_1;


    printf("Ingrese la segunda letra: \n");
    caracter_1 = getche();
    printf("\n");
    int_caracter_2 = caracter_2;

    if(int_caracter_2>=97 && int_caracter_2<=122)
    {
        int_caracter_2 = int_caracter_2 - 'a';
    }
    else if(int_caracter_2>=65 && int_caracter_2<=90)
    {
        int_caracter_2 = int_caracter_2 - 'A';
    }
    else
    {
        int_caracter_2 = "ZZZ";
    }
    if(int_caracter_2 < menor)
    {
        menor = int_caracter_2;
    }

    printf("Ingrese la segunda letra: \n");
    caracter_3 = getche();
    printf("\n");
    int_caracter_3 = caracter_3;

    if(int_caracter_3>=97 && int_caracter_3<=122)
    {
        int_caracter_3 = int_caracter_3 - 'a';
    }
    else if(int_caracter_3>=65 && int_caracter_3<=90)
    {
        int_caracter_3 = int_caracter_3 - 'A';
    }
    else
    {
        int_caracter_3 = "ZZZ";
    }
    if(int_caracter_3 < menor)
    {
        menor = int_caracter_3;
    }

    if(menor == int_caracter_1)
    {
        printf("La menor letra es la %c", caracter_1);
    } else if (menor == int_caracter_2)
    {
        printf("La menor letra es la %c", caracter_2);
    }
    else
    {
        printf("La menor letra es la %c", caracter_3);
    }
    return 0;
}

 //2.7

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double numero, resto, signo;
    int int_numero;

    printf("Ingrese un numero: \n");
    scanf("%lf", &numero);
    printf("\n");


    int_numero = numero;
    resto = numero - int_numero;

    if(resto != 0) //ES UN NUMERO REAL
    {
        if(numero >= 0)
        {
            printf("El numero es real y positivo \n");
        }
        else
        {
            printf("El numero es real y negatvo");
        }

    }
    else if(numero >= 0) //ES UN NUMERO ENTERO
    {
        printf("El numero es entero y positivo \n");
    }
    else
    {
        printf("El numero es entero y negatvo");
    }

    return 0;
}

// 2.12

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, anio, biciesto;
    printf("Ingresar dia\n");
    scanf("%d", &dia);
    printf("Ingresar mes\n");
    scanf("%d", &mes);
    printf("Ingresar anio\n");
    scanf("%d", &anio);

    //CALCULO DE BICIESTO SI DA 1 ES BICIESTO
    if( (anio%4) == 0 && (anio%100) != 0)
    {
        biciesto = 1;
    }
    else if( (anio%4) == 0 && (anio%100) == 0 && (anio%400) == 0)
    {
        biciesto = 1;
    }
    else
    {
        biciesto = 0;
    }
    //CALCULO DE BICIESTO SI DA 1 ES BICIESTO

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia <=30) {
            printf("%d/%d/%d es Correcto\n", dia, mes, anio);
        }
        else
        {
        printf("%d/%d/%d es INCORRECTO\n", dia, mes, anio);
        }
    }
    else if(mes == 2)
    {
        if(dia <= (28 + biciesto))
        {
            printf("%d/%d/%d es Correcto\n", dia, mes, anio);
        }
        else
        {
        printf("%d/%d/%d es INCORRECTO\n", dia, mes, anio);
        }
    }
    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if(dia <= 31)
        {
            printf("%d/%d/%d es Correcto\n", dia, mes, anio);
        }
        else
        {
        printf("%d/%d/%d es INCORRECTO\n", dia, mes, anio);
        }
    }
    else
    {
        printf("%d/%d/%d es INCORRECTO\n", dia, mes, anio);
    }
    return 0;
}

// 2.22

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int un_metro, cinco_metros, necesario, ideal_de_5, resto;

    printf("Cantidad de caños de 1 metro\n");
    scanf("%d", &un_metro);
    printf("Cantidad de caños de 5 metros\n");
    scanf("%d", &cinco_metros);
    printf("Metros totales a cubrir\n");
    scanf("%d", &necesario);

    ideal_de_5 = necesario/5; //DARA LA CANTIDAD IDEAL DE CAÑOS DE 5

    /* ##################################
    ##### TENGO >= DE 5 QUE EL IDEAL ####
    ###################################*/

    if(cinco_metros >= ideal_de_5)
    {
        resto = necesario - (ideal_de_5*5);
        if(un_metro>=resto)
        {
            printf("Sugerencia: \n%d Unidades de caño de 5 metros\n%d Unidades de caño de 1 metro\n", ideal_de_5, (necesario-(ideal_de_5*5)));
        }
        else
        {
            printf("NO SE PUEDE CUBRIR");
        }
    }
    /* #####################################
    ##### TENGO MENOS DE 5 QUE EL IDEAL ####
    ######################################*/
    else
    {
        resto = necesario - (cinco_metros*5);
        if(un_metro>resto)
        {
            printf("Sugerencia: \n%d Unidades de caño de 5 metros\n%d Unidades de caño de 1 metro\n", cinco_metros, (necesario-(cinco_metros*5)));
        }
        else
        {
            printf("NO SE PUEDE CUBRIR");
        }
    }
    return 0;
}

//3.3

#include <stdio.h>
#include <math.h>

int main()

{
    int numero=0, mayor=numero, menor=numero, promedio=0, vueltas=1;
        do
        {
            printf("ingrese un numero: \n");
            scanf("%d", &numero);

            if(vueltas==1)
            {
                mayor=numero;
                menor=numero;
                vueltas++;
                promedio=promedio+numero;

            }
            else
            {
            if(numero>=mayor)
            {
                mayor=numero;
            }

            if(numero<menor && numero!=0)
            {
                menor=numero;
            }

            vueltas++;
            promedio=promedio+numero;
            }

        }
        while(numero!= 0);

    printf("MAYOR: %d\n", mayor);
    printf("MENOR: %d\n", menor);
    printf("PROMEDIO: %d\n", promedio/(vueltas));
    return 0;
}

//3.4

#include <stdio.h>
#include <math.h>

int main()

{

    int primero=1, segundo=0, numero, vueltas=0;

    printf("Ingrese numero: \n");
    scanf("%d", &numero);

    while(numero!=0)
    {
        printf("Ingrese numero: \n");
        scanf("%d", &numero);

        if(numero>segundo)
        {
            if(numero>segundo && numero<primero)
            {
                segundo=numero;
            }
            else
            {
                segundo=primero;
                primero=numero;
            }
        }
        vueltas++;
    }
    if(vueltas>=2)
    {
        printf("PRIMERO: %d\n", primero);
        printf("SEGUNDO: %d", segundo);
    }
    else
    {
        printf("NO HAY VUELTAS SUFICIENTES");
    }

    return 0;

}

//3.5

#include <stdio.h>
#include <math.h>

int main()

{
    double numero, resto;
    int int_numero, vueltas=0;

    do
    {
        printf("Ingrese un numero: \n");
        scanf("%lf", &numero);

        int_numero=numero;
        resto=numero-int_numero;

        if(resto==0)
        {
            vueltas++;
        }

    }while(numero!=0);

    printf("Se ingresaron %d numeros enteros", vueltas);

    return 0;
}

//3.6

#include <stdio.h>
#include <math.h>

int main()

{
    int a=0, b=0, resto=0;

    printf("Ingrese un numero: \n");
    scanf("%d", &a);
    printf("Ingrese un numero: \n");
    scanf("%d", &b);

    do
    {
        resto=a%b; //182
        if(resto!=0) //si
        {
            a=b;
            b=resto; //182
        }
    }while(resto!=0);

    printf("el MCD es %d", b);
    return 0;
}

//3.7

//3.8

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ingreso, copia, vuelta=0, correlativo=1, creciente=1, anterior;

    do
    {
    printf("Ingrese un numero: \n");
    scanf("%d", &ingreso);

        if(ingreso!=0)
        {
            if(vuelta==0)
            {
               copia=ingreso;
               anterior=ingreso;
            }
            else
            {
                //CRECIENTE
                if(ingreso>anterior)
                {
                    creciente=1;
                    anterior=ingreso;
                }
                else
                {
                    creciente=0;
                }
                //CORRELATIVIDAD
                if(ingreso==(copia+1) && correlativo==1)
                {
                    correlativo=1;
                    copia=ingreso;
                }
                else
                {
                    correlativo=0;
                }
            }
        }
        vuelta++;
    }while(ingreso!=0);

    if(correlativo==1 && creciente==1)
    {
        printf("es correlativo y creciente\n");
    }
    else if(correlativo==0 && creciente==1)
    {
        printf("es creciente y NO correlativo");
    }
    else
    {
        printf("no es creciente");
    }
    return 0;
}

//3.9
