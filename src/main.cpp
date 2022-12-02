#include "tty_lib2.h"
#include "lib_grupox.h"

int main(int argc, char *argv[]){

    participante participantes[MAX];
    struct termios tty;
    int serial_port, read_buf, num_per;
    int cant_per,i=0, veces[MAX];
    int tp = atoi(argv[1]);
    int vtl= atoi(argv[2]);

    config_tty ("/dev/ttyS0", &tty, B9600, &serial_port);
    sleep(2);

    write(serial_port,"l",sizeof(char));

    std::cout << "Ingrese el número de participantes: ";
    std::cin >> num_per;

    for (i=0;i<num_per;i++){
        pedir_datos(&participantes[0],i);
        juego(&serial_port, i, tp, vtl, &veces[0]);
        ingresar_veces(&participantes[0],&veces[0],i);
    }

    for (i=0;i<num_per;i++){
        imprimir_resultados(&participantes[0],i);
    }

    close(serial_port);
}

