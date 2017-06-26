//
//  main.c
//  duquGPS
//
//  Created by lyh20161104592 on 17/6/22.
//  Copyright © 2017年 lyh20161104592. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    char str1[70];
    char str2[70];
    char  lat1[9];
    char  lat2[9];
    char  lat2[10];
    char speed[6];
    char time[7];
    char deg[6];
    char date[7];
    char state[2];
    char quantity[3];
    char high[5];
    int i;
    fr=fopen("//Users//lyh20161104592//Desktop//GPS读取文件//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    lat1[i]=str1[i+16];
}
lat1[8]='\0';
printf("纬度:%s\n",lat1);
for(i=0;i<8;i++)
printf("纬度:北纬%s\n",lat1);
for(i=0;i<9;i++)
{
    lat2[i]=str1[i+27];
}
lat2[8]='\0';
printf("经度:%s\n",lat2);
lat2[9]='\0';
printf("经度:东经%s\n",lat2);
for(i=0;i<6;i++)
{
    speed[i]=str1[i+39];
}
speed[5]='\0';
printf("速率:%s\n",speed);
printf("速率:%s节\n",speed);
for(i=0;i<6;i++)
{
    deg[i]=str1[i+45];
}
deg[5]='\0';
printf("地面航向:%s度\n",deg);
for(i=0;i<6;i++)
{
    time[i]=str1[i+7];
}
time[6]='\0';
printf("UTC时间:%c%c时%c%c分%c%c秒\n",time[0],time[1],time[2],time[3],time[4],time[5]);
for(i=0;i<6;i++)
{
    date[i]=str1[i+51];
}
date[6]='\0';
printf("UTC日期:%c%c日%c%c月%c%c年\n",date[0],date[1],date[2],date[3],date[4],date[5]);
for(i=0;i<2;i++)
{
    state[i]=str2[i+37];
}
state[1]='\0';
printf("GPS状态:%s\n",state);
for(i=0;i<2;i++)
{
    quantity[i]=str2[i+39];
}
quantity[2]='\0';
printf("卫星数量:%s个\n",quantity);
for(i=0;i<4;i++)
{
    high[i]=str2[i+43];
}
high[4]='\0';
printf("海拔高度:%s米\n",high);

fclose(fr);
return 0;
}
    
