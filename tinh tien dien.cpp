#include<stdio.h>
#include<conio.h>
main(){
float sm,sc,tt,tien;
printf("chi so cu ");
scanf("%f",&sm);
printf("chi so moi ");
scanf("%f",&sc);
if (sm>sc)   tt=sm-sc;
if(tt<50){
tien=tt*1500;
printf("tien dien la %.0f vnd",tien);
}
else if(tt>50&&tt<=100){
tien=50*1500+(tt-50)*2000;
printf("tien dien la %.0f vnd",tien);
}
else{
tien=50*1500+50*2000+(tt-100)*3000;
printf("tien dien la %.0f vnd",tien);
}
}
