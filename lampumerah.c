#include <stdio.h>
#include <unistd.h>

int merah, i;

void lampumerah(){
    int hijau = 2;
    merah = hijau * 4;

    printf("Lampu merah!\n");
    while (merah > 0){
        printf("%d\n", merah);
        sleep(1);
        merah--;
    }   
    printf("Lampu Kuning!\n");
    sleep(1);
    printf("Lampu Hijau!\n");
    while (hijau > 0){
        printf("%d\n", hijau);
        sleep(1);
        hijau--;
    }
}

int main(){
    i = 1;
    while (i > 0){
        lampumerah();
        i++;
        printf("\nLampu merah ke-%d\n\n", i);
    }
    return 0;
}