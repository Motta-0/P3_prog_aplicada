#ifndef complexado_h
#include <math.h>
#define complexado_h

using namespace std;

struct tComplexos
{
  float real;
  float imaginario;
  float mod1;
  float mod2;

} Ncomplex[3];


void add()
{
  Ncomplex[2].real = Ncomplex[0].real + Ncomplex[1].real;
  Ncomplex[2].imaginario = Ncomplex[0].imaginario + Ncomplex[1].imaginario;
}

void sub()
{
  Ncomplex[2].real = Ncomplex[0].real - Ncomplex[1].real;
  Ncomplex[2].imaginario = Ncomplex[0].imaginario - Ncomplex[1].imaginario;
}

void mult()
{
  Ncomplex[2].real = (Ncomplex[0].real * Ncomplex[1].real) - (Ncomplex[0].imaginario * Ncomplex[1].imaginario);

  Ncomplex[2].imaginario = (Ncomplex[1].imaginario * Ncomplex[0].real) + (Ncomplex[0].imaginario * Ncomplex[1].real);
}

void div()
{
  Ncomplex[2].real = (Ncomplex[0].real * Ncomplex[1].real) + (Ncomplex[0].imaginario * Ncomplex[1].imaginario);
  Ncomplex[2].imaginario = (Ncomplex[0].imaginario * Ncomplex[1].real) - (Ncomplex[1].imaginario * Ncomplex[0].real);

  float denominador = (Ncomplex[1].real * Ncomplex[1].real) + (Ncomplex[1].imaginario * Ncomplex[1].imaginario);

  cout << "\n\nO resultado é: " << Ncomplex[2].real << "/" << denominador;

  if (Ncomplex[2].imaginario >= 0)
  {
    cout << "+" << Ncomplex[2].imaginario << "j/" << denominador << endl;
  }
  else
  cout << Ncomplex[2].imaginario << "j/" << denominador << endl;
}

void module()
{
  Ncomplex[2].mod1 = sqrt(pow(Ncomplex[0].real,2) + pow(Ncomplex[0].imaginario,2));

  cout << "O modulo do primeiro número complexo é: " << Ncomplex[2].mod1 << endl;

  Ncomplex[2].mod2 = pow(pow(Ncomplex[1].real,2) + pow(Ncomplex[1].imaginario,2), 0.5);

  cout << "O modulo do segundo número complexo é: " << Ncomplex[2].mod2 << endl;
}

void print_result()
{ 
  cout << endl << "O resultado da operação é: ";
  cout << Ncomplex[2].real;
  
  if (Ncomplex[2].imaginario > 0)
    {
      cout << "+" << Ncomplex[2].imaginario << "j" << endl;
    }
    else 
    cout << Ncomplex[2].imaginario << "j" << endl << endl;
}
#endif