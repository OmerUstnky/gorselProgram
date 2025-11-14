# gorselProgram

1️⃣ QLabel
•	Ne işe yarar:
o	Metin veya resim göstermek için kullanılır.
o	Örnek: bir resim (uçak, araba, balon) veya yazı göstermek.
•	Önemli metodlar:
o	setText("Merhaba") → yazı gösterir
o	setPixmap(QPixmap(":/img/image.png")) → resim gösterir
o	setScaledContents(true) → QLabel boyutuna göre resmi ölçekler
________________________________________
2️⃣ QPushButton
•	Ne işe yarar:
o	Kullanıcının tıklayabileceği buton.
o	Örnek: “Yukarı”, “Aşağı”, “Başlat” gibi butonlar.
•	Önemli metodlar:
o	clicked() → tıklanma olayını yakalar
•	Sınavda soru tarzı:
o	“Butona tıklandığında QLabel konumunu değiştiriniz.”
________________________________________
3️⃣ QSlider / QHorizontalSlider / QVerticalSlider
•	Ne işe yarar:
o	Kullanıcının bir değeri kaydırarak seçmesini sağlar.
o	Örnek: hız kontrolü, boyut kontrolü.
•	Önemli metodlar:
o	value() → şu anki slider değerini döndürür
•	Sınavda soru tarzı:
o	“Slider değerine göre QLabel konumunu değiştiriniz.”
________________________________________
4️⃣ Mouse Click / Mouse Event
•	Ne işe yarar:
o	Pencere veya widget üzerinde fare tıklamasını yakalamak.
•	Önemli metodlar:
o	mousePressEvent(QMouseEvent *event) → mouse tıklamasını yakalar
o	event->pos() → tıklanan noktayı verir
•	Örnek:
•	void MainWindow::mousePressEvent(QMouseEvent *event) {
•	    int x = event->x();
•	    int y = event->y();
•	    label->move(x, y); // QLabel mouse tıklanan yere taşınır
•	}
________________________________________
5️⃣ Key Press / Klavye Event
•	Ne işe yarar:
o	Kullanıcının klavye tuşuna basmasını yakalar.
•	Önemli metodlar:
o	keyPressEvent(QKeyEvent *event)
o	event->key() ile hangi tuş basıldığını alabilirsin
•	Sınavda örnek:
o	Ok tuşları ile QLabel’i hareket ettirme
________________________________________
6️⃣ Geometry ve Position
•	Ne işe yarar:
o	Widget’in konumu ve boyutu ile ilgilenir.
•	Önemli metodlar:
o	widget->x() / widget->y() → widget’in sol üst koordinatı
o	widget->width() / widget->height() → boyut
o	widget->setGeometry(x, y, w, h) → konum ve boyut ayarlama
________________________________________
7️⃣ intersects (QRect)
•	Ne işe yarar:
o	İki dikdörtgenin çarpışıp çarpışmadığını kontrol eder.
•	Örnek:
•	if(label1->geometry().intersects(label2->geometry())) {
•	    label2->hide(); // çarpıştı, gizle
•	}
•	Sınavda soru tarzı:
o	“Uçak balona çarptığında balonu gizleyin.”
________________________________________
8️⃣ hide() / show()
•	Ne işe yarar:
o	Widget’i görünür/görünmez yapar
•	Örnek:
•	label->hide(); // kaybolur
•	label->show(); // görünür
________________________________________
9️⃣ QTimer
•	Ne işe yarar:
o	Belirli aralıklarla işlem tekrarlamak için
•	Örnek:
o	Balonları her 1 saniyede aşağıya hareket ettirmek
•	Kısa kullanım:
•	QTimer *timer = new QTimer(this);
•	connect(timer, &QTimer::timeout, this, &MainWindow::updatePositions);
•	timer->start(1000); // 1 saniye
________________________________________
🔟 Mouse / Click ile QLabel taşımak
•	Mantık:
o	Mouse’a tıklanınca QLabel’in x ve y değerini güncelle
o	mousePressEvent kullanılır
•	Örnek:
•	void MainWindow::mousePressEvent(QMouseEvent *event) {
•	    label->move(event->pos());
•	}
________________________________________
🔹 Sınavda çıkabilecek kombinasyonlar
Widget/Fonksiyon	Kullanım Örneği
QPushButton	QLabel’i hareket ettir, çarpışmayı kontrol et
QSlider	Hız veya mesafe ayarı, QLabel konumu
QLabel	Görsel göstermek, çarpışma hedefi
geometry()	Çarpışma ve sınır kontrolü
intersects()	Çarpışma algılama
hide()/show()	Nesneyi gizleme/gösterme
mousePressEvent	Nesneyi mouse ile hareket ettirme
keyPressEvent	Ok tuşları ile hareket ettirme
QTimer	Nesneleri otomatik hareket ettirme







📝 Qt Sınav Notu – Tüm Örnekler Üzerinden
Metod / Özellik	Nerede Kullanıldı	Ne İşe Yarar	Örnek
setScaledContents(true)	QLabel/etiket/plane/balon	Pixmap boyutunu widget boyutuna uyarlar	label->setScaledContents(true);
setFrameShape(QFrame::Box)	QLabel/etiket/plane/balon	Widget’in çerçeve şeklini belirler	label->setFrameShape(QFrame::Box);
show()	Tüm QLabel’ler	Widget’in görünmesini sağlar	label->show();
setPixmap(QPixmap(...))	QLabel/etiket/plane/balon	Widget üzerinde resim gösterir veya değiştirir	label->setPixmap(QPixmap(":/img/car.png"));
geometry() / setGeometry(x,y,w,h)	Tüm hareketli widget’lar	Widget’in konum ve boyutunu alır veya ayarlar	ucak->setGeometry(konumX, konumY, 120, 80);
x(), y(), width(), height()	Tüm widget’lar	Konum ve boyut bilgisi alır	if(ucak->x() + ucak->width() <= this->width())
QVector	Balon, etiket dizileri	Widget’ları dizi / vector ile saklamak	QVector<baloon*> balonlar;
QRandomGenerator::global()->bounded(n)	Rastgele resim seçimi	0..n-1 arası rastgele sayı üretir	int r = QRandomGenerator::global()->bounded(5);
mousePressEvent(QMouseEvent*)	Etiket sürükleme	Mouse tıklamasını yakalar	ilkKonum = ev->pos();
mouseMoveEvent(QMouseEvent*)	Etiket sürükleme / taşınma	Mouse ile sürükleme olaylarını yakalar	setGeometry(ev->pos().x()-ilkKonum.x()+x(), ...)
QDrag	Drag & drop	Widget sürükleme işlemini başlatır	QDrag *drag = new QDrag(this); drag->exec(Qt::MoveAction);
QMimeData	Drag & drop	Sürüklenen veri (resim/dosya) taşır	QMimeData *data = new QMimeData(); data->setImageData(pixmap().toImage());
dragEnterEvent(QDragEnterEvent*)	Drag & drop	Drop event kabulü	event->accept();
dropEvent(QDropEvent*)	Drag & drop	Sürüklenen veri bırakıldığında çalışır	if (ucak->geometry().intersects(balon->geometry())) { ... }
intersects()	Çarpışma kontrolü	İki widget çarpıştı mı kontrol eder	if(ucak->geometry().intersects(balonlar[i]->geometry()))
lineEdit->text()	Text giriş	Kullanıcıdan veri almak	ui->lineEdit->text().toInt();
QTextEdit->setText()/toPlainText()	Çok satırlı metin	TextEdit’e yazı yazdırmak / almak	ui->textEdit->setText(okunan);
QFileDialog::getOpenFileName()	Dosya açma	Kullanıcıdan dosya seçmek	QString yol = QFileDialog::getOpenFileName(this, ...);
QFileDialog::getSaveFileName()	Farklı kaydet	Kullanıcıdan kaydetme yolu almak	QString yol = QFileDialog::getSaveFileName(this, ...);
QFile + QTextStream	Dosya işlemleri	Dosya aç, oku, yaz	QFile dosya(yol); dosya.open(QFile::ReadOnly); QTextStream ok(&dosya); ok.readAll();
redo() / undo()	TextEdit	Geri / ileri işlemi	ui->textEdit->undo(); ui->textEdit->redo();
QSlider->value()	Slider ile hareket	Hareket veya değer artırma	x += ui->horizontalSlider->value();
QPushButton->clicked()	Buton tıklaması	İşlem tetikleme	on_pushButton_clicked()
QPushButton->pressed() / released()	Buton basılma	Buton basıldığında boyut değiştirme	setGeometry(x-15, y-15, 60, 60);

1️⃣ QMessageBox
QMessageBox, kullanıcıya uyarı, bilgi, soru veya hata mesajı göstermek için kullanılır.
Basit bir örnek:
#include <QMessageBox>

// Örnek: Bilgi mesajı
QMessageBox::information(this, "Başlık", "İşlem başarılı!");
•	this → Mesaj kutusunun ait olduğu pencere
•	"Başlık" → Kutunun üst kısmındaki başlık
•	"İçerik" → Kutuda gözükecek yazı
Diğer mesaj tipleri:
•	QMessageBox::warning(this, "Başlık", "Uyarı mesajı"); → Sarı uyarı kutusu
•	QMessageBox::critical(this, "Başlık", "Hata oluştu"); → Kırmızı hata kutusu
•	QMessageBox::question(this, "Başlık", "Devam edilsin mi?"); → Soru kutusu, Yes/No butonlarıyla
________________________________________
2️⃣ move()
move() bir widget’in pozisyonunu değiştirmek için kullanılır.
QLabel *araba = new QLabel(this);
araba->setGeometry(100, 100, 50, 50);
araba->show();

// X ekseninde 10 piksel sağa taşı
araba->move(araba->x() + 10, araba->y());
•	move(x, y) → widget’i (x, y) koordinatına taşır
•	x() → widget’in mevcut X koordinatı
•	y() → widget’in mevcut Y koordinatı
💡 Örnek kullanım:
•	Araba veya topu buton/slider ile hareket ettirmek
•	Klavye ile nesneyi sağa/sola kaydırmak
________________________________________
Kısaca özetlersek:
Komut	Ne İşe Yarar
QMessageBox::information(...)	Kullanıcıya bilgi/uyarı mesajı gösterir
move(x, y)	Widget’in ekran üzerindeki pozisyonunu değiştirir


1️⃣ Rastgele sayı üretme (0-4 arası)
#include <QRandomGenerator>
#include <QDebug>

int rastgele = QRandomGenerator::global()->bounded(5); // 0,1,2,3,4
qDebug() << "Rastgele sayı:" << rastgele;
________________________________________
2️⃣ Rastgele resim seçimi ve QLabel’e koyma
void Etiket::mousePressEvent(QMouseEvent *event)
{
    // 5 tane resim var: 0.png, 1.png, 2.png, 3.png, 4.png
    int r = QRandomGenerator::global()->bounded(5); // 0-4 arası sayı
    setPixmap(QPixmap(":/res/resimler/" + QString::number(r) + ".png"));
}
•	QRandomGenerator::global()->bounded(n) → 0..(n-1) arasında sayı üretir.
•	QString::number(r) → sayıyı stringe çevirir.
•	":/res/resimler/0.png" gibi Qt Resource kullanımıyla resim yüklenir.
________________________________________
3️⃣ Random sayı ile oyun mantığı
Örneğin balon patlatma oyunu:
void MainWindow::ucakBalonCarpisma()
{
    for(int i=0; i<balonlar.size(); ++i){
        if(ucak->geometry().intersects(balonlar[i]->geometry())){
            balonlar[i]->hide();

            // Her patlayan balon için rastgele puan
            int puan = QRandomGenerator::global()->bounded(10, 51); // 10-50 arası
            toplamPuan += puan;
            ui->labelPuan->setText("Puan: " + QString::number(toplamPuan));
        }
    }
}
•	Bu şekilde hem rastgele sayı hem de oyun mantığı bir arada oluyor.

Rastgele resim atama 
QVector<QString> resimler = {
    ":/res/resimler/0.png",
    ":/res/resimler/1.png",
    ":/res/resimler/2.png",
    ":/res/resimler/3.png",
    ":/res/resimler/4.png"
};

// Shuffle
std::shuffle(resimler.begin(), resimler.end(), QRandomGenerator::global()->generate());

// QLabel’lere sırayla ata
for(int i=0; i<labels.size(); ++i){
    labels[i]->setPixmap(QPixmap(resimler[i]));
}



SEPET TOP TOPLAMA OYUNU 
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QRandomGenerator>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Sepet oluştur
    mySepet = new sepet(this);
    mySepet->setGeometry(250, 400, 150, 80);
    mySepet->show();

    // Toplar oluştur
    createToplar();

    // Timer ile topları düşür
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateToplar);
    timer->start(50);

    ui->labelPuan->setText("Puan: 0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createToplar()
{
    for (int i = 0; i < 5; ++i) {
        top *t = new top(this);
        int x = QRandomGenerator::global()->bounded(50, 500);
        t->setGeometry(x, 0, 50, 50);
        t->show();
        toplar.append(t);
    }
}

void MainWindow::updateToplar()
{
    for (int i = 0; i < toplar.size(); ++i) {
        top* t = toplar[i];
        t->move(t->x(), t->y() + t->hiz); // düşüş hızı

        // Sepet ile çarpışma
        checkCarpisma(t);

        // Ekranın altına ulaşınca başa al
        if (t->y() > height()) {
            t->move(QRandomGenerator::global()->bounded(50, 500), 0);
        }
    }
}

void MainWindow::checkCarpisma(top* t)
{
    if (t->geometry().intersects(mySepet->geometry()) && t->isVisible()) {
        t->move(QRandomGenerator::global()->bounded(50, 500), 0);
        int puan = QRandomGenerator::global()->bounded(10, 51); // 10-50 arası
        toplamPuan += puan;
        ui->labelPuan->setText("Puan: " + QString::number(toplamPuan));
    }
}

// Slider ile sepet hareketi
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    int newX = value;
    if (newX < 0) newX = 0;
    if (newX + mySepet->width() > width()) newX = width() - mySepet->width();
    mySepet->move(newX, mySepet->y());
}







