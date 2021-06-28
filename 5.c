#include<stdio.h>
#include<windows.h>
#include<setjmp.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif
jmp_buf buf;

int main()
{
    system("Color 0A");
    int i;
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
    if(setjmp(buf))
        levitation();
    else
    {
        for(i=1;i<6;i++)
        {
            if(i==4)
            {
                i=0;
                printf("Here we go again\nWe can do this whole day\n\n");
            }
            else
                loop(i);
        }
    }
}
int loop(int ch)
{
    switch(ch)
    {
    case 1:
        dimenssion1();
        break;
    case 2:
        dimenssion2();
        break;
    case 3:
        dimenssion3();
        break;
    case 4:
        dimenssion4();
        break;
    }
}

int dimenssion1()
{
    char arr[]="Doctor Strange finds Eye of Agomoto pendant in the library of Kamar-Taj\n";
    int i=0;
    while(arr[i]!=10)
    {
        sleep(0.03);
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
}

int dimenssion2()
{
    char arr[]="He uses the stone to trap the Dormammu in a time loop\n";
    int i=0;
    while(arr[i]!=10)
    {
        sleep(0.03);
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
}

int dimenssion3()
{
    char arr[]="So Dormammu can not destroy the Earth\n";
    int i=0;
    while(arr[i]!=10)
    {
        sleep(0.03);
        printf("%c",arr[i]);
        i++;
    }
    printf("\n\n\n");
}

int dimenssion4()
{
    printf("\n\n");
    longjmp(buf,1);
}

int levitation()
{
    system("Color 70");
    system("cls");
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
    printf("\n\x43\x6F\x6E\x67\x72\x61\x74\x73 ");
    printf("you did it \x1 \x3 \nYou saved The Time ");
    printf("Stone from Thanos\n \x47\x69\x74\x48\x75\x62 \x49\x44: jecrc kamar taj\n");
}
