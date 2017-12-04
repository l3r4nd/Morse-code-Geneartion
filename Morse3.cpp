#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int callfunction(int x){
	int temp=x;
	int Y;
	int o;

	if(temp==0 || temp==1){
		Y=1;	// for a
	}
	else if(temp==2 || temp==3){
		Y=2;	//for b
	}
	else if(temp==4 || temp==5){
		Y=3;	//for c
	}
	else if(temp==6 || temp==7){
		Y=4;	// for d
	}
	else if(temp==8 || temp==9){
		Y=5;	// for e
	}
	else if(temp==10 || temp==11){
		Y=6;	//for f
	}
	else if(temp==12 || temp==13){
		Y=7;	//for g
	}
	else if(temp==14 || temp==15){
		Y=8;	//for h
	}
	else if(temp==16 || temp==17){
		Y=9;	//for i
	}
	else if(temp==18 || temp==19){
		Y=10;	// for j
	}
	else if(temp==20 || temp==21){
		Y=11;	// for k
	}
	else if(temp==22 || temp==23){
		Y=12;	// for l
	}
	else if(temp==24 || temp==25){
		Y=13;	// for m
	}
	else if(temp==26 || temp==27){
		Y=14;	// for n
	}
	else if(temp==28 || temp==29){
		Y=15;	// for o
	}
	else if(temp==30 || temp==31){
		Y=16;	// for p
	}
	else if(temp==32 || temp==33){
		Y=17;	// for q
	}
	else if(temp==34 || temp==35){
		Y=18;	// for r
	}
	else if(temp==36 || temp==37){
		Y=19;	// for s
	}
	else if(temp==38 || temp==39){
		Y=20;	// for t
	}	
	else if(temp==40 || temp==41){
		Y=21;	// for u
	}
	else if(temp==42 || temp==43){
		Y=22;	// for v
	}
	else if(temp==44 || temp==45){
		Y=23;	// for w
	}
	else if(temp==46 || temp==47){
		Y=24;	// for x 
	}
	else if(temp==48 || temp==49){
		Y=25;	// for y
	}
	else if(temp==50 || temp==51){
		Y=26;	// for z
	}
	else if(temp==52){
		Y=27;	// for 1
	}
	else if(temp==53){
		Y=28;	// for 2
	}
	else if(temp==54){
		Y=29; 	// for 3
	}
	else if(temp==55){
		Y=30;	// for 4
	}
	else if(temp==56){
		Y=31;	// for 5
	}
	else if(temp==57){
		Y=32;	// for 6
	}
	else if(temp==58){
		Y=33;	// for 7
	}
	else if(temp==59){
		Y=34;	// for 8
	}
	else if (temp == 60){
		Y= 35; 	// for 9
	}
	else if (temp == 61){
		Y=36;	 // for  0
	}
	
	o = Y;
	return o;
}

int main(){
	int i,j,k,p,length,a[100];
	char string[100];
	char string1[]={'A','a','B','b','C','c','D','d','E','e','F','f','G','g','H','h',
					'I','i','J','j','K','k','L','l','M','m','N','n','O','o','P','p',
					'Q','q','R','r','S','s','T','t','U','u','V','v','W','w','X','x',
					'Y','y','Z','z','1','2','3','4','5','6','7','8','9','0'};
	const char* string2[]={"•-","-•••", "-•-•","-••", "•", "••-•","--•","••••","••","•---","-•-","•-••",
                     	   "--","-•","---","•-•","--•-","•-•","•••","-","••-","•••-","•--","-••-",
                           "-•--","--••","•----","••---","•••--","••••-","•••••","-••••","--•••","---••",
                           "----•","-----"," "};
	printf("Enter a string:");
	gets(string);
	printf("The entered string is:%s\n",string);
	length= strlen(string);
	printf("Length=%d\n",length);
	for(j=0;j<length;j++){
		for(i=0;i<62;i++)
			if(string1[i]==string[j]){				
				p = callfunction(i);
				a[j] = p;				 
			}
		}
		for(i=0;i<length;i++){
			printf("%d\t",a[i]);
			printf("\n");
		}
		
		for(int i = 0; i < length; i++)
    		printf("%s\t", string2[a[i]]);
	
	getchar();
	return 0;
}



