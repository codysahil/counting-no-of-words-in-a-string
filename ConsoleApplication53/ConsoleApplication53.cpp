#include<iostream>
using namespace std;

void cnt(char arr[]) {
	int vcount = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
			vcount++;
		}
	}
	cout << vcount<<endl;
}
void cntwords(char arr[]) {
	int word = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == ' ' && arr[i] != '\0') {
			word++;
		}
	}
	cout << word+1;
}

int main() {

	char arr[] = "welcOmE Home bittu have a nice day";
	cnt(arr);
	cntwords(arr);

	return 0;
}
