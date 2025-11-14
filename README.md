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
📌 QLabel / QPixmap İşlemleri
Metod	Kullanıldığı Yer	Açıklama	Örnek
setScaledContents(true)	QLabel	Pixmap’in label boyutuna uyum sağlamasını sağlar	label->setScaledContents(true);
setFrameShape(QFrame::Box)	QLabel	Widget’a çerçeve ekler	label->setFrameShape(QFrame::Box);
setPixmap(QPixmap(...))	QLabel	Label üzerine resim eklemek/değiştirmek	label->setPixmap(QPixmap(":/img/car.png"));
show()	Tüm widget’lar	Widget’i görünür yapar	label->show();
📌 Konum – Geometri İşlemleri
Metod	Açıklama	Örnek
geometry()	Konum + boyut bilgisi alır	label->geometry()
setGeometry(x,y,w,h)	Widget konum/boyut ayarı	ucak->setGeometry(x, y, 120, 80);
x(), y(), width(), height()	Konum ve boyut verilerini döner	if (ucak->x() + ucak->width() <= this->width())
📌 QVector – Liste Kullanımı
Amaç	Açıklama	Örnek
Widget’ları dizide saklamak	Balon, araba, düşman gibi çoklu obje yönetimi	QVector<QLabel*> balonlar;
📌 Rastgele Sayı (Random)
Metod	Açıklama	Örnek
QRandomGenerator::global()->bounded(n)	0..n-1 arası random sayı üretir	int r = QRandomGenerator::global()->bounded(5);
🖱️ Mouse Event’ler – Sürükleme / Taşıma
Event	Açıklama	Örnek
mousePressEvent(QMouseEvent *ev)	Tıklama başlangıcı	ilkKonum = ev->pos();
mouseMoveEvent(QMouseEvent *ev)	Sürükleme işlemi	setGeometry(ev->pos().x()-ilkKonum.x()+x(), ...);
🎯 Drag & Drop İşlemleri
Parça	Açıklama	Örnek
QDrag	Sürükleme başlatır	QDrag *drag = new QDrag(this);
QMimeData	Sürüklenen veriyi taşır	mime->setImageData(pixmap().toImage());
dragEnterEvent	Drop kabulü	event->accept();
dropEvent	Sürüklenen veri bırakıldığında çalışır	...
🔥 Çarpışma Kontrolü
Metod	Açıklama	Örnek
intersects()	İki widget çarpıştı mı?	if (ucak->geometry().intersects(balon->geometry()))
⌨️ LineEdit – TextEdit Kullanımı
Metod	Açıklama	Örnek
lineEdit->text()	Kullanıcıdan tek satırlı text almak	ui->lineEdit->text().toInt();
textEdit->setText()	TextEdit’e yazı yazdırmak	ui->textEdit->setText(veri);
textEdit->toPlainText()	Metni almak	QString x = ui->textEdit->toPlainText();
undo() / redo()	Geri al / ileri al	ui->textEdit->undo();
📂 Dosya Aç / Kaydet – QFileDialog
Metod	Açıklama	Örnek
getOpenFileName()	Dosya seçme	QString yol = QFileDialog::getOpenFileName(this);
getSaveFileName()	Yeni dosya kaydetme	QString yol = QFileDialog::getSaveFileName(this);
➕ QFile + QTextStream
Amaç	Örnek Kod
Dosya okuma/yazma	cpp QFile f(yol); f.open(QFile::ReadOnly); QTextStream ok(&f); QString veri = ok.readAll();
🎚️ Slider Kullanımı
Metod	Açıklama	Örnek
slider->value()	Hareket / hız / konum değeri almak	x += ui->horizontalSlider->value();
🔘 QPushButton
Event	Açıklama	Örnek
clicked()	Tıklama olayı	on_pushButton_clicked();
pressed() / released()	Basılınca şekil değiştirmek	setGeometry(x-15, y-15, 60, 60);
✔️ Kullanışlı Bir Özet (Kısa Liste)

QLabel görüntü: setPixmap, setScaledContents

Geometri: setGeometry, x()/y(), width()/height()

Çarpışma: intersects()

Random: bounded()

Drag-drop: QDrag, QMimeData

Dosya aç/kaydet: QFileDialog

Mouse drag: mousePressEvent, mouseMoveEvent

TextEdit: setText, toPlainText, undo

Slider: value()

Buton: clicked, pressed, released

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
