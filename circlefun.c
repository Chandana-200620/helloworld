#include <stdio.h>
float circle(float r,float p){
    float area=p*r*r;
    return area;
}
int main(){
    float r=2;
    float p=3.14;
    float area=circle(r,p);
    printf("The area  is:%f",area);
    return 0;
}
The area  is:12.560000
