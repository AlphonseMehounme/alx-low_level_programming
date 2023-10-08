#include <stdio.h>

int main(){
   char ch;
   FILE *fp;
   fp=fopen("std1.txt","w");
   printf("enter the text then press cntrl Z:");
   while((ch = getchar())!='\n')
   {
	   putc(ch,fp);
   }
   fclose(fp);
   fp=fopen("std1.txt","r");
   printf("text on the file:");
   while ((ch=getc(fp))!=EOF)
   {
	   putchar(ch);
   }
   fclose(fp);
   return 0;
}
