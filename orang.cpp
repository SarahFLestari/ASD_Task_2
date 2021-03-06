/**
    KELAS     : IF 39-06
    KELOMPOK  : 6
    NAMA(NIM) : [Sarah Fauziah Lestari][1301154552] , [Surya Fachri Idris Nasution][1301154230] , [nama][nim]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //=================================================
    // YOUR CODE STARTS HERE
    org.nama = nama;
    org.tgl_lahir = create_tanggal(tgl,bln,thn);

    // YOUR CODE ENDS HERE
    //=================================================
    return org;
}

int hitung_umur(orang org) {
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
    // YOUR CODE STARTS HERE
    umur = 2016 - org.tgl_lahir.yy;
    // YOUR CODE ENDS HERE
    //=================================================
    return umur;
}

void show_orang(orang org) {
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Nama                           : "<< org.nama << endl;
    cout <<"Tanggal Lahir                  : ";
    show_tanggal(org.tgl_lahir);
    cout <<"Umur                           : "<< hitung_umur(org)<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
