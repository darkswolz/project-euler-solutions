#include <stdio.h>

int main(){
int toplam=0;
int toplam2=0;
int toplam3=0;
int sonuc=0;
for(int i=0;i<1000;i+=3){
toplam+=i;
}
for(int j=0;j<1000;j+=5){
toplam2+=j;
}
for(int k=0;k<1000;k+=15){
toplam3+=k;
}
sonuc=toplam+toplam2-toplam3;
printf("%d",sonuc);
return 0;
}
