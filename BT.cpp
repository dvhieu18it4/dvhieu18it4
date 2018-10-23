#include<conio.h>
#include<stdio.h>
#include<String.h>
// 1 nhap mang 2 5 8 9
void NhapMang(int mang[100],int n){
	for (int i=0;i<n;i++){
		printf("mang[%d] = ",i);
		scanf("%d",&mang[i]);
	}
}
// 2 in mang 
void InMang(int mang[100],int n){
	for (int i=0;i<n;i++){
		printf("mang[%d]=%d \n",i,mang[i]);
	}
}
// tinh tong giai thua 
int TongGiaiThua(int mang[100],int n){
	int gt=1;
	int tong = 0;
	for(int i=1;i<=mang[i-1];i++){
		gt=gt*i;
		tong+=gt;
	}
	printf("tong cac giai thua la %d ",tong);
}


// 4 nhap 1 chuoi dem ky so ky tu
int	main(){
		char chuoi[50];
		printf("nhap vao chuoi bat ki ");
		scanf("%s",chuoi );
		int dem =0;
		for (int i=0;i<strlen(chuoi);i++){
		for(int j=0;j<strlen(chuoi);j++) 
		if(chuoi[i] == chuoi[j]) dem++;
		}
		printf("chuoi da nhap la %s co %d ky tu la  ",chuoi,dem);
		printf("\n");
	
	int n;
	int mang[100];
	printf("nhap n \n");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	TongGiaiThua(mang,n);
}

	
