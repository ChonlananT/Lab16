#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
 	
	srand(time(0)); 
		
	for(int i = 0;i < 10;i++){
     	shuffle(&a,&b,&c,&d); 
     	cout << a << " " << b << " " << c << " " << d << "\n";
 	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int temp, m;
	int x[] = {*a,*b,*c,*d};
	int j = 4;
    for(int i = 0 ; i < 4; i++){
        m = rand()%j;
        if(m == 1){
            temp = x[i];
            x[i] = x[i+1];
            x[i+1] = temp;
        }
        else if(m == 2){
            temp = x[i];
            x[i] = x[i+2];
            x[i+2] = temp;
        }
        else if(m == 3){
            temp = x[i];
            x[i] = x[i+3];
            x[i+3] = temp;
        }
		j--;
    }
    *a = x[0];
    *b = x[1];
    *c = x[2];
    *d = x[3];
}
