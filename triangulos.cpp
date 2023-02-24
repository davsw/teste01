#include <iostream>
using namespace std;

int main ()
{

    //variaveis

      
      float ladoA, ladoB, ladoC;
      

    //entrada

      cout << "Insira o comprimento do lado A:" <<endl;
      cin >> ladoA;

      cout << "Insira o comprimento do lado B:" <<endl;
      cin >> ladoB;

      cout << "Insira o comprimento do lado C:" <<endl;
      cin >> ladoC;

		// Equilatero: Todas as medidas sao iguais
		
      if((ladoA == ladoB)&&(ladoB == ladoC))
      { 
      
        cout << "Um triangulo equilatero!" <<endl;
 
      }
      
      // Escaleno: Todas as medidas sao diferentes
      
    else if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC))
	  cout << "Um triangulo escaleno!" <<endl;
	  
	  // Isosceles: Duas medidas iguais
	 else if ((ladoA == ladoB) || (ladoB == ladoC) || (ladoA == ladoC))
	   cout<< "Um triangulo isosceles!" <<endl;
	   
	  // Comprimento invalido. (<0)
	  
	  else if ((ladoA < 0) && (ladoB < 0) && (ladoC < 0));
	  cout << "Comprimento invalido! Nao eh um triangulo." <<endl;
	}

