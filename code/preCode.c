#include <stdio.h>
#include <stdlib.h>
#include "preCode.h"

/// Fun��es que transformam os caracteres em n�meros e vice-versa
// Recebe uma letra e a transforma no seu n�mero correspondente, j� o escreve no arquivo tempor�rio preCoded.txt
void preCode (FILE *preCoded, char *letter, int *count) {
    char temp;
    temp = letter[0];

    if(temp == 'a') {
        fprintf(preCoded, "%d", 10);
        *count += 2;
    } else if(temp == 'b') {
        fprintf(preCoded, "%d", 11);
        *count += 2;
    } else if(temp == 'c') {
        fprintf(preCoded, "%d", 12);
        *count += 2;
    } else if(temp == 'd') {
        fprintf(preCoded, "%d", 13);
        *count += 2;
    } else if(temp == 'e') {
        fprintf(preCoded, "%d", 14);
        *count += 2;
    } else if(temp == 'f') {
        fprintf(preCoded, "%d", 15);
        *count += 2;
    } else if(temp == 'g') {
        fprintf(preCoded, "%d", 16);
        *count += 2;
    } else if(temp == 'h') {
        fprintf(preCoded, "%d", 17);
        *count += 2;
    } else if(temp == 'i') {
        fprintf(preCoded, "%d", 18);
        *count += 2;
    } else if(temp == 'j') {
        fprintf(preCoded, "%d", 19);
        *count += 2;
    } else if(temp == 'k') {
        fprintf(preCoded, "%d", 20);
        *count += 2;
    } else if(temp == 'l') {
        fprintf(preCoded, "%d", 21);
        *count += 2;
    } else if(temp == 'm') {
        fprintf(preCoded, "%d", 22);
        *count += 2;
    } else if(temp == 'n') {
        fprintf(preCoded, "%d", 23);
        *count += 2;
    } else if(temp == 'o') {
        fprintf(preCoded, "%d", 24);
        *count += 2;
    } else if(temp == 'p') {
        fprintf(preCoded, "%d", 25);
        *count += 2;
    } else if(temp == 'q') {
        fprintf(preCoded, "%d", 26);
        *count += 2;
    } else if(temp == 'r') {
        fprintf(preCoded, "%d", 27);
        *count += 2;
    } else if(temp == 's') {
        fprintf(preCoded, "%d", 28);
        *count += 2;
    } else if(temp == 't') {
        fprintf(preCoded, "%d", 29);
        *count += 2;
    } else if(temp == 'u') {
        fprintf(preCoded, "%d", 30);
        *count += 2;
    } else if(temp == 'v') {
        fprintf(preCoded, "%d", 31);
        *count += 2;
    } else if(temp == 'w') {
        fprintf(preCoded, "%d", 32);
        *count += 2;
    } else if(temp == 'x') {
        fprintf(preCoded, "%d", 33);
        *count += 2;
    } else if(temp == 'y') {
        fprintf(preCoded, "%d", 34);
        *count += 2;
    } else if(temp == 'z') {
        fprintf(preCoded, "%d", 35);
        *count += 2;
    } else if(temp == 'A') {
        fprintf(preCoded, "%d", 36);
        *count += 2;
    } else if(temp == 'B') {
        fprintf(preCoded, "%d", 37);
        *count += 2;
    } else if(temp == 'C') {
        fprintf(preCoded, "%d", 38);
        *count += 2;
    } else if(temp == 'D') {
        fprintf(preCoded, "%d", 39);
        *count += 2;
    } else if(temp == 'E') {
        fprintf(preCoded, "%d", 40);
        *count += 2;
    } else if(temp == 'F') {
        fprintf(preCoded, "%d", 41);
        *count += 2;
    } else if(temp == 'G') {
        fprintf(preCoded, "%d", 42);
        *count += 2;
    } else if(temp == 'H') {
        fprintf(preCoded, "%d", 43);
        *count += 2;
    } else if(temp == 'I') {
        fprintf(preCoded, "%d", 44);
        *count += 2;
    } else if(temp == 'J') {
        fprintf(preCoded, "%d", 45);
        *count += 2;
    } else if(temp == 'K') {
        fprintf(preCoded, "%d", 46);
        *count += 2;
    } else if(temp == 'L') {
        fprintf(preCoded, "%d", 47);
        *count += 2;
    } else if(temp == 'M') {
        fprintf(preCoded, "%d", 48);
        *count += 2;
    } else if(temp == 'N') {
        fprintf(preCoded, "%d", 49);
        *count += 2;
    } else if(temp == 'O') {
        fprintf(preCoded, "%d", 50);
        *count += 2;
    } else if(temp == 'P') {
        fprintf(preCoded, "%d", 51);
        *count += 2;
    } else if(temp == 'Q') {
        fprintf(preCoded, "%d", 52);
        *count += 2;
    } else if(temp == 'R') {
        fprintf(preCoded, "%d", 53);
        *count += 2;
    } else if(temp == 'S') {
        fprintf(preCoded, "%d", 54);
        *count += 2;
    } else if(temp == 'T') {
        fprintf(preCoded, "%d", 55);
        *count += 2;
    } else if(temp == 'U') {
        fprintf(preCoded, "%d", 56);
        *count += 2;
    } else if(temp == 'V') {
        fprintf(preCoded, "%d", 57);
        *count += 2;
    } else if(temp == 'W') {
        fprintf(preCoded, "%d", 58);
        *count += 2;
    } else if(temp == 'X') {
        fprintf(preCoded, "%d", 59);
        *count += 2;
    } else if(temp == 'Y') {
        fprintf(preCoded, "%d", 60);
        *count += 2;
    } else if(temp == 'Z') {
        fprintf(preCoded, "%d", 61);
        *count += 2;
    } else if(temp == '-') {
        fprintf(preCoded, "%d", 62);
        *count += 2;
    } else if(temp == '_') {
        fprintf(preCoded, "%d", 63);
        *count += 2;
    } else if(temp == '0') {
        fprintf(preCoded, "%d", 64);
        *count += 2;
    } else if(temp == '1') {
        fprintf(preCoded, "%d", 65);
        *count += 2;
    } else if(temp == '2') {
        fprintf(preCoded, "%d", 66);
        *count += 2;
    } else if(temp == '3') {
        fprintf(preCoded, "%d", 67);
        *count += 2;
    } else if(temp == '4') {
        fprintf(preCoded, "%d", 68);
        *count += 2;
    } else if(temp == '5') {
        fprintf(preCoded, "%d", 69);
        *count += 2;
    } else if(temp == '6') {
        fprintf(preCoded, "%d", 70);
        *count += 2;
    } else if(temp == '7') {
        fprintf(preCoded, "%d", 71);
        *count += 2;
    } else if(temp == '8') {
        fprintf(preCoded, "%d", 72);
        *count += 2;
    } else if(temp == '9') {
        fprintf(preCoded, "%d", 73);
        *count += 2;
    } else if(temp == ' ') {
        fprintf(preCoded, "%d", 74);
        *count += 2;
    }
}

// Recebe um n�mero com 2 d�gitos e o transforma em seu respectivo caracter, j� escreve no arquivo decode.txt
char preDecode (int number) {
    int temp;
    temp = number;
    char letter;

    if(temp == 10){
        letter = 'a';
        return letter;
    } else if(temp == 11){
        letter = 'b';
        return letter;
    } else if(temp == 12){
        letter = 'c';
        return letter;
    } else if(temp == 13){
        letter = 'd';
        return letter;
    } else if(temp == 14){
        letter = 'e';
        return letter;
    } else if(temp == 15){
        letter = 'f';
        return letter;
    } else if(temp == 16){
        letter = 'g';
        return letter;
    } else if(temp == 17){
        letter = 'h';
        return letter;
    } else if(temp == 18){
        letter = 'i';
        return letter;
    } else if(temp == 19){
        letter = 'j';
        return letter;
    } else if(temp == 20){
        letter = 'k';
        return letter;
    } else if(temp == 21){
        letter = 'l';
        return letter;
    } else if(temp == 22){
        letter = 'm';
        return letter;
    } else if(temp == 23){
        letter = 'n';
        return letter;
    } else if(temp == 24){
        letter = 'o';
        return letter;
    } else if(temp == 25){
        letter = 'p';
        return letter;
    } else if(temp == 26){
        letter = 'q';
        return letter;
    } else if(temp == 27){
        letter = 'r';
        return letter;
    } else if(temp == 28){
        letter = 's';
        return letter;
    } else if(temp == 29){
        letter = 't';
        return letter;
    } else if(temp == 30){
        letter = 'u';
        return letter;
    } else if(temp == 31){
        letter = 'v';
        return letter;
    } else if(temp == 32){
        letter = 'w';
        return letter;
    } else if(temp == 33){
        letter = 'x';
        return letter;
    } else if(temp == 34){
        letter = 'y';
        return letter;
    } else if(temp == 35){
        letter = 'z';
        return letter;
    } else if(temp == 36){
        letter = 'A';
        return letter;
    } else if(temp == 37){
        letter = 'B';
        return letter;
    } else if(temp == 38){
        letter = 'C';
        return letter;
    } else if(temp == 39){
        letter = 'D';
        return letter;
    } else if(temp == 40){
        letter = 'E';
        return letter;
    } else if(temp == 41){
        letter = 'F';
        return letter;
    } else if(temp == 42){
        letter = 'G';
        return letter;
    } else if(temp == 43){
        letter = 'H';
        return letter;
    } else if(temp == 44){
        letter = 'I';
        return letter;
    } else if(temp == 45){
        letter = 'J';
        return letter;
    } else if(temp == 46){
        letter = 'K';
        return letter;
    } else if(temp == 47){
        letter = 'L';
        return letter;
    } else if(temp == 48){
        letter = 'M';
        return letter;
    } else if(temp == 49){
        letter = 'N';
        return letter;
    } else if(temp == 50){
        letter = 'O';
        return letter;
    } else if(temp == 51){
        letter = 'P';
        return letter;
    } else if(temp == 52){
        letter = 'Q';
        return letter;
    } else if(temp == 53){
        letter = 'R';
        return letter;
    } else if(temp == 54){
        letter = 'S';
        return letter;
    } else if(temp == 55){
        letter = 'T';
        return letter;
    } else if(temp == 56){
        letter = 'U';
        return letter;
    } else if(temp == 57){
        letter = 'V';
        return letter;
    } else if(temp == 58){
        letter = 'W';
        return letter;
    } else if(temp == 59){
        letter = 'X';
        return letter;
    } else if(temp == 60){
        letter = 'Y';
        return letter;
    } else if(temp == 61){
        letter = 'Z';
        return letter;
    } else if(temp == 62){
        letter = '-';
        return letter;
    } else if(temp == 63){
        letter = '_';
        return letter;
    } else if(temp == 64){
        letter = '0';
        return letter;
    } else if(temp == 65){
        letter = '1';
        return letter;
    } else if(temp == 66){
        letter = '2';
        return letter;
    } else if(temp == 67){
        letter = '3';
        return letter;
    } else if(temp == 68){
        letter = '4';
        return letter;
    } else if(temp == 69){
        letter = '5';
        return letter;
    } else if(temp == 70){
        letter = '6';
        return letter;
    } else if(temp == 71){
        letter = '7';
        return letter;
    } else if(temp == 72){
        letter = '8';
        return letter;
    } else if(temp == 73){
        letter = '9';
        return letter;
    } else if(temp == 74){
        letter = ' ';
        return letter;
    }

    return ' ';
}
