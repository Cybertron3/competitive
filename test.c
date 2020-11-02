    #include <stdio.h>
    #include <stdlib.h>
     
    int main()
    {
        int x1,x2,x3,x4,c=0,e=0,k=0,s;
        scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
        if (x1 + x2 > x3)
           c++;
        if (x3 + x2 > x1)
           c++;
        if (x1 + x3 > x2)
           c++;
        if(c==3)
        {
            printf("TRIANGLE");
            k=-1;
        }
        if(c==2)
        {
         if (x1 + x2 == x3)
           e++;
         if (x3 + x2 == x1)
           e++;
         if (x1 + x3 == x2)
           e++;
         if(e==1)
            {
                s=-1;
            }
        }c=0;
        if (k!=-1)
        {
            if (x4 + x2 > x3)
           c++;
        if (x3 + x2 > x4)
           c++;
        if (x4 + x3 > x2)
           c++;
        if(c==3)
        {
            printf("TRIANGLE");
            k=-1;
        }
        if(c==2)
        {
         if (x4 + x2 == x3)
           e++;
         if (x3 + x2 == x4)
           e++;
         if (x4 + x3 == x2)
           e++;
        if(e==1)
            {
                s=-1;
            }
        }
        }
        c=0;
        if (k!=-1)
        {
            if (x4 + x1 > x3)
           c++;
        if (x3 + x1 > x4)
           c++;
        if (x4 + x3 > x1)
           c++;
        if(c==3)
        {
            printf("TRIANGLE");
            k=-1;
        }
        if(c==2)
        {
         if (x4 + x1 == x3)
           e++;
         if (x3 + x1 == x4)
           e++;
         if (x4 + x3 == x1)
           e++;
        if(e==1)
            {
                s=-1;
            }
        }
        }
        c=0;
        if (k!=-1)
        {
        if (x4 + x2 > x1)
           c++;
        if (x1 + x2 > x4)
           c++;
        if (x4 + x1 > x2)
           c++;
        if(c==3)
        {
            printf("TRIANGLE");
            k=-1;
        }
        if(c==2)
        {
         if (x4 + x2 == x1)
           e++;
         if (x1 + x2 == x4)
           e++;
         if (x4 + x1 == x2)
           e++;
        if(e==1)
            {
              s=-1;
            }
        }
        }
     if((k!=-1)&&(s==-1))
        printf("SEGMENT");
     if ((k!=-1)&&(s!=-1))
            printf("IMPOSIBLE");
    return 0;
    }