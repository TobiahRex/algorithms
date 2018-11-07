#include <stdio.h>
#include <stdlib.h>

using namespace std;

int myatoi(char*c);

int main() {
  int i;
  char buffer[256];
  printf ("Enter a number: ");
  fgets (buffer, 256, stdin);
  i = myatoi(buffer);
  printf("The value enetered is %d.  It's double is %d. \n", i, i * 2);

}

int myatoi(char * c) {
  int i = 0, index = 0;
  while ((0x30 <= *c) && (*c <= 0x39)) {
    int j = *c - 0x30;
    i =  i*10 + j;
    c++;
    index ++;
  }
}
