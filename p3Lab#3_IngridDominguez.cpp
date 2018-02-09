#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;


//int menu
int menu();

//ejercicio 1
void ejercicio1();

//ejercicio 2
void ejercicio2();

//ejercicio 3
void ejercicio3();


// crear permutacion



int main(){
	int opcion = 1;

	while(opcion>=1 && opcion<=3){
		opcion = menu();

		switch(opcion){
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;
		}
	}// fin del while

	cout<< "Salio"<< endl;


	return 0;
}//fin del main



int menu(){
	int opcion= 0;
	cout<<"***  Bienvenido!" << endl;
	cout<< "Ingrese su opcion: "<< endl;
	cout<< "1.- Ejercicio 1"<< endl;
	cout<< "2.- Ejercicio 2"<< endl;
	cout<< "3.- Ejercicio 3"<< endl;
	cout<< "4.- Salir"<< endl;
	cout<< "Ingrese su opcion : ";
	cin>> opcion;

	return opcion;
}// fin del menu



//ejercicio 1
void ejercicio1(){
	int size = 0;
	while(size<=0){
	        cout<< "Ingrese el tamaño del arreglo : ";
	        cin >> size;
	}// fin del if
	





}//  fin del metodo


void ejercicio2(){
	string cadena = "";
	int size = 0;

	while(size<=0 || size >4 ){
        	cout<< "Ingrese su cadena de numeros : ";
        	cin >> cadena;
		size = cadena.size();
	}// fin del while

	cout<< "el size es: "<< size <<endl;


//	string[] numeros = new string[size];
	string digito1 = cadena.substr(0,1);
        string digito2 = cadena.substr(1,1);
        string digito3 = cadena.substr(2,1);
        string digito4 = cadena.substr(3,1);

	cout<< digito1 << " "<< digito2 << " " << digito3 << " " << digito4 << endl;


	string combinaciones[48];
	cout<< "No pasa"<< endl;	
/*	for(int i = 0; i<9; i++){
		if(i== 0){
			combinaciones[0] = digito1;
			combinaciones[1] = digito2;
			combinaciones[2] = digito3;
			combinaciones[3] = digito4;
		}else{
			combinaciones[i+3] = "5";
		}
	}// fin del for

*/

	
	for(int i = 0; i<5; i++){
		int contador = i;
	//	for(int j = i; j<48; j+5){
		while(contador < 48){
			switch(i){
				case 0:
					combinaciones[contador] = digito1;
					break;
				case 1:
					combinaciones[contador] = digito2;
					break;
				case 2:
					combinaciones[contador] = digito3;
					break;
				case 3:
					combinaciones[contador] = digito4;
					break;
				case 4:
					combinaciones[contador] = digito4;
					contador = contador +5;
					combinaciones[contador]= digito3;
                                        contador = contador +5;       
					combinaciones[contador] = digito2;
                                        //contador = contador +5;
					combinaciones[19] = digito1;
					combinaciones[34] = digito1;
					break;
			}

			contador = contador +5;
			cout<< contador << " " << endl;
		//	combinaciones[j]  = digito1;
		}// fin del qhqile
		cout<< "sale  "<< endl;
	}//fin del for



	for(int i = 0; i<48; i++){
		cout<< combinaciones[i] << " ";
		if(i == 3 || i == 7 || i == 11 || i == 15 || i == 19 || 
		i == 23|| i == 27 || i == 31||  i == 35|| i == 39||i == 43 || i== 47){
			cout<< endl;
		}
	}// fin del segundo for

	cout<< endl;
}// fin del segundo metodo



//ejercicio 3
void ejercicio3(){
	int anio = 0;
	int dia = 0;
	int mes = 0;
        string fechaIngresada = "";
        cout<< "**** Ejemplo de fecha = 20170502"<< endl;
        cout<< "primero el año, luego el mes y por ultimo dia"<< endl;

        bool condicion = true;

        while(condicion){
                cout<< "Ingrese su fecha: ";
                cin>> fechaIngresada;

               // cout<<"La fecha es -> "<< fechaIngresada << endl;


                // se comienzan las condiciones
                int sizeFecha= 0;
                sizeFecha =  fechaIngresada.size();
                cout<<"size cadena: "<< sizeFecha  << endl;

                if(sizeFecha>8 || sizeFecha<1){
                        cout<< "**** Fecha no valido!"<< endl;
                        condicion = true;
                }else if(sizeFecha == 8){
                        cout<< "size correcto"<< endl;
		//	int anio = 0;
			anio =  atoi((fechaIngresada.substr(0,4)).c_str());
		//	int mes =0;
			mes =  atoi((fechaIngresada.substr(4,2)).c_str());
		//	int dia = 0;
			dia = atoi((fechaIngresada.substr(6,2)).c_str());
			cout<< anio<< " " << mes << " "<< dia << endl;	
		
			int contErrores = 0;
			if(anio <0 || anio >2018){
				contErrores++;
			}

			if(mes <0 || mes >12){
				contErrores++;
			}
			
			if(dia >31){
				contErrores++;
			}
			
			if((anio%4 == 0) &&  (mes== 2) && (dia >29)){
				contErrores++;
			}

			if(anio%4 !=0 && mes== 2 && dia>28){
				contErrores++;
			}

			if(contErrores==0){
				cout<< "Fecha ingresada correctamente! "<< endl;
				condicion = false;
				
			}else{
				condicion = true;
			}
                }//  fin

        }// fin del while

	string salida = "";
	if(dia<9){
		cout<< 0<< dia;
	}else{
		cout<<dia;	
	}

	
	switch(mes){
		case 1:
			salida += ", de Enero ";
			break;
		case 2:
			salida += ", de Febrero ";
			break;
		case 3:
			salida += ", de Marzo ";
			break;

	}


	cout<< salida << " del "<< anio << endl;






		

}// fin del ejercicio 3







