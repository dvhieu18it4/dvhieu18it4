
	// DVHIEU18IT4
	#include<stdio.h>
	#include<conio.h>
	int main(){
	int n;
	int mang[100];
	printf("nhap n : \n");
	scanf("%d",&n);
	
	//nhap mang
	for (int i=0;i<n;i++){
		printf("mang[%d] =",i);
		scanf("%d",&mang[i]);
	}
	
	//	in ra cac mang
	for (int i=0;i<n;i++){
		printf("mang[%d]=%d ",i,mang[i]);
	}
	printf("\n");
	
	// tong cac phan tu chan
	int tong =0;
	for (int i=0;i<n;i++){
		
		if (mang[i]%2==0)	tong =tong +mang[i];
	
	}
	printf("tong chan la %d",tong);
	printf("\n");
	// in ra ccac phan tu nho nhat trong mang 
	int min =mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]<min) min=mang[i];
	}
	printf("so nho nhat la %d ",min);
	//
}
