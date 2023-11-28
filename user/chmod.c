#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int main(int argc, char *argv[]) {

    const char *file = argv[1];
    int mode = atoi(argv[2]);

      // Crear un archivo de prueba
    int fd = open(file, O_CREATE);

    // Cambiar el modo del archivo a lectura y escritura
    int ret = chmod(file, mode); // Permisos: lectura (1) + escritura (2) = 3
    if (ret < 0) {
        printf("Error al cambiar el modo del archivo: %d\n", ret);
        exit(1);
    }


    // Abrir el archivo en modo lectura
    fd = open(file, O_WRONLY);
    if (fd < 0) {
        printf("Error al abrir el archivo: %d\n", fd);
        exit(1);
    }

    printf("El archivo se abrió correctamente en modo lectura\n");

    // Cerrar el archivo
    close(fd);

    exit(0);
}
