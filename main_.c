#include <stdio.h>
#include <stdlib.h>
#define n 5

void bubbleSort(){
	
}

int swap(int num[], int a, int b)
{
	num[a] = num[b];
	num[b] = num[a];
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num[n];
	int i;
	int j;
	//���� ����
	
	printf("input %d numbers : ", n);
	for(i=0;i<n;i++)
	scanf("%d", &num[i]);
	//�Է� �ޱ�
	
	// sorting
	for (j=0;j<n;j++)
	printf("%d ", num[j]);
	//���  
	
	return 0;
}
