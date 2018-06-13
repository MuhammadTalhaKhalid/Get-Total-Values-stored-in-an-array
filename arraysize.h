#include<iostream>
using namespace std;
int Getsize;
class GetArray {
protected:
char Arr[];
int Arr2[];
string Arr3[];
public:	
	GetArray() {
		Getsize=-1;
	}
char CharSize(int TotalArrSize,char arr[]){
Getsize=-1;
Arr[TotalArrSize];
for(int i=0;i<TotalArrSize;i++) {
Arr[i]=0;
}	
for(int i=0;i<TotalArrSize;i++) {
Arr[i]=arr[i];
}
do {
Getsize++;	
}while(Arr[Getsize]!=0);
return 1;
}

int IntSize(int TotalArray,int arrVal[]) {
GetArray();
Arr2[TotalArray];
for(int i=0;i<TotalArray;i++) {
Arr2[i]=0;
}
for(int i=0;i<TotalArray;i++) {
Arr2[i]=arrVal[i];
}
do {
Getsize++;	
}while(Arr2[Getsize]!=0);	
}
};

