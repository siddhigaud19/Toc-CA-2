#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{

 int initial_state=1,len,current_state=1;
 char a,b,str[10];
 
 printf("Enter string : ");
 scanf("%s",&str);
 len=strlen(str);
 if(len==3){         /*here d length of string is checked*/
 {
  if(initial_state==1 && str[0]=='a'){         /*to accept first element a*/
  current_state=2;
	}
  else {
  printf("String is Rejected.");
  exit(0);}
 }
 {
  if(current_state==2 && str[1]=='b'){      /*to accept second element b*/
  current_state=3;
  }
  else     {
  printf("String is Rejected.");
  }
 }
  {
   if(current_state==3 && str[2]=='b'){    /*to accept third element b*/
   current_state=4;
   printf(" String is accepted");}
   else    {
   printf("String is rejected.");
   }
  }
 }
 else{
  printf("Enter correct string." );   /*if length & character of string is not correct*/

  }
  
}