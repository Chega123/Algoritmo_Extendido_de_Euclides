#include <iostream>
using namespace std;

int EuclidesExtendido(int a, int b, int &x, int &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    int x1, y1;
    int euclides = EuclidesExtendido(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return euclides;
}
int main()
{
   int a, b, x, y, euclides,aux;
  cout<<"insertar primer numero: ";
    cin>>a;
  cout<<"insertar segundo numero: ";
    cin>>b;
   if(a < b) 
      aux =a;
      a=b;
      b = aux ;
  if ((a>0)&& b>0) {
    euclides = EuclidesExtendido(a, b, x, y);
     cout << "Euclides extendido: " << euclides << ", x = " << x << ", y = " << y      <<endl;
    }
  else; cout<< "Ingrese numeros positivos";
   
   return 0;
}
