#include<stdio.h>
#include<string.h>
int main(){
	struct student{
		char name[20];
		int age;
		char phoneNumber[20];
	};
	struct student sinhvien01;
	printf("moi ban nhap ten: ");
	fgets(sinhvien01.name,sizeof(sinhvien01.name),stdin);
	sinhvien01.name[strcspn(sinhvien01.name,"\n")] ='\0';
	printf("moi ban nhap tuoi: ");
	scanf("%d",&sinhvien01.age);
	getchar();
	printf("moi ban nhap so dien thoai: ");
	fgets(sinhvien01.phoneNumber,sizeof(sinhvien01.phoneNumber),stdin);
	printf("ten: %s\n",sinhvien01.name);
	printf("tuoi: %d\n",sinhvien01.age);
	printf("so dien thoai: %s",sinhvien01.phoneNumber);
	return 0;
}
