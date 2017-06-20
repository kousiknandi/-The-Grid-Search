#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    int i,j,k,l;
    int check;
    int count=0;
    int result=-1;
    
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        int R; 
        int C; 
        scanf("%d %d",&R,&C);
        char* *G = malloc(sizeof(char*) * R);
        for(int G_i = 0; G_i < R; G_i++)
        {
           G[G_i] = (char *)malloc(10240 * sizeof(char));
           scanf("%s",G[G_i]);
        }
        
        int r; 
        int c; 
        scanf("%d %d",&r,&c);
        char* *P = malloc(sizeof(char*) * r);
        for(int P_i = 0; P_i < r; P_i++)
        {
           P[P_i] = (char *)malloc(10240 * sizeof(char));
           scanf("%s",P[P_i]);
        }
        
        
        
        check=0;
        for(i=0;i<=(R-r);i++)
            for(j=0;j<=(C-c);j++)
            {
                
                  
                
                    if(G[i][j]==P[0][0])
                    {
                         //printf("\n\n\n");
                         //printf("G-%c P%c i=%d j=%d\n",G[i][j],P[0][0],i,j);
                          count=0;
                          for(k=0;k<r;k++)
                            for(l=0;l<c;l++)
                            {
                                  if(G[i+k][j+l]==P[k][l])
                                  {
                                      //printf("G-%c i+k=%d j+l=%d P-%c k=%d l=%d\n",G[i+k][j+l],(i+k),(j+l),P[k][l],k,l);
                                      count++;
                                      continue;
                                  }
                                  else
                                  {
                                      break;
                                  }

                            }
                    }

                                        
                    if(count==(r*c))
                    {
                        check=1;
                        //break;
                    }
            }
        
        if(check==0)
            printf("NO\n");
        else
            printf("YES\n");
           
        
            
    }
    return 0;
}
