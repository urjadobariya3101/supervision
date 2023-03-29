#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *p;
	char ch[50];
	int i;
	
	p = fopen("demo.txt","w");
	
	if(p == NULL){
		printf("Error");
	}
	else{
		printf("Enter text : ");
		gets(ch);
		
		fputs(ch,p);
		fclose(p);
	}
	
	return 0;
}
