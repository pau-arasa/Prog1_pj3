#include <stdio.h>
#include <stdlib.h>

#define INVALID_MENU_OPTION -1
#define MAX_FILENAME 20

int getMenuOption(){
    int option;

    printf("Enter option: ");
    scanf("%d", &option);

    switch(option){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            break;
        default:
            option = INVALID_MENU_OPTION;
    }
    return option;
}

void mainMenu(){
    printf("Welcome to Spam Detector!\n\n");
    printf("1) Load training data\t3) Calculate model metrics\t5) Close\n2)Filter by category\t4) Manual prediction\n");



}

void getFilename(char filename[]){
    printf("Data filename: ");
    scanf("%s", filename);
}







int main(){
    char filename[MAX_FILENAME];
    FILE *fp = NULL;
    
    getFilename(filename);

    fp = fopen(filename, "r");

    if (fp == NULL){
        printf("ERROR:  Could not open %s", filename);
    } else {
        mainMenu();
    }

    



    return 0;
}