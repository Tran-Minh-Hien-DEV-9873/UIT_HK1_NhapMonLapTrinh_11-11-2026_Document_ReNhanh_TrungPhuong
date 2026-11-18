#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, t1, t2;
    int soNghiem = 0;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap c: ");
    scanf("%f", &c);
    
    if (a == 0) {
        printf("Khong phai phuong trinh trung phuong");
        return 0;
    }
    
    delta = b*b - 4*a*c;
    
    if (delta < 0) 
	{
        printf("Phuong trinh vo nghiem thuc");
    }
    else
    {
        if(delta == 0)
        {
            t1 = -b/(2*a);

            if (t1 > 0) 
            {
                printf("x1 = %0.2f\n", sqrt(t1));
                printf("x2 = %0.2f\n", -sqrt(t1));
            }
            else
            {
                if(t1=0)
                {
                    printf("X = 0");
                }
                else
                {
                    printf("Vo nghiem thuc");
                }
            }
        }
        else
        {
            // delta lon hon 0
            //phuong trnh b?c 2
            
            //t1
            t1 = (-b + sqrt(delta)) / (2*a);
            t2 = (-b - sqrt(delta)) / (2*a);
            
            if (t1 > 0) {
                printf("x1 = %0.2f\n", sqrt(t1));
                printf("x2 = %0.2f\n", -sqrt(t1));
            }
            else
            {
                if (t1 == 0) {
                    printf("x = 0");
                    
                }
                else
                {
                    printf("Phuong trinh vo nghiem thuc");
                }
            }
            
            //t2
            if (t2 > 0) {
                printf("x3 = %0.2f\n", sqrt(t2));
                printf("x4 = %0.2f\n", -sqrt(t2));
            }
            else
            {
                if (t2 == 0) {
                    printf("x = 0");
                    
                }
                else
                {
                    printf("Phuong trinh vo nghiem thuc");
                }
            }
        }
       
        
    }


}
