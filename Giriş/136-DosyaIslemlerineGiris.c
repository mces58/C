/* bundan onceki tanimladigimiz degiskenler veya o degiskenlerin degerlerini ram de gecici olarak tutuyorduk
dolaysiyla bu tur konsol uygulamalarinda daha oncesinde yaptigimiz islemler ulasamiyorduk.

dosya islemleri ile biz yaptigimiz islemlere tekrardan ulasmak , onlar uzerinde degisiklikler yapmak vs 
islemler icin dosya islemlerinden faydalaniyoruz

FILE gostericisi bir veri tipidir. yani int float char gibi bir tiptir pointer ile calismaktadir

FILE = *dosya; gibi tanimlanir


dosyalarin acilmasi kapatilmasi

dosyalar uzerinde islem yapabilmemiz icin once dosyayi acmamiz gerekir dosyayi acmak icin fopen() kapatmak

icin fclose() fonksiyonunu kullaniriz

fopen() 'da dosya adinin yanina .txt koymazsan text olustrumaz kod yazdigin yerde acar programi
Dosya acma modlari

r = (read only), dosyanin acilabilmesi icin onceden olusturulmus olmasi gerekir.Bu modda acilmis olan dosyaya
yazma yapilamaz

w = (write only), dosya disktte kayitli olsun veya olmasin dosya yeniden olusturulur. Bu modda acilmis olan 
dosyadan okuma yapilamaz

a = (append), kayitli bir dosyanin sonuna veri eklemek icin acilir.Bu modda acilmis olan dosyadan okuma 
yapilmaz

r+ = Okuma ve yazma.Bu modda acilmis olan bir dosyanin daha once varolmasi gerekir

w+ = okuma ve yazma.Bu modda acilmis olan bir dosya var olsun veya olmasin dosya yeniden olusturulur

a+ = okuma ve yazma. Kayitli bir dosyanin sonuna veri eklemek icin acilir. 


dosyaya bilgi kaydetme

fputc = dosyaya bir karakter veri kaydeder

fputs = dosyaya bir karakter dizisi kaydeder

fwrite = dosyaya bir kayit , dizi veya karakter ikisi kaydeder.

fprintf = dosyaya bicimlendirilmis veri kaydeder.


dosyadan bilgi okuma

fgetc = dosyaya bir karakter veri okur

fgets = dosyaya bir karakter dizisi okur

fread = dosyaya bir kayit , dizi veya karakteri ikili olarak okur

fscanf = dosyadaki verileri bicimlendirerek okur.


dosya sonunun belirlenmesi = FEOF
  
dosyadan okuma islemleri yapilirken , cogu kez dosyanin sonunu denetlemek gerekir.dosya gostergesinin dosyanin
sonuna isaret edip etmedigini ablamak icin feof fonk. kullanilir. 
*/
