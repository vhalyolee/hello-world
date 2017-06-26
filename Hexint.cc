#include <stdio.h>
#include <stdlib.h>

int main ()
{

//OR if (0) {
std::stringstream stream;
stream << std::hex << your_int;
std::string result( stream.str() );
}

  int i;
  char buffer [33];
  printf ("Enter a number: ");
  scanf ("%d",&i);
  itoa (i,buffer,16);
  printf ("hexadecimal: %s\n",buffer);
  return 0;
}
