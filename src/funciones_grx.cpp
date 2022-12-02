#include "lib_grupox.h"

void pedir_datos(participante *participantes, int i){

    unsigned int id;
    string nombre;

    std::cout << endl << "Participante " << i+1 << endl;
    std::cout << "Ingrese el nombre del participante: ";
    std::cin >> nombre;
    std::cout << "Ingrese el ID del participante: ";
    std::cin >> id;

    participantes[i].set_participant(id,nombre);

}

void juego(int *serial_port, int i, int tp, int vtl, int *veces){
    int num_bytes, read_buf;

    write(*serial_port,"s",sizeof(char));
    sleep(tp);
    write(*serial_port,"r",sizeof(char));
    sleep(vtl);
    write(*serial_port,"S",sizeof(char));
    num_bytes = read(*serial_port, &read_buf,sizeof(read_buf));
    veces[i]=read_buf;

}

void ingresar_veces(participante *participantes,int *veces, int i){
        participantes[i].set_pushed(veces[i]);
}

void imprimir_resultados(participante *participantes, int i){
        std::cout << endl << participantes[i].get_nombre() << endl << "Con identificación: "<< participantes[i].get_participant_id()<<endl;
        printf("Pulso: %d veces\n", (char)participantes[i].get_veces_pushed());
}
