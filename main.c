#include <stdio.h>
#include <windows.h> 

int main(){

    int minute = 20;
    int min_in_sec = minute * 60;
    int min_left;
    int sec_left;

    for(int start = 3;start > 0; start--){
        printf("The countdown will start in %02d", start);
        sleep(1);
        system("cls");
    }

    for(;min_in_sec > 0; min_in_sec--){
        min_left = min_in_sec / 60;
        sec_left = min_in_sec % 60;
        printf("%02d:%02d", min_left, sec_left);
        sleep(1);
        system("cls");
    }

    for(int start = 5;start > 0; start--){
        printf("The program will lock your device in %02d", start);
        sleep(1);
        system("rundll32.exe user32.dll,LockWorkStation");
    }

    return 0;
}