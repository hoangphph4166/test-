#include <iostream>
#include <cmath> 
using namespace std;
void muc1(){}
void muc2(){}
void muc3(){}
void tinhTienDien(){
    const int b1= 1678, b2= 1734, b3=2014, b4= 2536, b5= 2834, b6= 2927; //khai bao hang so
	int kw, tien;    //khai bao bien
	printf("Moi nhap so kw tieu thu: ");
	scanf("%d", &kw);
	//Tinh tien dien theo tung bac gia
	if(kw <=50){
		tien = kw * b1;
	}
	else if(kw <=100){
		tien= 50 * b1 + (kw - 50) * b2;
	}
	else if(kw <=200){
		tien = 50 * b1 + 50 * b2 + (kw - 100) * b3;
	}
	else if(kw <=300){
		tien = 50 * b1 + 50 * b2 + 100*b3 + (kw - 200) * b4;
	}
	else if(kw <=400){
		tien = 50 * b1 + 50 * b2 + 100*b4 +(kw - 300) * b5;
	}
	else {
		tien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + 100 * b5 + (kw - 400) * b6;
	}
	printf("So tien dien phai tra: %d VND\n", tien);
}
void muc5(){}
void muc6(){}
void muc7(){}
void muc8(){}
void muc9(){}
void muc10(){}
int main() {
	int chon;
	while (true){
	printf(" -----------------------Muc Luc----------------------- \n");	
	printf("|    1.  Kiem tra so nguyen                           |\n");
	printf("|    2.  Tim Uoc so chung va boi so chung cua 2 so    |\n");
	printf("|    3.  Tinh tien cho quan Karaoke                   |\n");
	printf("|    4.  Tinh tien dien                               |\n");
	printf("|    5.  Chuc nang doi tien                           |\n");
	printf("|    6.  Tinh lai suat vay ngan hang, vay tra gop     |\n");
	printf("|    7.  Vay tien mua xe                              |\n");
	printf("|    8.  Sap xep thong tin sinh vien                  |\n");
	printf("|    9.  Xay dung game Fpoly-LOTT                     |\n");
	printf("|    10. Tinh toan phan so                            |\n");
	printf("|    11. Thoat                                        |\n");
	printf(" ----------------------------------------------------- \n");
	printf("Vui long chon 1 muc: "); 
	scanf("%d", &chon); //doc vao su lua chon cua nguoi dung
	switch(chon){
		case 1:
			printf("muc 1:  Kiem tra so nguyen                            \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc1();
			break; //thoat khoi switch...case
		
		case 2:
			printf("Muc 2:  Tim Uoc so chung va boi so chung cua 2 so     \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc2();
			break;
		
		case 3:
			printf("Muc 3:  Tinh tien cho quan Karaoke                    \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc3();
			break;
		
		case 4:
			printf("Muc 4:  Tinh tien dien                                \n");
			tinhTienDien();
			break;
		
		case 5:
			printf("Muc 5:  Chuc nang doi tien                            \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc5();
			break;
		
		case 6:
			printf("Muc 6:  Tinh lai suat vay ngan hang, vay tra gop      \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc6();
			break;
        case 7:
		    printf("Muc 7:  Vay tien mua xe                               \n"); 
			muc7();
			break;
		
		case 8:
			printf("Muc 8:  Sap xep thong tin sinh vien                   \n");
			muc8();
			break;
		
		case 9:
			printf("Muc 9:  Xay dung game Fpoly-LOTT                      \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc9();
			break;
		
		case 10:
			printf("Muc 10: Tinh toan phan so                             \n");
			printf("Muc ban chon dang thu nghiem, xin cam on!!            \n");
			muc10();
			break;
		
		case 11:
			printf("Muc 11: Thoat                                         \n");
			printf("Chuong trinh da duoc thoat!!");
			exit(0);
			  //thoat ngay chuong trinh bang exit
			break;
		default: //Neu nguoi dung lua chon khong co trong muc luc
			printf("Muc ban chon khong co, vui long chon lai!\n");
			break;
		}
		}
	return 0;
}
