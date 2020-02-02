#include<stdio.h>
#include<time.h>
void main()
{ int a[1000];
int i,j,temp,sz=1000;
clock_t t2,t1;
t1 = clock(); 
for(i=0;i<500;i++)
{ a[i]=1000-i;
}
for(i=500;i<1000;i++)
{ a[i]=i;
}


 t1 = clock() - t1;
double time_taken1 = ((double)t1)/CLOCKS_PER_SEC; // in seconds 
  printf("fun() took %f seconds to execute \n", time_taken1);


    t2 = clock(); 
     for(i=0;i<sz-1;i++)
    { for(j=0;j<sz-1-i;j++)
       { if(a[j+1]<a[j])
          { temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
        }
    }
    t2 = clock() - t2; 
    double time_taken2 = ((double)t2)/CLOCKS_PER_SEC; // in seconds 
  
    printf("fun() took %f seconds to execute \n", time_taken2); 

   
}
