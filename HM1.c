#include<stdio.h>
#include<unistd.h>

int main () 
{
int  i ; 
pid_t p,q,d,c; 
printf("P1:%2d\n ",getppid());
   p=fork();
   if(p==0){
     printf("P2:%2d\n", getpid());
     q=fork();
     if(q==0)
         {
         printf("P3:%2d\n",getpid());
         d=fork();
         if (d==0)      {
                         printf("P4:%2d\n", getpid()); 
                        
                        }
         }
return 0;
}
  
return 0;

}
