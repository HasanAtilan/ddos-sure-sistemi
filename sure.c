#include <stdio.h>
 
int main(int argc, char **argv[]){
 
char aktifet[255];
sprintf(aktifet,"screen -AmdS saldir ./mrhasan %s %s",argv[1],argv[1]);
system(aktifet);
 
char sonlandir[255];
sprintf(sonlandir,"sleep %s && screen 0 saldir x quit %s %s",argv[3]);
system(sonlandir);
 
}
