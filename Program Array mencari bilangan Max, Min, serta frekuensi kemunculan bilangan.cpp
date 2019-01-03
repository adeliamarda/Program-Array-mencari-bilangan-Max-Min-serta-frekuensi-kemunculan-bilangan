#include <stdio.h>

int main(){
int arr[10]={0};
int n,a,max=arr[0],min,modus,x,y;
for(a=0;a<5;a++) {
    printf("Masukan angka ke-%d: ",a+1);scanf("%d",&n);
    arr[a]=n;
    if(a==1)
        min=arr[a];
    if(arr[a]>max)
        max=arr[a];
    if(arr[a]<min)
        min=arr[a];
}
for(x=0;x<5;x++){
    for(y=1;y<5;y++){
        if(arr[y]==arr[y-1]){
            modus=arr[y];
        }
    }
}
printf("Max= %d\n",max);
printf("Min= %d\n",min);
printf("Yang sering muncul adalah %d",modus);

return 0;
}
