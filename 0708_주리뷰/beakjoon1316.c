#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int check(char str[], int len) {
	int i, j, k = 0;
	for (i = 0;i < len;i++) {
		for (j = 0;j < len;j++) {
			if (str[i] == str[j]) {
				k = j - i;
				if (k > 1 && str[j - 1] != str[j])
					return 0;
			}
		}
	}
	return 1;
}
void main() {
	int num;
	char voca[100];
	int i, count = 0;
	scanf_s("%d", &num);
	for (i = 0;i < num;i++) {
		scanf_s("%s", voca);
		count += check(voca, strlen(voca));
	}
	printf("%d", count);
}