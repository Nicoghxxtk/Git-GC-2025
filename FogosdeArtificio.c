#include <stdlib.h>
#include <stdio.h>

void fogos(){
	for(int i = 1; i <=10; i++){
		if (i %2 == 0){
			print("PA\n");
		}else{
			print("...\n");
		}
	}
	for(int i = 1; i <=3){
		print("...\n");
	}
		print("POW");
}

int main(){
	fogos();

	return 0;
}

