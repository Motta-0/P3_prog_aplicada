#include <iostream>
#include <math.h>
#include "tComplexos.h"

using namespace std;


int main ()
{
  int choice=0,  exit=0;

  while(exit == 0)
  {
    cout << ("Escolha qual opção vai querer: ")<< endl;
    cout << ("1: Soma") << endl;
    cout << ("2: Subtração") << endl;
    cout << ("3: Multiplicação") << endl;
    cout << ("4: Divisão") << endl;
    cout << ("5: Modulo\n") << endl;

    cin >> choice;

    for (int i=0; i<2; i++)
    {
      cout << ("\nDefina os valores do número complexo, primeiro a parte real depois a imaginaria.");

      cout << endl << "PARTE REAL: ";
      cin >> Ncomplex[i].real;
      cout << "PARTE IMAGINARIA: "; 
      cin >> Ncomplex[i].imaginario;

      cout << endl << Ncomplex[i].real;
      
      if (Ncomplex[i].imaginario > 0)
      {
        cout << "+" << Ncomplex[i].imaginario << "j" << endl;
      }
      else 
      cout << Ncomplex[i].imaginario << "j" << endl << endl;
    }

    if (choice == 1)
    {
      add();
      print_result();
    }
    else if (choice == 2)
    {
      sub();
      print_result();
    }
    else if (choice == 3)
    {
      mult();
      print_result();
    }
    else if( choice == 4)
    {
      div();

    }
    else if(choice == 5)
    {
      module();
    }
  cout << "\n\n\nDESEJA SAIR DO PROGRAMA??" <<endl << "DIGITE 1 para sim ou 0 para não" << endl;
  cin >> exit;
  cout << "\n\n\n\n\n";

  system("clear");
  }
}