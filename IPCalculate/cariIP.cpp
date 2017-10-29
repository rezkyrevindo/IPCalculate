#include <stdio.h>

void nilaiIndeks(int nilai){
	char *ind;

	if ((nilai >=0) && (nilai <=40)){
		ind = "E";
	}else if((nilai > 40) && (nilai <=50)){
		ind = "D";
	}else if ((nilai >50) && (nilai <=60)){
		ind = "C";
	}else if ((nilai >60) && (nilai <=70)){
		ind = "B";
	}else if ((nilai > 70) && (nilai <= 80)){
		ind = "AB";
	}else if ((nilai >80) && (nilai <=100)){
		ind = "A";
	}
	
	printf("IP	: %d(%s)",nilai,ind);
	
}


int ip_kal(int jumNilai[],int n,int totSKS){
	int ip; 
	int jum;
	for (int i=1; i < n+1 ; i++ ){
		jum += jumNilai[i];
	}
	
	ip = jum / totSKS;
	
	return ip;
}

int main(){
	int pilihan,n;
	int sks,nilai;
	char indeks[2];
	char nama[100],kelas[100];
	int sXn,ip,totSKS;
	
	printf("-------------------------------\n");
	printf("	Data Mahasiswa\n");
	printf("-------------------------------\n");
	printf("Nama		: "); gets(nama);
	printf("Kelas		: "); gets(kelas);
	printf("Banyak Mata Kuliah : ");scanf("%d",&n);
	
	char mk[n+1][150];
	int jumNilai[n+1];
	printf("\n");
	for(int mk_i=1;mk_i<=n;mk_i++){
		
		printf("Nama Mata Kuliah %d : ",mk_i );scanf("%s",&mk[mk_i]);
	}
	
	printf("-------------------------------\n");
	printf("	Data Nilai\n");
	printf("-------------------------------\n");
	for(int i = 1 ;i <= n; i++){
		printf("%s\n",mk[i]);
		
		printf("SKS 	: "); scanf("%d",&sks);
		printf("Nilai	: "); scanf("%d",&nilai);
		printf("-------------------------------\n");
		totSKS += sks; 
		sXn = sks * nilai;
		jumNilai[i] = sXn;	
	}
	
	ip = ip_kal(jumNilai,n,totSKS);
	
	printf("-------------------------------\n");
	printf("	Data Mahasiswa\n");
	printf("-------------------------------\n");
	printf("Nama 	: %s\n",nama);
	printf("Kelas	: %s\n",kelas);
	nilaiIndeks(ip);
		
	return 0;
}
