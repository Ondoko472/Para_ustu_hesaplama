#include <stdio.h>


int main() {
	
    double urun_tutari = 0.0;
    double odenen_para = 0.0;

    printf("Urun tutarini girin (TL): ");
    scanf("%lf", &urun_tutari);
    
    printf("Odenen parayi girin (TL): ");
    scanf("%lf", &odenen_para);
    
    int toplam_kurus = (int)((odenen_para - urun_tutari) * 100.0 + 0.5);
    
    int toplam_tl = toplam_kurus / 100;
    int kalan_kurus = toplam_kurus % 100;

    int tl_200 = toplam_kurus / 20000; toplam_kurus %= 20000;
    int tl_100 = toplam_kurus / 10000; toplam_kurus %= 10000;
    int tl_50  = toplam_kurus / 5000;  toplam_kurus %= 5000;
    int tl_20  = toplam_kurus / 2000;  toplam_kurus %= 2000;
    int tl_10  = toplam_kurus / 1000;  toplam_kurus %= 1000;
    int tl_5   = toplam_kurus / 500;   toplam_kurus %= 500;
    
    int tl_1   = toplam_kurus / 100;   toplam_kurus %= 100;
    int kr_50  = toplam_kurus / 50;    toplam_kurus %= 50;
    int kr_25  = toplam_kurus / 25;    toplam_kurus %= 25;
    int kr_10  = toplam_kurus / 10;    toplam_kurus %= 10;
    int kr_5   = toplam_kurus / 5;     toplam_kurus %= 5;
    int kr_1   = toplam_kurus / 1;     toplam_kurus %= 1;

    int toplam_kupur = tl_200 + tl_100 + tl_50 + tl_20 + tl_10 + tl_5 + tl_1  
    + kr_50 + kr_25 + kr_10 + kr_5 + kr_1;

    printf("\n    PARA USTU     \n");
    printf("200 TL'lik banknot: %d\n", tl_200);
    printf("100 TL'lik banknot: %d\n", tl_100);
    printf("50 TL'lik banknot: %d\n", tl_50);
    printf("20 TL'lik banknot: %d\n", tl_20);
    printf("10 TL'lik banknot: %d\n", tl_10);
    printf("5 TL'lik banknot: %d\n", tl_5);
    printf("1 TL'lik madeni para: %d\n", tl_1);
    printf("50 kurusluk madeni para: %d\n", kr_50);
    printf("25 kurusluk madeni para: %d\n", kr_25);
    printf("10 kurusluk madeni para: %d\n", kr_10);
    printf("5 kurusluk madeni para: %d\n", kr_5);
    printf("1 kurusluk madeni para: %d\n", kr_1);
    printf("Toplam Para Ustu: %d TL %d Kurus\n", toplam_tl, kalan_kurus);
    printf("                          \n");
    printf("Toplam Kupur Sayisi: %d\n", toplam_kupur);
   
    return 0;
}
