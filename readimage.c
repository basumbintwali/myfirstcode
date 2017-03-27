#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
  int i;
// wwwwwaiasasa

  int j;
  int kx;


  int ky;

/*matrix*/
/*Use double , you have floating numbers not int*/

int  matr[1140][499];

  FILE *filer;
  filer=fopen("testr.txt", "r");
  /*FILE *fileg;
  fileg=fopen("testg.txt", "r");
  FILE *fileb;
  fileb=fopen("testb.txt", "r");
 */
for(i = 0; i < 1140; i++)
  {
      for(j = 0; j < 499; j++)
      {

       if (!fscanf(filer, "%d", &matr[i][j]))
           break;
     


      }

  }



/*for(i = 0; i < 1140; i++)
  {
      for(j = 0; j < 499; j++)
      {

      if (!fscanf(fileg, "%lf", &matg[i][j]))
           break;
  


      }

  }




for(i = 0; i < 1140; i++)
  {
      for(j = 0; j < 499; j++)
      {

  
     if (!fscanf(fileb, "%lf", &matb[i][j]))
           break;


      }

  }
*/
  fclose(filer);
  //fclose(fileg);
  //fclose(fileb);
       
int lx= 1140-2;
int ly= 499-2;
int Kernel[3][3];

Kernel[0][0]=-1;
Kernel[0][1]=-1 ;
Kernel[0][2]=-1 ;
Kernel[1][0]=-1 ;
Kernel[1][1]= 8 ;
Kernel[1][2]= -1;
Kernel[2][0]= -1;
Kernel[2][1]= -1;
Kernel[2][2]= -1;

int G[lx][ly];
int vx= 0 ;


for(i = 0; i < lx; i++)
  {
      for(j = 0; j < ly; j++)
      { 
         vx=0 ;

          for(kx = 0; kx < 3; kx++)
             {

             for(ky = 0; ky < 3; ky++)
               {
                vx=vx +Kernel[kx][ky]*(int)matr[i+kx][j+ky] ;
                G[i][j]= vx ;
                 }
              }

         }

   }

  printf("%d\n", (int) G[3][480] ); 
  
    }
