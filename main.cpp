#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char devam;

    do {
        // Rastgele sayı üretimi
        srand(time(0));
        int hedef = rand() % 100 + 1; // 1-100 arasında bir sayı
        int tahmin;

        cout << "1 ile 100 arasinda bir sayi tuttum bakalim tahmin edebilecek misin!" << endl;

        // Tahmin döngüsü
        while (true) {
            cout << "Tahminin nedir: ";
            cin >> tahmin;

            if (tahmin > hedef) {
                cout << "Daha kucuk bir sayi soyle!" << endl;
            }
            else if (tahmin < hedef) {
                cout << "Daha buyuk bir sayi soyle!" << endl;
            }
            else {
                cout << "Tebrikler dogru tahmin ettin!" << endl;
                break; // Doğru tahmin edildiğinde döngüden çık
            }
        }

        // Kullanıcıya tekrar oynamak isteyip istemediğini sor
        cout << "Tekrar oynamak ister misin? (e /h): ";
        cin >> devam;

    } while (devam == 'e' || devam == 'E');

    cout << "Oyunu oynadigin icin tesekkurler!" << endl;

    return 0;
}

