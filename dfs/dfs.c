#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <unistd.h>

// #define N 10
int n;
int a[10];
bool vis[10];



void dfs(int k)
{
    if  (k > n)
    {   for (int i = 1; i <= n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else 
    {   for (int i = 1; i <= n; i++)
        if  (!vis[i])
        {
            a[k] = i;
            vis[i] = true;
            dfs(k + 1);
            vis[i] = false;
            a[k] = 0;
        }
    }
}

int main()
{
    scanf("%d", &n);

    dfs(1);

    return 0;
}