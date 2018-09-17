#include <stdio.h>

int main(){
    int counter[28];
    int i,sum=0;
    for(i=0;i<29;i++){
        counter[i]=0;
    }
    for(i=0;i<1000;i++){
        sum=i%10+i/100+(i/10%10);
        counter[sum]++;
        sum=0;
    }
    for(i=0;i<29;i++){
        sum+=counter[i]*counter[i];
    }
    printf("%i",sum);


}