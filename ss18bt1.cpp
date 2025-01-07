#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int age;
		char phoneNumber[20];
	};
	struct student sinhvien01={"cuong le",18,"0102030405"
	};
	printf("ten sinh vien: %s\n",sinhvien01.name);
	printf("tuoi: %d\n",sinhvien01.age);
	printf("so dien thoai: %s\n",sinhvien01.phoneNumber);
	return 0;
}
