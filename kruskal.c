#include<stdio.h>
#include<conio.h>

int p[20],min_cost=0,edge=1;
int find(int);
void main(){

int cost[20][20],i,j,n,a,b,u,v,min;

printf("enter the number of vertices: ");
scanf("%d",&n);

printf("Enter the cost matrix:\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
scanf("%d",&cost[i][j]);
  }
}

for(i=1;i<=n;i++){

p[i]=0;

}

while(edge<n){
min=999;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(cost[i][j]<min && cost[i][j]!=0){
        min=cost[i][j];
        a=u=i;
        b=v=j;
    }
}}
u=find(u);
v=find(v);

if(u!=v){
    printf("\nEdge %d -(%d,%d)->%d",edge,a,b,min);
    edge++;
    p[v]=u;
min_cost+=min;

}

cost[a][b]=0;
}


printf("\nMIN COST %d",min_cost);

}

int find(int i){
while(p[i]!=0){
    i=p[i];
}
return i;
}


