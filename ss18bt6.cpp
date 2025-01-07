#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[20];
	int age;
	char phoneNumber[20];
};
int main(){
	int size=5;
	struct student sinhvien[50]={
		{1,"cuong le",18,"090888001"},
		{2,"chip gia",18,"080888002"},
		{3,"boa hoa",18,"070888003"},
		{4,"ca tim",18,"050888004"},
		{5,"nhat le",18,"010888005"},
	};
	sinhvien[5].id=6;
	printf("moi ban nhap ten: ");
	fgets(sinhvien[5].name,sizeof(sinhvien[5].name),stdin);
	sinhvien[5].name[strcspn(sinhvien[5].name,"\n")]='\0';
	printf("moi ban nhap tuoi: ");
	scanf("%d",&sinhvien[5].age);
	getchar();
	printf("moi ban nhap so dien thoai: ");
	fgets(sinhvien[5].phoneNumber,sizeof(sinhvien[5].phoneNumber),stdin);
	sinhvien[5].phoneNumber[strcspn(sinhvien[5].phoneNumber,"\n")]='\0';
	size++;
	for(int i=0;i<size;i++){
		printf("----------------------\n");
		printf("id: %d\n",sinhvien[i].id);
		printf("ten: %s\n",sinhvien[i].name);
		printf("tuoi: %d\n",sinhvien[i].age);
		printf("so dien thoai: %s\n",sinhvien[i].phoneNumber);
	}
	return 0;
}
