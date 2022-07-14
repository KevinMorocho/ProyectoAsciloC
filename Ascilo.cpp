#include <string>
#include <stdio.h>

using namespace std;

void registro(int n);
int main()
{
    int numPersona;
    printf("\n Ingrese el numero de pacientes a registrar ");
    scanf("%d", &numPersona);
    registro(numPersona);
    return 0;
}

void registro(int n)
{
    string nombre[50];
    string apellido[50];
    int edad[50];
    int enfermedad[50];

    for (int i = 0; i < n; i++)
    {
        printf("\n ---PACIENTE [%i]---", i + 1);
        printf("\n Ingrese el nombre: ");
        scanf("%s", &nombre[i]);
        printf("\n Ingrese el apellido:");
        scanf("%s", &apellido[i]);
        fflush(stdin);
        printf("\n Ingrese la edad:");
        scanf("%d", &edad[i]);
        if (edad[i] < 65)
        {
            printf("\n Ingrese la edad entre 65 hasta 95: \n");
            scanf("%d", &edad[i]);
        }
        printf("\n SELECCIONE LA ENFERMEDAD");
        printf("\n 1. Hipertension");
        printf("\n 2. Diabetes");
        printf("\n 3. Osteoporosis");
        printf("\n 4. Alzheimer ");
        printf("\n Ingrese el numero: ");
        scanf("%d", &enfermedad[i]);
    }

    // Mostrar Datos
    printf("\n");
    printf("\n ------REGISTRO DE PACIENTES------");
    printf("\n");
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (enfermedad[i] == 1)
        {
            printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
            printf("\n Nombre y Apellido: %s %s", &nombre[i], &apellido[i]);
            printf("\n Edad: %d", edad[i]);
            printf("\n Enfermedad: Hipertension");
            printf("\n Medicamento: Diuretico - Nombre Medicamento: Hidroclorotiazida");
            printf("\n Dosis: 12.5 a 25 mg - Cuantos Dias/Horas: Diariamente una vez al dia (Por ejemplo martes) despues de cada almuerzo 12 horas");
            printf("\n----------------------------------------------------------------------------------------------------------------------------");
            cont1++;
        }
        else
        {
            if (enfermedad[i] == 2)
            {
                printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                printf("\n Edad: %d", edad[i]);
                printf("\n Enfermedad: Diabetes");
                printf("\n Medicamento: Apidra - Nombre Medicamento: KwikPen Tempo");
                printf("\n Dosis: 3 ml Solucion - Cuantos Dias/Horas: Dosis diarias antes de cada comida dentro de 6 horas, 8 horas y 12 horas (De lunes a viernes)");
                printf("\n-----------------------------------------------------------------------------------------------------------------------------------------");
                cont2++;
            }
            else
            {
                if (enfermedad[i] == 3)
                {
                    printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                    printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                    printf("\n Edad: %d", edad[i]);
                    printf("\n Enfermedad: Osteoporosis");
                    printf("\n Medicamento: Fosamax - Nombre Medicamento: Fosamax 70m");
                    printf("\n Dosis: 70 mg - Cuantos Dias/Horas: Semanalmente 1 dosis cada dia despues del desayuno cada 8 horas");
                    printf("\n--------------------------------------------------------------------------------------------");
                    cont3++;
                }
                else
                {
                    if (enfermedad[i] == 4)
                    {
                        printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                        printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                        printf("\n Edad: %d", edad[i]);
                        printf("\n Enfermedad: Alzheimer");
                        printf("\n Medicamento: Aricept - Nombre Medicamento: Aricept 50m");
                        printf("\n Dosis: 10 mg - Cuantos Dias/Horas: Diariamente 1 dosis cada dia durante un mes (De lunes a viernes");
                        printf("\n--------------------------------------------------------------------------------------------");
                        cont4++;
                    }
                }
            }
        }
    }
    int sumatoria = 0;
    int resultado;
    for (int i = 0; i < n; i++)
    {
        sumatoria = sumatoria + edad[i];
    }
    resultado = sumatoria / n;
    printf("\n El total de pacientes que tienen Hipertension son [%i] ", cont1);
    printf("\n El total de pacientes que tienen Diabetes son [%i] ", cont2);
    printf("\n El total de pacientes que tienen Osteoporosis son [%i] ", cont3);
    printf("\n El total de pacientes que tienen Alzheimer son [%i] ", cont4);
    printf("\n El promedio de edad es %d anios", resultado);
}