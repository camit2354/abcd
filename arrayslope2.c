#include<stdio.h>
void main()
{ int a[25],i,sz,m=0,n=0,start=0,end=0;
  printf("enter size..\n");
  scanf("%d",&sz);
   printf("enter array elements..\n");
for(i=0;i<sz;i++)
{ scanf("%d",&a[i]);
}

for(i=0;i<sz-1;i++)
{ if(a[i+1]<=a[i])
   n=i+1;
  else
   {  if(a[start]-a[end]<=a[m]-a[n])
         { start=m;
            end=n;
          }
      m=i+1;n=i;
    }
}
printf("slope..\n");
for(i=start;i<=end;i++)
{ printf("%d",a[i]);
}

}

