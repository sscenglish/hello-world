// Copyright 2016 tqcenglish
/*
#include <iostream>
int main() {
    std::cout << "Hello World";
    return 0;
}
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct myphone_status
{
    char *name;     //参数1
    char *channel;  //参数2
    char *state;    //参数3
    char *presence; //参数4
    char *watcher;  //参数5
                    //char *pre;//参数6
                    //char *next;//参数7
};

int main(void)
{
		/*
    FILE *fp;
    fp = fopen("demo.txt", "r");
    if (fp == NULL)
        perror("open");
    int i = 0, k[100], j = 0, last;
		*/
    char buffer[4096], name[25] = {0}, channel[25] = {0}, state[25] = {0}, presence[25] = {0}, watcher[25] = {0};
    /*
	while((buffer[i]=fgetc(fp))!=EOF)
	{
		if((buffer[i]==0x0a)&&(buffer[i+1]!='-'))
		{
			k[j]=i;
			printf("%d",k[j]);
			j++;
		}
		i++;
	}
			i=0;last=j;//记录最后一个有效数据结尾回车0x0a
			while(i<(last-6))
			{
				printf("\n");
			for(j=(k[i]+1);j<(k[i]+21);j++)
			name[j-k[i]-1]=buffer[j];
			puts(name);
			for(j=(k[i]+23);j<(k[i]+45);j++)
			channel[j-k[i]-23]=buffer[j];
			puts(channel);
			for(j=(k[i]+45);j<(k[i]+65);j++)
			state[j-k[i]-45]=buffer[j];
			puts(state);
			for(j=(k[i]+67);j<(k[i]+84);j++)
			presence[j-k[i]-67]=buffer[j];
			puts(presence);
			for(j=(k[i]+92);j<(k[i]+103);j++)
			watcher[j-k[i]-92]=buffer[j];
			puts(watcher);
			i++;
			}
		*/
    struct myphone_status /*phone,*/ *st;
    /*	
			phone.name=name;
			phone.channel=channel;			
			phone.state=state;
			phone.presence=presence;
			phone.watcher=watcher;			
			printf("%s\n",phone.name);
			puts(phone.channel);ss
			puts(phone.presence);
			puts(phone.state);
			puts(phone.watcher);
		*/
    memcpy(name, "123456", 6);
    //name[strlen(name)]='\0';
    //puts(p->channel);
    st->name = name;
    /*			p->channel=channel;			
			p->state=state;
			p->presence=presence;
			p->watcher=watcher;			
			printf("%s\n",p->name);
			puts(p->channel);
			puts(p->presence);
			puts(p->state);
			puts(p->watcher);

*/ printf("1111");
    puts(st->name);

    return 0;
}
