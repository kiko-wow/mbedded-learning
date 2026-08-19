#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={[2]=20,[3]=30};
    int capacity= sizeof(arr)/sizeof(arr[0]);
    for ( int i  = 0; i < capacity; i++)
    {
        /* code */
    }
    
    return 0;
}
