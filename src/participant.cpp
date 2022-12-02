#include "lib_grupox.h"

//constructores
participante::participante (): participant_id(0), veces_pushed(0), nombre(){}
participante::participante (unsigned int id, string nom, unsigned int pushed) : participant_id(id), nombre(nom),veces_pushed(pushed){}
		
// función ingresar datos del participante
void participante::set_participant(unsigned int id, string nom){
		participant_id = id;
		nombre = nom;
}
// función ingresar cantidad de veces que pulso
void participante::set_pushed(unsigned int cant){
		veces_pushed = cant;
}
// funciones para obtener datos del participante
unsigned int participante::get_participant_id(){
	unsigned int identificador;
	identificador = participant_id;

	return identificador;
}
unsigned int participante::get_veces_pushed(){
	unsigned int veces;
	veces = veces_pushed;

	return veces;
}
string participante::get_nombre(){
	string nom;
	nom = nombre;

	return nom;
}