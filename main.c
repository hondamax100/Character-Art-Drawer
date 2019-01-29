#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main(void){

  int i; int j; int k; int l;                                                   //
  char * rows[30][30];                                                          //
  for(i=0;i<30;i++){                                                            //
    for(j=0;j<30;j++){                                                          //
      rows[i][j]=" - ";}}                                                       //

  //draw rectangle
  while (0==0){

    printf("\n");
    for(k=0;k<30;k++){
      for(l=0;l<30;l++){
        printf("%s", rows[k][l]);
      }
      printf("\n");
    }
    printf("\n");

    int option;
    printf("What do do? ");
    scanf("%d", &option);
    if (option==1){

      int len; int wid;
      int n=0; int m=1;
      int x; int y;

      printf("Coordinates: [x,y]");
      scanf("%d%d", &x, &y);

      printf("Size: [len/wid]");
      scanf("%d%d", &len, &wid);

      y=y-1;
      while (n<len) {
        while (m<(wid+1)  ) {
          rows[x+n][y+m]=" # ";
          m++;
        }
        n++;
        m=1;
      }
    }
  }



  return 0;
};
