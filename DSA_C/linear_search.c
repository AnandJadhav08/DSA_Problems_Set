#include <stdio.h>

int main(){

 int n, key, i,count = 0;
    printf("\n------------Linear Search Algorithm------------\n");
    printf("\n How Many Elements Are You Enter in Array : ");
    scanf("%d",&n);
    int arr[n];

    printf("\n Enter Elements In Array : \n");
    for( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\n Enter Key Element to Search this Element on Array :");
    scanf("%d",&key);

    for(i = 0; i < n; i++){
       if(arr[i] == key){
        printf("\n Element Is Found on %d index in Array",i);
        count++;
        break;
       }
    }
      
       if(count == 0){
        printf("\n Enter Key Element Is Not Found In Array");
       }
       
    return 0;
}