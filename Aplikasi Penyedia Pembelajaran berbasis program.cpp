#include <iostream>
#include <ctime>  //untuk penganggalan 
using namespace std;

int main() {
    // Aplikasi penyedia pembelajaran berbasis program
    // untuk tingkat sekolah
    int pilihan;
    bool lanjut = true;
    while (lanjut) {
        cout <<"--------------------------------------Students Learning System------------------------------------------------"<<endl;
        cout << endl;

        time_t sekarang = time(0);  // Mendapatkan waktu sekarang dalam detik sejak epoch (1970-01-01)
        tm *ltm = localtime(&sekarang);  // Mengonversi waktu menjadi struct tm yang menyimpan tanggal dan waktu dalam format yang bisa dipahami

        // Menampilkan tanggal dengan format: YYYY-MM-DD
        cout<<"Tanggal: ";
        cout<< 1900 + ltm->tm_year<< "-";  // Tahun dimulai dari 1900
        cout<< 1 + ltm->tm_mon<< "-";      // Bulan dimulai dari 0, jadi kita tambahkan 1
        cout<< ltm->tm_mday<<endl;

        // Menampilkan waktu dengan format: HH:MM:SS
        cout<<"Waktu saat ini: ";
        cout<<ltm->tm_hour<< ":";    // Jam (0-23)
        cout<<ltm->tm_min<< ":";     // Menit (0-59)
        cout<<ltm->tm_sec<<" WIT"<<endl;

        cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                             H O M E                                                          "<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"1. Beranda        2. Penerimaan Siswa Baru      3. Sumber Daya Manusia        4. Jurnal         5. Kontak Kami"<<endl;
        cout<<endl;

        int pilihanmenu; // untuk menu beranda
        string statusmenu; // untuk menu beranda

        // untuk bagian Penerimaan Siswa Baru
        string kategoripendaftaran[3] = { "SD/MI", "SMP/MTs", "SMA/SMK/MAN" };
        string daftar;
        string sekolah;
        string namalengkapsiswa;
        int usiasiswa;
        string agamasiswa;
        string domisilisiswa;
        string asalsekolahsiswa;
        bool statuspendaftaran;

        // Bagian untuk Penerimaan Siswa Baru (Daftar / Seleksi)
        string jalurpendaftaran[2] = { "Reguler", "Prestasi" };
        string jenis_prestasi [5] ={"Beladiri","Akademik","Atletik","Predikat","Lainnya"};
        string prestasi;  //untuk kategori jalur pendaftaran prestasi
        string statusprestasi;
        string pilihjalur;
        int nomorpendaftaran [5] = {112, 311, 455, 324, 190};
		int nomorseleksi;
        string jadwal_seleksi [5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
        bool statusseleksi;

        // untuk bagian biro sumber daya manusia
        string informasisdm[5] = { "Beranda", "Unit Kegiatan Siswa", "Ujian", "Tugas-Tugas", "Kehadiran" };
        string sumberdayamanusia;
        string layanansdm;
        int unitkegiatansiswa;
        bool statussdm;

        cout<<"Masukkan Pilihan Menu : ";
        cin>>pilihanmenu;

        switch (pilihanmenu) {
            case 1:
                statusmenu = "1. Beranda";
                cout<<"Status Menu = "<<statusmenu<<endl;

                cout<<"---------------------------------------Students Learning System----------------------------------------------"<<endl;
                cout<<"                                            B E R A N D A                                                    "<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;

                cout<<"# Penerimaan Siswa Baru : "<<endl;
                cout<<"  + Penerimaan Siswa Baru Tahun Ajaran 2024/2025 Telah Dibuka."<<endl;

                cout<<"# Sumber Daya Manusia : "<<endl;
                cout<<"  + Pemberdayaan Sumber Daya Manusia di Lingkungan Akademik Kini Hadir Melalui Modul SiPintar"<<endl;
                cout<<"  + Penjaringan Bakat dan Potensi Siswa Baru Dilaksanakan Pada Awal Masuk Sekolah Guna Mengembangkan Potensi Siswa"<<endl;

                cout<<"# Kontak Kami : "<<endl;
                cout<<"  + Telepon : 11223344"<<endl;
                cout<<"  + Email   : studenslearningsystem@gmail.com"<<endl;
                cout<<"  + WhatsApp: StudentsSYS - 09090909"<<endl;

                cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
                break;

            case 2:
                statusmenu = "2. Penerimaan Siswa Baru";
                cout<<"Status Menu = "<<statusmenu<<endl;
                cout<<"-------------------------------------Students Learning System-----------------------------------------------"<<endl;
                cout<<"                                      PENERIMAAN  SISWA  BARU                                               "<<endl;
                cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

                for (int a = 0; a < 3; a++) {
                    cout<<"Kategori Pendaftaran ke"<<a<<" adalah "<<kategoripendaftaran[a]<<endl; // menampilkan semua kategori pendaftaran
                }
                
                cout<<"TELAH DIBUKA PENDAFTARAN VIA JALUR REGULER DAN PRESTASI UNTUK PESERTA DIDIK BARU :"<<endl;
                cout<<endl;
                
                for(int b = 0; b < 2; b++){
                	cout<<"Pendaftaran Jalur Seleksi ke "<<b<<" = "<<jalurpendaftaran[b]<<endl;  //menampilkan seluruh kategori jalur pendaftaran
				}
				
                cout<<"Apakah Anda Ingin Mendaftar (y/n): ";
                cin>>daftar;

                if (daftar == "y") {
                    cout << "Catatan : Masukkan Nama Tingkatan Sekolah Pada Menu Kategori Pendaftaran" << endl;
                    cout << "Contoh  : SD/MI" << endl;
                    cout << "          SMP/MTs" << endl;
                    cout << "          SMA/SMK/MAN" << endl;
                    cout << "------------------------------------------------------------------------" << endl;

                    cout << "ANDA MENDAFTAR PENERIMAAN SISWA BARU" << endl;
                    cout << "Masukkan Kategori Pendaftaran Siswa : ";
                    cin >> daftar;
                    cout << "Sekolah Negeri / Swasta (Muslim)    : ";
                    cin >> sekolah;
                    cout<<" Jalur Pendaftaran Siswa Baru         : ";
                    cin>>pilihjalur;

                    if (daftar == kategoripendaftaran[0]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[0]<<endl;
                        statuspendaftaran = true;
                        if (sekolah == "Negeri") {
                            cout<<"Sekolah Negeri"<<endl;
                            cout<<"------------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SD/MI)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // kategori jalur pendaftaran reguler
                                
                                cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int c = 0; c < 5; c++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[c]<<endl;
								}   
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							
							cout<<"-------------------------------------JALUR PRESTASI---------------------------------------------"<<endl;	
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // kategori jalur pendaftaran prestasi
                                cout<<endl;
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int d = 0; d < 10; d++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[d]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int e = 0; e < 5; e++) {
    								cout<<(e + 1)<< ". "<<jenis_prestasi[e]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
							
                       cout<<endl;
					   cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
					   cout<<"                                    TINGKAT SD (SWASTA)                                                     "<<endl;
					        
                        } else if (sekolah == "Swasta") {
                            cout<<"Sekolah Swasta (Muslim)"<<endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SD/MI)"<<endl;
                            statuspendaftaran = true;
						
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl; // reguler
                            	//untuk reguler kategori Swasta SD/MI
                           		cout<<"------------------------------JALUR REGULER (SWASTA)--------------------------------------------"<<endl;
                           		
                            	cout<<"Nomor Pendaftaran Swasta (SD/MI) Reguler : "<<endl; //menampilkan nomor pendaftaran SD/MI reguler
                           		for (int f = 0; f < 10; f++){
                            	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[f]<<endl;
							  }
                            	cout<<endl;
                            	cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}	
                                break;
                                
                                  
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl; // prestasi
                            	//untuk prestasi kategori swasta SD/MI
                            	 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int d = 0; d < 10; d++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[d]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int e = 0; e < 5; e++) {
    								cout<<(e + 1)<< ". "<<jenis_prestasi[e]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;
                        

                        //----------------------------------------------------------S M P---------------------------------------------------------------------------------------//
                    } else if (daftar == kategoripendaftaran[1]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[1]<<endl;

                        if (sekolah == "Negeri") {  // Pilihan kategori SMP Negeri
                            cout<<"Sekolah Negeri"<<endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMP/MTs)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                
                                cout<<"Sekolah Negeri"<<endl;
                            cout<<"------------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMP/MTS)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // kategori jalur pendaftaran reguler
                                
                                cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int f = 0; f < 5; f++){  //bagian untuk menampilkan nomor pendaftaran kategori SMP/MTS Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[f]<<endl;
								}   
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							
							cout<<"-------------------------------------JALUR PRESTASI---------------------------------------------"<<endl;	
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // kategori jalur pendaftaran prestasi
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int g = 0; g < 10; g++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[g]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int h = 0; h < 5; h++) {
    								cout<<(h + 1)<< ". "<<jenis_prestasi[h]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
							
							
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                            }
                        } else if (sekolah == "Swasta") {  // Pilihan kategori SMP Swasta
                            cout<<"Sekolah Swasta (Muslim)" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SMP/MTs)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                
                                 cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int i = 0; i < 5; i++){  //bagian untuk menampilkan nomor pendaftaran kategori SMP/MTS Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[i]<<endl;
								}   
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							
							
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                
                                 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int j = 0; j < 10; j++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[j]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int k = 0; k < 5; k++) {
    								cout<<(k + 1)<< ". "<<jenis_prestasi[k]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
							
							
							
					//---------------------------------------------------SMA---------------------------------------------------------------------//
					
                    } else if (daftar == kategoripendaftaran[2]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[2]<<endl;

                        if (sekolah == "Negeri") {  // Pilihan kategori SMA Negeri
                            cout<<"Sekolah Negeri" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMA/SMK/MAN)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                
                                 cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int l = 0; l < 5; l++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[l]<<endl;
								}   
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
                                
                                
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int m = 0; m < 10; m++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[m]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int n = 0; n < 5; n++) {
    								cout<<(n + 1)<< ". "<<jenis_prestasi[n]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
                            }
                            
                            
                        } else if (sekolah == "Swasta") {  // Pilihan kategori SMA Swasta
                            cout<<"Sekolah Swasta (Muslim)" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SMA/SMK/MAN)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int o = 0; o < 5; o++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[o]<<endl;
								}   
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                
                                 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int p = 0; p < 10; p++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[p]<<endl;
								}
								
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                            	
                            	
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int q = 0; q < 5; q++) {
    								cout<<(q + 1)<< ". "<<jenis_prestasi[q]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							

								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;

								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	

                    
                	} else {
                    	cout<<"Tidak ada pendaftaran yang dilakukan."<<endl;
                	}
                	break;
            	}

            }else{
                cout <<"Pilihan tidak valid, silakan pilih menu yang tersedia."<<endl;
                break;
        	}
        }
    }

        // Menanyakan apakah ingin melanjutkan atau keluar
        char jawaban;
        cout<<"Apakah Anda ingin melanjutkan (y/n)? ";
        cin>>jawaban;

        if (jawaban == 'n' || jawaban == 'N') {
            lanjut = false;
        }

    cout<<"Terima kasih telah menggunakan Students Learning System!"<<endl;
    
    return 0;
}

}
