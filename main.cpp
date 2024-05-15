#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
   int n;
   cout << "Cuantos alumnos quieren calcular su calificacion de POO: "; cin >> n;
   
   for (int i=0; i<n; ++i){
      float p1, p2, p3, promedio;
      cout << "Alumno " << i+1 << endl;
      cout << "Ingresa tu calificacion del primer parcial: "; cin >> p1;
      cout << "Ingresa tu calificacion del segundo parcial: "; cin >> p2;
      cout << "Ingresa tu calificacion del tercer parcial: "; cin >> p3;

      promedio=(p1+p2+p3)/3;

      system("cls");
      
      cout << "Tu calificacion es: " << promedio << endl;
      
      system("pause");
   }
   return 0;
}