#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("%d is youngest\n",a);
	}
	else if(b<c && b<a){
		printf("%d is youngest\n",b);
	}
	else if(c<a && c<b){
		printf("%d is youngest\n",c);
	}
		
	return 0;
}
