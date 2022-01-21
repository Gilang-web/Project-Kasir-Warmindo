/*
 * Demo aplikasi kasir
 * Kasir Warmindo IF 02
 */

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;



string namabarang[50];
int hargabarang[50], jumlahbarang[50], totalhargabarang[50], fixtotal = 0;
string pilihan;
int flagarray = 0;
long int bayar;



int main()
{
    // BIKIN VARIABEL
    string userInput, setPassword;

    // SET PASSWORD
    setPassword = "123456789";

    cout << "Type a Password: ";
    // MASUKIN PASSWORD DARI USER ATAU PENGGUNA
    cin >> userInput;

    // CHECK LOGIN
    if (userInput == setPassword) {

        int choice, jml_barang, harga, total;

        string item;
    menu:
        cout << "                   APLIKASI KASIR BERSAMA                    " << endl;
        cout << "                    WARMINDO AMIKOM IF 2                     " << endl;
        cout << "=============================================================" << endl;
        cout << "=============================================================" << endl;
        cout << "                     LIST HARGA MAKANAN                      " << endl;
        cout << "=============================================================" << endl;
        cout << "         [1]. ORAK ARIK                        RP 9.000      " << endl;
        cout << "         [2]. INDOMIE TELUR                    RP 10.000     " << endl;
        cout << "         [3]. MAGELANGAN                       RP 12.500     " << endl;
        cout << "         [4]. MIE DOK DOK                      RP 11.000     " << endl;
        cout << "         [5]. NASI SAYUR                       RP 7.000      " << endl;
        cout << "         [6]. TONGSENG                         RP 13.000     " << endl;
        cout << "         [7]. SELESAI                                        " << endl;
        cout << "=============================================================" << endl;
        cout << "=============================================================" << endl << endl;

        do {
            cout << "MASUKKAN NOMOR MAKANAN : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                item = "ORAK ARIK";
                harga = 9000;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
            prosessing:
                namabarang[flagarray] = item;
                jumlahbarang[flagarray] = jml_barang;
                hargabarang[flagarray] = harga;
                totalhargabarang[flagarray] = total;
                fixtotal = fixtotal + totalhargabarang[flagarray];
                flagarray++;
                cout << "Apakah Anda Ingin Tambah Pembelian Barang (Ya/Tidak) :"; cin >> pilihan;
                if (pilihan == "YA" || pilihan == "yA" || pilihan == "Ya" || pilihan == "ya")
                {
                    goto menu;
                }
                else {
                    goto pembayaran;
                }
                break;
            case 2:
                item = "INDOMIE TELUR";
                harga = 10000;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
                goto prosessing;
                break;
            case 3:
                item = "MAGELANGAN";
                harga = 12500;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
                goto prosessing;
                break;
            case 4:
                item = "MIE DOK DOK";
                harga = 11000;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
                goto prosessing;
                break;
            case 5:
                item = "NASI SAYUR";
                harga = 7000;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
                goto prosessing;
                break;
            case 6:
                item = "TONGSENG";
                harga = 13000;
                cout << "MASUKKAN JUMLAH MAKANAN : ";
                cin >> jml_barang;
                total = harga * jml_barang;
                cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
                goto prosessing;
                break;
            default:
                cout << "PILIHAN ANDA SALAH BOS !!!" << endl << endl;
                break;
            }

        } while (choice > 6);

    pembayaran:
        cout << "DETAIL PEMBAYARAN MAKANAN" << endl;
        for (int y = 0; y < 78; ++y)
        {
            cout << "-";
            if (y == 77)
            {
                cout << endl;
            }
        }

        cout << "|" << setw(2) << "NO" << "|" << setw(15) << "NAMA MAKANAN" << "|" << setw(15) << "JUMLAH MAKANAN" << "|" << setw(15) << "HARGA MAKANAN" << "|" << setw(25) << "TOTAL" << "|" << endl;

        for (int y = 0; y < 78; ++y)
        {
            cout << "-";
            if (y == 77)
            {
                cout << endl;
            }
        }

        int z = 1;
        for (int x = 0; x < 50; ++x)
        {

            if (namabarang[x] != "")
            {
                cout << "|" << setw(2) << z << "|" << setw(15) << namabarang[x] << "|" << setw(15) << jumlahbarang[x] << "|" << setw(15) << hargabarang[x] << "|" << setw(25) << totalhargabarang[x] << "|" << endl;
                z++;
            }
            else {
                break;
            }
        }


        for (int y = 0; y < 78; ++y)
        {
            cout << "-";
            if (y == 77)
            {
                cout << endl;
            }
        }

        cout << "|TOTAl HARGA TRANSAKSI :" << setw(53) << fixtotal << "|" << endl;

        for (int y = 0; y < 78; ++y)
        {
            cout << "-";
            if (y == 77)
            {
                cout << endl;
            }
        }

        cout << "Masukkan Nominal Uang Yang Ingin Di Bayarkan : Rp."; cin >> bayar;
        if (bayar >= fixtotal)
        {
            string pilih;
            cout << "UANG Kembalian : Rp." << bayar - fixtotal << endl;
            cout << "Ingin Menggunakan Program Lagi (Ya/Tidak) :"; cin >> pilih;
            if (pilih == "YA" || pilih == "yA" || pilih == "Ya" || pilih == "ya")
            {
                goto menu;
            }
            else {
            end:
                cout << "TERIMA KASIH TELAH MEMBELI" << endl;
            }
        }
        else {
            string kurang;
            cout << "Nominal uang yang DI Masukkan Kurang!" << endl;
            cout << "Apakah Ingin Bayar Ulang (Ya/Tidak) :"; cin >> kurang;
            if (kurang == "YA" || kurang == "yA" || kurang == "Ya" || kurang == "ya")
            {
                goto pembayaran;
            }
            else {
                goto menu;
            }
        }
    }
    else {
        cout << "Password Salah!";
    }

    return 0;
}