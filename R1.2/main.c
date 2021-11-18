#include <stdio.h>
float pi = 3.14;
void tinhchuvi(float bankinh){
    float chuvi;
    chuvi = bankinh * 2 *pi;
    printf("\nChu vi cua hinh tron can tinh la: %f", chuvi);
}
void tinhdientich(float bankinh){
    float dientich;
    dientich = bankinh * bankinh *pi;
    printf("\nDien tich cua hinh tron can tinh la: %f", dientich);
}
int main() {
    int r;
    int k;
    nhan:
    printf("\nNhap ban kinh cua hinh tron: ");
    scanf("%d", &r);
    printf("\n1.Tinh chu vi hinh tron");
    printf("\n2.Tinh dien tich hinh tron\n");
    scanf("%d", &k);
        switch (k) {
            case 1:
                tinhchuvi(r);
                goto nhan;
            case 2:
                tinhdientich(r);
                goto nhan;
            default:
                printf("Moi chon lai!");
                break;
        }

    return 0;
}
