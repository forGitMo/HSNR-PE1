#include <stdio.h>
int readFile(char *filepath){
    FILE *fptr;
    char fileString[100];
    int matrikelnummer[255];
    double mathGrades[255];
    double physicsGrades[255];
    double informaticsGrades[255];
    int count = 0;

    fptr = fopen(filepath, "r");

    if (fptr == NULL) {
        printf("Fehler beim Öffnen der Datei.");
        return 0;
    }


    while (fscanf(fptr, "%d %lf %lf %lf", &matrikelnummer[count], &mathGrades[count], &physicsGrades[count], &informaticsGrades[count]) == 4) {
        printf("matnr: %d, math: %0.1lf, physic: %0.1lf, informatik: %0.1lf\n", matrikelnummer[count], mathGrades[count], physicsGrades[count], informaticsGrades[count]);
        count++;
    }


    fclose(fptr);
    printf("Anzahl der eingelesenen Datensätze: %d\n", count);
    return 1;
}




int main() {
    char filepath[] = "../file.txt";
    readFile(filepath);
    return 0;
}
