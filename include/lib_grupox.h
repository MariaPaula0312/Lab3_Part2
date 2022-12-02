#ifndef LIB_GRX_H
#define LIB_GRX_H

	#include <iostream>
	#include <stdio.h>
	#include <string>
	#include <stdlib.h>
	#include <unistd.h>

	using namespace std;

	#define MAX 10

	class participante{
		private:
			unsigned int participant_id;
			std::string nombre;
			unsigned int veces_pushed;
		public:
			participante ();
			participante (unsigned int id, string nom, unsigned int pushed);

			void set_participant(unsigned int, string);
			void set_pushed(unsigned int);
			unsigned int get_participant_id();
			unsigned int get_veces_pushed();
			string get_nombre();
	};

	void pedir_datos(participante *,int);
	void juego(int *, int, int, int,int*);
	void ingresar_veces(participante *,int *,int);
	void imprimir_resultados(participante *, int);

#endif
