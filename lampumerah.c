#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int merah, i;

void lampumerah(){
    int hijau = 2;
    merah = hijau * 4;

    while (merah > 0){
        printf("Lampu merah!\n");
        printf("%d\n", merah);
        sleep(1);
        merah--;
        system("clear");
    }   
    printf("Lampu Kuning!\n");
    sleep(1);
    system("clear");
    while (hijau > 0){
        printf("Lampu Hijau!\n");
        printf("%d\n", hijau);
        sleep(1);
        hijau--;
        system("clear");
    }
}

int main(){
    i = 1;
    while (i > 0){
        lampumerah();
        i++;
        printf("\nLampu merah ke-%d\n\n", i);
        sleep(1);
        system("clear");
    }
    return 0;
}
