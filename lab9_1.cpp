#include <iostream>

using namespace std;
void swap (int *a,int *b ) {
   int jam;
jam=*a;
*a = *b;
*b=jam;
}
int main () {
    int a,b,cmd;
    cin >> a;
    cin >> b;
    do { cout << "menu\n.1 swap () \ n.2 quit()" <<endl ;
    cin >> cmd;
    if (cmd==1 ){
        swap(&a,&b);
        cout << a << b <<endl;

    } else {break ;

    }
} while (1);


    return 0;
}
