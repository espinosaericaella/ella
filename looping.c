#include<stdio.h>
int main(){
	int x;
	// void sample() walang nirereturn, walang pinapasa
	// int sample() may nirereturn, walang pinapasa
	// void sampl(int x) walang nirereturn, may pinapasa
	// int sample(intx) may nireretun, may pinapasa
	
	// ganda ni elisha
	/*
		for(x=1; x<=10; x++){
			printf("%d ", x);
	}*/
	
	
	/*
		for(x=100; x>=0; x-=5){
			printf("%d ", x);
	}*/
	
	/*
	x=1;
	while(x<=10){
		printf("%d ", x);
		x++;
	}*/
	
	/*
	x=0;
	while(x<=30){
		printf("%d ", x);
		x+=3;
	}*/
	
	/*
	x=0;
	while(x<=100){
		printf("%d ", x);
		x+=5;
	}*/
	
	/*
	x=100;
	while(x>=0){
		printf("%d ", x);
		x-=5;
	}*/
	
	x=1;
	do{
		printf("%d ", x*x);
		x++;
	}while(x<=10);
}
