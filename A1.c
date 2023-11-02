#include<stdio.h>
int main(){
    int rows=0,cols=0;
    printf("enter the no of rows:\n");
    scanf("%d",&rows);
    printf("enter the no of cols:\n");
    scanf("%d",&cols);
    int arr[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("enter the element in rows:%d  column:%d",i,j);
            scanf("%d",&arr[i][j]);


        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",arr[i][j]);

        }

    }
    printf("\n");

}
