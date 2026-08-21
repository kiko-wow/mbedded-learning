#include <signal.h>
#include <stdio.h>

void my_singal(int num)
{
    printf("ctrl+c按下\n");
}

int main(int argc, char const *argv[])
{

    void(*p)(int);
    p=my_singal;
    signal(SIGINT,my_singal);//p
    while (1)
    {
        /* code */
    }
    
    return 0;
}
