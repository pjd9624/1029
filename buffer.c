#include <stdio.h>
int main(){
	int i,j,n,m;
	char c; 
	printf("�ݺ��� �� �Է� : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("�ݺ��� ���ڿ� �ݺ��� �� �Է� : ");
		fflush(stdin);
		scanf("%c %d",&c, &m);
		for(j=1; j<=m; j++){
			printf("%c\n",c);
		}
	} 
	
	return 0;
}
