
#include <iostream>
using namespace std;
int main(){

 cout<< "int:" << sizeof  (long)<<endl;
 cout<< "int:" << sizeof  (int)<<endl;
cout<< "int:" << sizeof  (char)<<endl;
 cout<< "int:" << sizeof  (bool)<<endl;
cout<< "int:" << sizeof  (float)<<endl;
 cout<< "int:" << sizeof  (double)<<endl;

int a=5;

cout << &a << endl;
cout<< a << endl;
cout<< *(&a)<< endl;
cout <<sizeof(long*)<<endl;
cout <<sizeof(int*)<<endl;
cout <<sizeof(char*)<<endl;
cout <<sizeof(bool*)<<endl;
cout <<sizeof(float*)<<endl;
cout <<sizeof(double*)<<endl;

int* direccion;
cout<<direccion<<endl;
cout<<&direccion<<endl;
cout<<*direccion<<endl;


int-* dir;
int* dir = (int*) malloc(sizeof(int));
_* dir=7;
cout<<*dir<<endl;
return 0;
}
