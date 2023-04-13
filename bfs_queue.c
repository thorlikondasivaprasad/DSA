#include<stdio.h>
#include<stdlib.h>
int queue[10],adj[5][5]={{0,1,1,0,0},{1,0,0,1,0},{1,0,0,1,1},{0,1,1,0,0},{0,0,1,0,0}},n,visit[5]={0,0,0,0,0};
int f=-1,r=-1;
void enqueue(int ele)
{
    if(f==-1)
       f++;
    queue[++r]=ele;   
}
int dequeue()
{
    if(f==-1 || f>n)
        return -1;
    return queue[f++];
}
void bfs(int v)
{
    int i,t;
    if(!visit[v])
        printf("%d ",v);
    visit[v]=1;
    for(i=0;i<n;i++)
    {
        if(!visit[i] && adj[v][i])
            enqueue(i);
    }
    t=dequeue();
    if(t>=0)
       bfs(t);
}
int main()
{
    int n=5;
    bfs(0);
}













