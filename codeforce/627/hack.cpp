    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t>0)
        {
            int n;
            scanf("%d",&n);
            int values[n];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&values[i]);
            }
            int max=values[0];
            for(int i=0;i<n;i++)
            {
                if(values[i]>max)
                max=values[i];
            }
            for(int i=0;i<n;i++)
            {
                while(values[i]<max)
                {
                    values[i] = values[i]+2;
                }
            }
            int count=0;
            for(int i=0;i<n-1;i++)
            {
               if(values[i]==values[i+1]) 
               count++;
            }
            if(count==n-1)
            printf("YES\n");
            else
            printf("NO\n");
            t--;
        }
     
        return 0;
    }