#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamaat belajar di Prodi TI UMY" << endl;
        throw 5; //melempaarkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch {
        
    }
}