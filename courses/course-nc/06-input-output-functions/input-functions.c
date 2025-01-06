#include <stdio.h>

int main(void) {
  
  // scanf: Lee datos de la entrada estándar (normalmente el teclado). 
  // Utiliza especificadores de formato para determinar el tipo de datos que se van a leer.
  
  int num;
  printf("Introduce un número: ");
  scanf("%d", &num);


  // getchar: Lee un único carácter de la entrada estándar.
  char c;
  printf("Introduce un carácter: ");
  c = getchar();

  
  // gets: Lee una línea completa de texto de la entrada estándar. 
  // (Nota: gets es insegura y está obsoleta; se recomienda usar fgets en su lugar).
  char str[100];
  printf("Introduce una cadena: ");
  gets(str);  // No recomendado, inseguro.



  return 0;

}
