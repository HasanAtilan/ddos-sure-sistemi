#include <stdio.h>
 
int main(int argc, char **argv[]){
 
char basla[255];
sprintf(basla,"screen -AmdS saldir ./mrhasan %s %s",argv[1],argv[1]);
system(basla);
 
char bitir[255];
sprintf(bitir,"sleep %s && screen 0 saldir x quit %s %s",argv[3]);
system(bitir);
 
}
