#include <stdio.h>

int main(){

    char fullname[]="Vu Hong Van";
	int size = strlen(fullname);
	for(int i = 0; i<size; i++){
		printf("Ky tu thu %d la: %c\n", i+1, fullname[i]);
	}
	    
    
    
    return 0;
}

