#include<stdio.h>
#include<stdlib.h>



int can , makscan , hasar , altin;
/*------Hero seçim ekranları------*/
int herosecim()
{
    int secim;
    printf("\n\n\n\n\t----------Kahraman Seçim Ekranı---------------------------\n");
    printf("1-)Okçu => Can : 60 , Hasar : 20\n\n");
    printf("2-)Barbar => Can : 100 , Hasar : 10\n\n");
    printf("3-)Goblin => Can : 40 , Hasar : 30\n\n");
    printf("Seçmek istediğiniz kahramanın sıra nosunu giriniz : \n\n\n\n");
    scanf("%d" , &secim);
    while (1)
    {
        if (secim==1)
        {
            printf("Okçu seçilmiştir ..");
            can = 60; 
            makscan = can;
            hasar = 20;
            altin = 0 ; 
            break;
        }
        else if (secim==2)
        {
            printf("Barbar seçilmiştir ..");
            can=100;
            makscan = can;
            hasar=10;
            altin = 0 ; 
            break; 
        }
        else if (secim==3)
        {
            printf("Goblin seçilmiştir ..");
            can=40;
            makscan = can;
            hasar=30;
            altin = 0 ; 
            break;
        }
    }
    return can, hasar , altin , makscan;
}

void herosecimmenu()
{
    while (1)
    {
        int secim;
        printf("\t \t\tOyuna Hoşgeldiniz \n");
        printf("\n\t----------------------------------------------------------\n");
        printf("\t\tKahraman Seçimi için '1' tuşuna basınız . \n");
        printf("\t\tOyundan çıkmak  için '0' tuşuna basınız . \n");
        scanf("%d" , &secim);
        if (secim == 1)
        {
            herosecim();
            break;
        }
        else if (secim == 0)
        {
            printf("Çıkış Yapılıyor..... \n\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            printf("Yanlış tuşlama yapıldı . Tekrar dene !! ");
        }
    }      
}

int MarketAlani()
{
    int secim,secim2 ; 
    printf("\n\n############################\n\n");
    printf("\n\n          Market Alanı      \n\n");
    printf("\n\n############################\n\n");
    printf("Altınınız : %d\n\n" , altin);
    printf("Savunma itemi seçmek için ==> 1 \n\n");
    printf("Saldırı itemi seçmek için ==> 2\n\n");
    printf("Menüye dönmek için ==> 0 \n\n"); 
    while (1)
    {
        printf("Gitmek istediğiniz seçeneğin numarasını yazınız : \n");
        scanf("%d" , &secim);
        if (secim == 0)
        {
            break;
        }
        else if (secim == 1)
        {
            //SAvunma itemleri ...
            printf("1-->Tahta Kalkan => +10 can ==> 20 Altın \n");
            printf("2-->Demir Kalkan => +20 can ==> 50 Altın\n");
            printf("3-->Altın Kalkan => +30 can ==> 70 Altın\n");
            printf("Seçmek istediğiniz itemin baş numarasını yazınız \n");
            while (1)
            {
                scanf("%d",&secim2);
                switch (secim2)
                {
                case  1:
                        if (altin>=20)
                        {
                            printf("Tahta kalkan alınmıştır");
                            printf("Eve gidip yeni canınızı güncelleyebilirsiniz !!\n");
                            makscan = makscan +10;
                            altin = altin -20;
                            printf("Canınız => %d", can);
                            printf("Altınınız => %d" , altin);
                            break;
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                    break;
                case 2:
                  if (altin>=50)
                        {
                            printf("Demir kalkan alınmıştır");
                            printf("Eve gidip yeni canınızı güncelleyebilirsiniz !!\n");
                            makscan = makscan + 20;
                            altin = altin - 50;
                            printf("Canınız => %d", can);
                            printf("Altınınız => %d" , altin);
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                    break;
                
                case 3:
                    if (altin>=70)
                        {
                            printf("Altın kalkan alınmıştır\n");
                            printf("Eve gidip yeni canınızı güncelleyebilirsiniz !!\n");
                            makscan = makscan + 30;
                            altin = altin - 70;
                            printf("Canınız => %d", can);
                            printf("Altınınız => %d" , altin);
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                
                    break;
                default:
                    printf("Yanlış tuşlama tekrar deneyiniz . ");
                    break;
                }
                break;
            }
            
            break;
        }
        else if (secim == 2)
        {
            //Saldırı itemleri 
            printf("1-->Tahta Bıçak => + 5 hasar ==> 20 Altın \n");
            printf("2-->Demir Bıçak => + 10 hasar ==> 50 Altın\n");
            printf("3-->Altın Bıçak => + 15 hasar ==> 70 Altın\n");
            printf("Seçmek istediğiniz itemin baş numarasını yazınız \n");
            while (1)
            {
                scanf("%d",&secim2);
                switch (secim2)
                {
                case  1:
                        if (altin>=20)
                        {
                            printf("Tahta Bıçak alınmıştır");
                            hasar = hasar +5;
                            altin = altin -20;
                            printf("Hasarınız => %d", hasar);
                            printf("Altınınız => %d" , altin);
                            break;
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                    break;
                case 2:
                  if (altin>=50)
                        {
                            printf("Demir Bıçak alınmıştır");
                            hasar = hasar + 10;
                            altin = altin - 50;
                            printf("Hasarınız => %d", hasar);
                            printf("Altınınız => %d" , altin);
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                    break;
                
                case 3:
                    if (altin>=70)
                        {
                            printf("Altın Bıçak alınmıştır\n");
                            hasar = hasar + 30;
                            altin = altin - 70;
                            printf("Hasarınız => %d", hasar);
                            printf("Altınınız => %d" , altin);
                        }
                        else{
                            printf("Yeterli altınınız bulunmamaktadır.");
                        }
                
                    break;
                default:
                    printf("Yanlış tuşlama tekrar deneyiniz . ");
                    break;
                }
                break;
            }
            break;
        }
        else
        {
            printf("Yanlış tuşlama yaptınız !!!");
        }
    }
    return makscan , altin;
}

int home(makscan)
{
    printf("\n\n############################\n\n");
    printf("\n\n          Ev Alani          \n\n");
    printf("\n\n############################\n\n");
    printf("Canınız : %d" , can);
    printf("Caniniz doluyor....\n\n"); 
    printf("Caniniz dolmustur , Caniniz ==> %d \n\n" , makscan);
    printf("Menüye dönüyorr......");
    can = makscan;
return can; 
}

int savas(hasar){
int secim ; 

    printf("\n\n############################\n\n");
    printf("\n\n          Savas Alanı        \n\n");
    printf("\n\n############################\n\n");
    int random = 1+rand()%3;
    int dusmancan = random * 20;
    int dusmanhasar = random *5 ; 
    printf("Karşınıza %d , canavar çıktı .\n" , random);
    printf("Düşmanlar canlarını ve hasarlarını birleştirdi !\n");
    printf("Düşman canları => %d \nDüşman hasarları => %d\n\n" , dusmancan , dusmanhasar);    
    printf("Savaşmak için 1 'e ,\nÇıkmak için 0'a basınız !! \n\n");
       
    while (1)
    {
        scanf("%d" , &secim);
        if (secim == 1)
        {
            break;
        }
        else if (secim==0)
        {
            //Menuye donucek
            printf("Çıkış Yapılıyor..... \n\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            printf("Yanlış tuşlama tekrar deneyin !!");
        }
    }
    
    printf("Düşman canları => %d \nDüşman hasarları => %d\n\n" , dusmancan , dusmanhasar);  
    printf("Canın => %d \nHasarın => %d\n\n" , can , hasar); 
    while (can>=0)
    {
          

        printf("Düşmanların vuruyor !!\n");
        can = can - dusmanhasar;
        printf("Canın => %d\n" , can);
        printf("Şimdi sıra sende !!\n\n");
        dusmancan = dusmancan - hasar;
        printf("Düşmanın canı => %d\n\n" , dusmancan);

        if (dusmancan<= 0)
        {
            altin = random * 5 +altin ; 
            break;
        }
        else if (can<= 0)
        {
            printf("Kaybettin !!!\n\n");
            printf("Çıkış Yapılıyor..... \n\n");
            exit(EXIT_SUCCESS);
        }
    }
    

    printf("Tebrikler Canavarları alt ettin \n");
    printf("Canın => %d kaldı . Evine dön !! \n" , can);
    printf("Karşılığında %d altın kazandın. \n" , altin);
    printf("Menüye yönlendiriliyosun !!");

  
    return altin , can;
  
}

int main(){
    herosecimmenu();
    while (1)
    {
        printf("\n\n\n\t \t Menüye Hoşgeldiniz \n");
        printf("\n\t----------------------------------------------------------\n");
        printf("1-) Savaş Alanı (Karşına rastgele canavarlar çıkıcak !!)\n\n");
        printf("2-) Market Alanı(Ekipman alabiliceğin alan)\n\n");
        printf("3-) EV (Can doldurma yeri )\n\n");
        printf("4-) Oyundan cıkmak için\n\n");
        printf("Seçmek istediğiniz alanın sıra nosunu giriniz : \n\n");

        while (1)
        {
            int cevap ; 
            scanf("%d" , &cevap);
            switch (cevap)
            {
            case  1 :
                savas(hasar);
                printf("Canın => %d\n" , can );
                printf("Altının => %d\n" ,altin );
                break;
            case  2 :
                    MarketAlani();
                break;
            case  3 :
                    home(makscan);
                    printf("Canın => %d" , can);
            //can ve maks can girecek içine 
                break;
            case  4 :
                printf("Çıkış Yapılıyor..... \n\n");
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Yanlıs tuslamaa");
                break;
            }
            break;
            
        }
    }
}