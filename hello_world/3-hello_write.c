/*You have to use the kernel function write
Your program should return 0
Your program should compile without warning when using the -Wall option*/

#include <unistd.h>
int main(void)
{
  write(1, "Hello, C\n", 10);
    return(0);
}
