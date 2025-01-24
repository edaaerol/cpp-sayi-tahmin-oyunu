#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char devam;

    do {
        // Rastgele say� �retimi
        srand(time(0));
        int hedef = rand() % 100 + 1; // 1-100 aras�nda bir say�
        int tahmin;

        cout << "1 ile 100 arasinda bir sayi tuttum bakalim tahmin edebilecek misin!" << endl;

        // Tahmin d�ng�s�
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
                break; // Do�ru tahmin edildi�inde d�ng�den ��k
            }
        }

        // Kullan�c�ya tekrar oynamak isteyip istemedi�ini sor
        cout << "Tekrar oynamak ister misin? (e /h): ";
        cin >> devam;

    } while (devam == 'e' || devam == 'E');

    cout << "Oyunu oynadigin icin tesekkurler!" << endl;

    return 0;
}

