#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Canciones{
	string titulo;
	string gro;
	int tiempo;

};

struct Canciones sky;

void mostrar(queue<Canciones> cola){
    queue<Canciones> aux = cola;
    while (!aux.empty()) {
        cout<< sky.titulo<<endl;
        cout<<sky.gro<<endl;
        cout<<sky.tiempo<<endl;
        aux.pop();
    }

 }

void o(queue<Canciones> c1, queue<Canciones> c2, queue<Canciones> c3 ){
	int opcion;
	bool continuar = true;

	do{
		cout << "1. ¿Te sientes Feliz? agrega una canción!! "<<endl;
		cout << "2. ¿Te sientes desmotivado? agrega una canción!!"<<endl;
		cout << "3. ¿Hoy te levantaste con ganas de estudiar? agrega una canción!!"<<endl;
		cout << "4. Mostrar cola 1"<<endl;
		cout << "5. Mostrar cola 2"<<endl;
		cout << "6. Mostrar cola 3"<<endl;
		cout << "7. Borra la cola 1"<<endl;
		cout << "8. Borra la cola 2"<<endl;
		cout << "9. Borra la cola 3"<<endl;
		cout << "10. Salir"<<endl;
        cout << "Bienvenida a tu menu de spotisky<3" <<endl << endl;
		cin>>opcion;
		cin.ignore();
		switch(opcion){

				case 1: 
							cout<<"ME ALEGRO QUE ESTÉS FELIZ, COLOCA TU CANCIONCITA<3 "<<endl;
							cout<<"Titulo:  "<<endl;
							cin>>sky.titulo;

							cout<<"genero: "<<endl;
							cin>>sky.gro;

							cin.ignore();

							cout<<"tiempo en segundos: "<<endl;
							cin>>sky.tiempo;

							c1.push(sky);

							break;
				case 2: 
							cout<<"RECUERDA QUE ERES UNA GRAN PERSONA, LUCHA POR TUS SUEÑOS<3"<<endl;
							cout<<"Titulo: "<<endl;
							cin>>sky.titulo;

							cout<<"Genero"<<endl;
							cin>>sky.gro;

							cin.ignore();
							cout<<"Tiempo"<<endl;
							cin>>sky.tiempo;

							c2.push(sky);

							break;		

				case 3:
							cout<<"VAMOS POR ESE DIEZ<3"<<endl;
							cout<<"Titulo"<<endl;
							cin>>sky.titulo;

							cout<<"genero"<<endl;
							cin>>sky.gro;

							cin.ignore();

							cout<<"tiempo en segundos de tu canción"<<endl;
							cin>>sky.tiempo;


								c3.push(sky);

							break;

					case 4: 
								cout<<"Escogiste mostrar tu playlist:"<<endl;	
								mostrar(c1);
							break;


					case 5: 
                                cout<<"Escogiste mostrar tu playlist:"<<endl;
								mostrar(c2);
								break;

					      case 6: 
                               cout<<"Escogiste mostrar tu playlist:"<<endl;
								mostrar(c3);
						  break;	
					case 7: 
								cout<<"Se ha borrado con exito tu primer playlist"<<endl;
								c1.pop();

								break;
					case 8: 
								cout<<"Se ha borrado con exito tu segunda playlist"<<endl;

								c2.pop();

								break;
					case 9: 
								cout<<"Se ha borrado con exito tu tercera playlist "<<endl;

								c3.pop();

								break; 

					case 10: continuar = false;

								break;											
		}
	}while(continuar);
}

int main(){

	queue<Canciones> c1;
	queue<Canciones> c2;
	queue<Canciones> c3;

	o(c1,c2,c3);

	return 0;
}
