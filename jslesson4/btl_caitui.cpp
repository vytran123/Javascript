#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;
#define MAX 20
// dinh nghia cau truc luu truw thong tin cua 1 mon do
typedef struct MONDO{
	int w;
	int v;
	int num;
};
void docfile(char fname[],MONDO a[],int &n);
void inmondo(MONDO m);


void docfile(char fname[],MONDO a[],int &n)
{
	FILE *fp;
	//1.Mo file
	fopen_s(&fp,fname,"rt");
	//1.1. Kiem tra
	if(fp == NULL)
	{
		count << "Khong mo duoc tap tin\n";
		return;
	}
	//2. Doc du lieu
	fscanf_s(fp, "%d" , &n);
	for(int i = 0 ;i < n; i++)
	{
		fscanf_s(fp, "%d", &a[i].w);
		fscanf_s(fp, "%d", &a[i].v);
		fscanf_s(fp, "%d", &a[i].num);
	}
	//3. Dong tap tin
	fclose(fp);
}
//2. In thong tin cua 1 mon do ra man hinh
void inmondo(MONDO m)
{
	cout <<"(" << m.w <<", " << m.v << "," << m.num <<")"<<endl;
}
int main()
{
	MONDO a[MAX];
	int n;
	docfile("D:/baolo.txt",a,n)
	for(int i = 0; i < n; i++)
	{
		inmodo(a[i]);
		cout << endl;
	}
	return 0;
}