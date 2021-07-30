#include<stdio.h>
#include<sys/mman.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>

char *count;
char str[100];
int size 100;
int main(int argc, char const *argv[])
{
    char shmd;
    shmd=shm_open("/sharedmem", O_RDWR | O_CREAT , S_IRUSR | S_IWUSR  );
    ftruncate(shmd,sizeof(int));
    count = (char *)mmap(NULL,sizeof(char), PROT_READ | PROT_WRITE ,MAP_SHARED,shmd,0);
        
        gets(str);
        for(int i=0,i<size,i++)
        {
        *count=str;
        }
    
    return 0;
}
