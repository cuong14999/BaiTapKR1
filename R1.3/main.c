#include <stdio.h>
int n;
struct HinhChuNhat{
    float chieudai;
    float chieurong;
};
void input(struct HinhChuNhat info[]){
    printf("Nhap so hinh chu nhat can nhap thong tin: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Hinh thu: %d\n",i+1);
        printf("\nXin moi nhap chieu dai: ");
        scanf("%f", &info[i].chieudai);
        printf("\nXin moi nhap chieu rong: ");
        scanf("%f", &info[i].chieurong);
        printf("Them thanh cong!\n");
        printf("------------------------\n");
    }
}
void output(struct HinhChuNhat info[]){
    for (int i = 0; i < n; ++i) {
      printf("Thong tin hinh chu nhat thu: %d\n", i+1);
      printf("Chieu dai: %3f\n Chieu rong: %3f\n",info[i].chieudai,info[i].chieurong );
      printf("------------------------------\n");
    }
}


int main() {
    struct HinhChuNhat info[8];
    int k;
    printf("Xin chao!\n");
    nhan:
    printf("Moi nhap lua chon cua ban: \n");
    printf("1.Nhap thong tin\n");
    printf("2.In cac thong tin\n");
    scanf("%d", &k);
    switch (k) {
        case 1:
            input(info);
            goto nhan;
        case 2:
            output(info);
            goto nhan;
        default:
            printf("Moi nhap lai yeu cau\n");
    }
    return 0;
}
