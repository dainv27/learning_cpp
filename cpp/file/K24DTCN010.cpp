#include <fstream> 
#include <iostream> 
#include <vector>

#define FILE_PATH "Input.txt"
#define MAX_TEST_CASE 100

using namespace std;

void findNumber(char input[], const int size) {
	
	int ascii_0 = '0';
	int ascii_9 = '9';
	
	int i = 0;
	int len = 0;
	bool hasNumber = false;
	bool hasNoNumber = true;
	int noOfNumber = 0;
	int numbers[size];
	
	for (i = 0; i < 1000; i++) { 
		if((input[i] >= ascii_0) && (input[i] <= ascii_9)) {
			int num = input[i] - ascii_0;
			if(hasNumber) {
				numbers[noOfNumber] = numbers[noOfNumber]*10;
				numbers[noOfNumber] += num;
			} else {
				numbers[noOfNumber] = num;
			}
			hasNoNumber = false;
			hasNumber = true;
		} else if(input[i] == '\n' || input[i] == EOF) {
			if(hasNumber) noOfNumber++;
			break;
		} else {
			if(hasNumber) noOfNumber++;
			hasNumber = false;
		}
    }
    
    if(hasNoNumber) {
		printf("-1\n");
		return;
	}

	int j, last;
    for (i=1; i < noOfNumber; i++) {
        last = numbers[i];
        j = i;
	    while ((j > 0) && (numbers[j-1] > last)) {
	        numbers[j] = numbers[j-1];
	        j = j - 1; 
		}
	   numbers[j] = last;
    } 
	
	for(i=0; i<noOfNumber; i++) {
		printf("%d ", numbers[i]);
	}
	
	printf("\n");
}

void cau2() {
    ifstream inputFile("input.txt"); 
    if (!inputFile.is_open()) {
        return; 
    } 
  
    inputFile.seekg(0, std::ios::end);
    std::streampos fileSize = inputFile.tellg();
    inputFile.seekg(0, std::ios::beg);

    std::vector<char> content(fileSize);
    inputFile.read(content.data(), fileSize);
    
    int i = 0;
    int charNo = 0;
    int lineCount = 0;
    char line[100][1000];
    for (i = 0; i < fileSize; i++) {
    	line[lineCount][charNo] = content[i];
    	if(content[i] != '\n') {
    	 	charNo++;	
		} else {
			charNo=0;
			lineCount++;
		}
    }
    
    int len = lineCount;
    while(lineCount--) {
		findNumber(line[len - lineCount], len);
	}
    
  
	inputFile.close(); 
}

int main() {
    cau2();
    return 0;
}

