#include <stdio.h>

int main(void) {

  // printf: Imprime datos en la salida estándar (normalmente la pantalla). 
  // Utiliza especificadores de formato para determinar el tipo de datos que se van a imprimir.
  int num = 25;
  printf("El número es %d\n", num);


  // putchar: Imprime un único carácter en la salida estándar.
  char c = 'A';
  putchar(c);
  putchar('\n'); // Salto de línea


  // puts: Imprime una cadena de texto seguida de un salto de línea en la salida estándar.
  char str[] = "Hola, mundo!";
  puts(str);

}
