#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[20];
	int age;
	char phoneNumber[20];
};
int main(){
	int id,check=1;
	struct student sinhvien[50]={
		{1,"cuong le",18,"0102030405"},
		{2,"ca tim",18,"010222233"},
		{3,"ham lao",18,"0102022452"},
		{4,"ca tim",18,"044072222"},
		{5,"hang ha",18,"0152030405"},
	};
	printf("moi ban nhap iD: ");
	scanf("%d",&id);
	getchar();
	for(int i=0;i<5;i++){
		if(sinhvien[i].id==id){
			check=0;
			printf("moi ban sua ten: ");
			fgets(sinhvien[i].name,20,stdin);
			sinhvien[i].name[strcspn(sinhvien[i].name,"\n")]='\0';
			printf("moi ban sua tuoi: ");
			scanf("%d",&sinhvien[i].age);
			getchar();
			break;
		}
	}
	if(check){
		printf("id cua ban nhap khong ton tai");
	}else{
		for(int i=0;i<5;i++){
			printf("------------------------\n");
			printf("id: %d\n",sinhvien[i].id);
			printf("ten: %s\n",sinhvien[i].name);
			printf("tuoi: %d\n",sinhvien[i].age);
			printf("so dien thoai: %s\n",sinhvien[i].phoneNumber);
		}
	}
	return 0;
}
