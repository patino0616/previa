#include <iostream>
using namespace std;

float lado , radio , altura;
float lado = 0 , radio = 0 , altura = 0 ;
cout float PI = 3,1416

  float areadelcuadrado (float lado );
  float volumendelcilindro (float altura, float radio);
  float volumendelaesfera (float radio);

int main (){ 
 
  cout << "-----MENU-----" >> endl;
  cout << " -------------" >> endl;
  cout << "eliga la opcion que quiera" >> endl;
  cout << "---1 ¿calcular el area de un cuadrado?" << endl;
  cout << "---2 ¿calcuar el volumen de un cilindro?" << endl;
  cout << "---3 ¿calcular el volumen de una esfera?" << endl;
  cout << "---4 salir ---" << endl;
  cout << "---------" endl;
  cin >> opcion;

  swicth (opcion)
  {
    case 1: 
       cout << "ingrese el lado del cuadrado: " << endl;
       cin >> lado;
       cout << "el area del cuadrado es: " << areadelcuadrado << endl;

       break;
    case 2: 
       cout << "ingrese el volumen del cilindro: " << endl;
       cin >> radio;
       cout << "ingrese la altura del cilindro: " << endl;
       cin >> altura;
        
        cout << " el volumen de la esfera es : " << volumendelcilindro ( radio , altura) << endl;
        break;

        case 3:
        cout << "ingrese el radio del radio: " << endl;
        cin >> radio;

        cout << " el volumen de la esfera es: " << endl;
        cin >> esfera;
        break;

        case 4: 
        cout << "salir del programa: " << endl;
        break;

        default;

        return = 0;
        




}