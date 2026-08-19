#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  
    write(1, "hello,world", sizeof("hello,world"));
 
    return 0;
}