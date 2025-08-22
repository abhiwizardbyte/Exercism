#include "hello_world.h"
#include <stdio.h>
// Define the function itself.
const char *hello(void)
{
   return "Hello, World!\n";
}
int main()
{
   printf("%s", hello());
   return 0;
}