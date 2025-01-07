#include<stdio.h>
#include<string.h>
int main(){
	int size=5;
	struct student{
		char name[20];
		int age;
		char phoneNumber[20];
	};
	struct student sinhvien[size];
	for(int i=0;i<size;i++){
		printf("moi ban nhap ten sinh vien thu %d: ",i+1);
		fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);
		sinhvien[i].name[strcspn(sinhvien[i].name,"\n")]='\0';
		printf("moi ban nhap tuoi: ");
		scanf("%d",&sinhvien[i].age);
		getchar();
		printf("moi ban nhap so dien thoai: ");
		fgets(sinhvien[i].phoneNumber,sizeof(sinhvien[i].phoneNumber),stdin);
	}
	for(int i=0;i<size;i++){
		printf("sinh vien thu %d\n",i+1);
		printf("ten: %s\n",sinhvien[i].name);
		printf("tuoi: %d\n",sinhvien[i].age);
		printf("so dien thoai: %s",sinhvien[i].phoneNumber);
	}
	return 0;
}
