#include <stdio.h>
#include <string.h>

int PrintDescription(int ID)
{
  FILE * sfp,* dfp;
  int i=0;;
  char buf[100],file_path[100];
  sprintf(file_path,"desc/%03d.txt",ID);
  if((sfp=fopen(file_path,"r"))==NULL)     
  {
      printf("Source file cannot be opened\n");
      return 0;
    }
  for(i=0;!feof(sfp);i++){
    buf[i]=fgetc(sfp);
    if(buf[i]=='\n')  break;
  }
  buf[i]='\0';
  int length=strlen(buf);
    
  /* print title */   
  printf("+");
  for (int j = 0; j < length; ++j)
    printf("-");
  printf("+\n|%s|\n+", buf);      
    for (int j = 0; j < length; ++j)
  printf("-");
  printf("+\n");
  
  /* print description */   
  for(;!feof(sfp);i++)
    printf("%c",fgetc(sfp));
  printf("\b \n");

  fclose(sfp);
}
