#include <stdio.h>
#include <unistd.h>

int lantai, before;
int before = 1;

void lift(){
    ulang:
    printf("Sekarang ada di lantai : %d\n", before);
    printf("Silahkan masukan lantai tujuan : ");
    scanf("%d", &lantai);
    while (lantai > before){
        printf("Lantai %d\n", before);
        sleep(1);
        before++;
    }
    printf("Sekarang ada di lantai : %d\n", before);
    printf("Silahkan masukan lantai tujuan : ");
    scanf("%d", &lantai);
    while (lantai < before){
        printf("Lantai %d\n", before);
        sleep(1);
        before--;
    }
    goto ulang;
}

int main(){
    lift();
}