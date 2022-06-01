/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   
  int i,j,n;
  scanf("%d",&n);
  
int a[2*n-1][2*n-1];

    

for(i=0;i<n;i++)
{
    for(j=i;j<2*n-1-i;j++)
    {
        a[i][j]=n-i;                    
        a[2*n-2-i][j]=n-i;       
        a[j][i]=n-i;                    
                    a[j][2*n-2-i]=n-i;       
    }
}



for(i=0;i<2*n-1;i++)
{
    for(j=0;j<2*n-1;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
    return 0;

}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   
    int n ,i,j;
    scanf("%d", &n);
  //int size=2 * n -1;
  int a[2*n-1][2*n-1];
   for(i=0;i<=n;i++)
   { 
        for(j=i;j<=2*n-1-i;j++)
        { 
            a[i][j]=n-i;//top most
            a[2*n-2-i][j]=n-i;//bottom
            a[j][i]=n-i;//left
            a[j][2*n-2-i]=n-i;//right
            
        }

   }

   for(i=0;i<2*n-1;i++)
{
    for(j=0;j<2*n-1;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}  
    return 0;


}