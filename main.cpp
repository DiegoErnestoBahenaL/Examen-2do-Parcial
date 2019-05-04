#include <fstream>
#include <iostream>

using namespace std;
char numerador2 [2];
char denominador2 [2];
char numerador1 [2];
char denominador1 [2];
int main (){
 
  fstream leerarchivo;
  
  string line;
  char caracter;
 
  leerarchivo.open("Archivo_de_prueba.txt");
  
  while (leerarchivo){
   
   
   leerarchivo>> caracter;
	
    if (caracter == '-' ){
    	
		leerarchivo.seekg(0, ios::cur);
    	leerarchivo.read(numerador2, 2); 
    	numerador2 [2]=0;
    	cout<<numerador2<<endl;
    
    	leerarchivo.seekg(0, ios::cur);
    	leerarchivo.read(denominador2, 2);
    	denominador2 [2]=0;
    	cout<<denominador2<<endl;
    	
    	 
        leerarchivo.seekg(0, ios::cur);
    	leerarchivo.read(numerador1, 3); 
    	numerador1 [2]=0;
    	cout<<numerador1<<endl;
    	
    	  leerarchivo.seekg(0, ios::cur);
    	leerarchivo.read(denominador1, 3); 
    	denominador1 [2]=0;
    	cout<<denominador1[0]<<endl;
        
     
  
	}
    
         
 
     
  }

  
 leerarchivo.close ();

return 0;
}
