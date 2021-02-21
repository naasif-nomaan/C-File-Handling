#include <stdio.h>
#include <stdlib.h>

int main()
{


FILE *fp;
FILE *tp=NULL;

static int num=420;

const char *text="\n Welcome \n";

fp=fopen("New.txt","r");

if(fp!=NULL){
printf("file succesfully found \n");
}else{
printf("Doesn't exixts\n");

}



fp=fopen("New.txt","a+");
fprintf(fp, "%s", text);
fprintf(fp, "%s", "\n welcome to hell \n");
fclose(fp);
//read from file
FILE *fp2;
fp=fopen("New.txt","r");
fp2=fopen("temp.txt","a+");
char buf[10000]="welcome";


    // explicitly writing "\n"
    // to the destination file
    // so to enhance readability.
    fprintf(fp2, "\n");

    // writing the contents of
    // source file to destination file.
    while (!feof(fp)) {
        fgets(buf, 10000, fp);


        /* for(int i=0;i<10000;i++){
          if(buf[i]=='\0') break;
         printf("%c",buf[i]);
        }*/

        fprintf(fp2, "%s", buf);
    }

    //rewind(fp2);

    fprintf(fp2,"%s" ,"\n this is an appened text \n");
    fclose(fopen("New.txt", "w"));



 fclose(fp2);
   fclose(fp);

   char c;
   c=-1;
   printf("%c",c);

fp=fopen("New.txt","w");
fp2=fopen("temp.txt","r");

c=fgetc(fp2);

while (c!=-1)
    {
        fputc(c, fp);
        c = fgetc(fp2);
    }




 fclose(fp2);
   fclose(fp);



    return 0;
}
