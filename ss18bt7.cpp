#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[20];
	int age;
	char phoneNumber[20];
};
int main(){
	int size=5,deleIndex;
	struct student sinhvien[50]={
		{1,"cuong le",18,"090888001"},
		{2,"chip gia",18,"080888002"},
		{3,"boa hoa",18,"070888003"},
		{4,"ca tim",18,"050888004"},
		{5,"nhat le",18,"010888005"},
	};
	printf("moi ban nhap vi tri xoa: ");
	scanf("%d",&deleIndex);
	if(deleIndex<0||deleIndex>size){
		printf("khong hop le");
		return 1;
	}
	for(int i=deleIndex;i<size-1;i++){
		sinhvien[i].id=sinhvien[i+1].id;
		strcpy(sinhvien[i].name,sinhvien[i+1].name);
		sinhvien[i].age=sinhvien[i+1].age;
		strcpy(sinhvien[i].phoneNumber,sinhvien[i+1].phoneNumber);
	}
	size--;
	for(int i=0;i<size;i++){
		printf("-----------------\n");
		printf("id: %d\n",sinhvien[i].id);
		printf("ten: %s\n",sinhvien[i].name);
		printf("tuoi: %d\n",sinhvien[i].age);
		printf("so dien thoai: %s\n",sinhvien[i].phoneNumber);
	}
	return 0;
}
