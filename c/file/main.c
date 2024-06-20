#include <stdio.h>

#define FILE_PATH "K24DTCN010.txt"

void writeFile(char inputStr[], int len){
    FILE *filePrt = fopen(FILE_PATH, "w");
    long i = 0;
    
	if(filePrt == NULL) {
    	printf("File is NULL\n");
	}
	
	fwrite(inputStr, 1 , len, filePrt);

    fclose(filePrt);	
}

void readFile() {
    FILE *file = fopen(FILE_PATH, "r");
    int countChar = 0;
    int countWord = 0;
    char data[500];
    char lowercase [500];
    char uppercase[500];

    if (file == NULL){
        printf("Open file error");
    } else {
        fgets(data, 500, file);
        
		// Print file content
        printf("Thong tin file vua doc la: \t %s\n", data);
        
	    // Count char
	    for(countChar=0; countChar<500; countChar++) {
	    	if(data[countChar] == '\0') break;
		}
		printf("So ky tu la: \t %d\n", countChar);
	    
	    // Count word
	    for(countChar=0; countChar<500; countChar++) {
	    	if(data[countChar] == '\0') break;
	    	
	    	if(data[countChar] == ' ') {
	    		countWord++;
			}
		}
		if(countChar>0) countWord=countWord+1;
		printf("So tu la: \t %d\n", countWord);
	    
	    // Lowercase
	    for(countChar=0; countChar<500; countChar++) {
	    	if(data[countChar] == '\0') {
	    		lowercase[countChar] = data[countChar];
				break;
			}
	    	
	    	if(data[countChar] >= 'A' && data[countChar] <= 'Z' ){
	    		lowercase[countChar] = data[countChar] + 32;
			} else {
				lowercase[countChar] = data[countChar];
			}
		}
		printf("Doi sang chu thuong: \t %s\n", lowercase);
	    
	    //Uppercase
	    for(countChar=0; countChar<500; countChar++) {
	    	if(data[countChar] == '\0') {
	    		uppercase[countChar] = data[countChar];
				break;
			}
	    	
	    	if(data[countChar] >= 'a' && data[countChar] <= 'z' ){
	    		uppercase[countChar] = data[countChar] - 32;
			} else {
				uppercase[countChar] = data[countChar];
			}
		}
		printf("Doi sang chu hoa: \t %s\n", uppercase);
    }
    fclose(file);
}

int main() {
	char input[] = "Hoc Vien Cong Nghe";
	
    printf("Write sample file...\n");
    writeFile(input, 18);
	
	readFile();
    
    return 0;
}

