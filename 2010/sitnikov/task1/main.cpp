#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFrame>
#include <QComboBox>
#include <QDateEdit>


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QDialog d(0);
	QVBoxLayout *gl = new QVBoxLayout(&d);

	QFormLayout *lay = new QFormLayout(&d);
	lay->setWidget(0, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("���: "), &d));
	lay->setWidget(0, QFormLayout::FieldRole, new QLineEdit(&d));

	lay->setWidget(1, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("�������: "), &d));
	lay->setWidget(1, QFormLayout::FieldRole, new QLineEdit(&d));

	lay->setWidget(2, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("��������: "), &d));
	lay->setWidget(2, QFormLayout::FieldRole, new QLineEdit(&d));
	gl->addLayout(lay);

	QFrame *line = new QFrame(&d);
	line->setFrameShape(QFrame::HLine);
	line->setFrameShadow(QFrame::Sunken);
	gl->addWidget(line);

	lay = new QFormLayout(&d);
	QComboBox *cbox = new QComboBox(&d);
	cbox->insertItem(0, QString::fromLocal8Bit("�������"));
	cbox->insertItem(1, QString::fromLocal8Bit("�������"));
	lay->setWidget(0, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("���: "), &d));
	lay->setWidget(0, QFormLayout::FieldRole, cbox);

	lay->setWidget(1, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("���� ��������: "), &d));
	lay->setWidget(1, QFormLayout::FieldRole, new QDateEdit(&d));
	gl->addLayout(lay);

	line = new QFrame(&d);
	line->setFrameShape(QFrame::HLine);
	line->setFrameShadow(QFrame::Sunken);
	gl->addWidget(line);

	lay = new QFormLayout(&d);
	lay->setWidget(0, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("�����: "), &d));
	lay->setWidget(0, QFormLayout::FieldRole, new QLineEdit(&d));

	lay->setWidget(1, QFormLayout::LabelRole, new QLabel(QString::fromLocal8Bit("�������: "), &d));
	lay->setWidget(1, QFormLayout::FieldRole, new QLineEdit(&d));
	gl->addLayout(lay);

	QHBoxLayout *lay2 = new QHBoxLayout(&d);
	QPushButton *ok = new QPushButton("OK", &d);
	ok->setDefault(true);
	ok->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	lay2->addWidget(ok);
	QPushButton *cancel = new QPushButton(QString::fromLocal8Bit("������"), &d);
	cancel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	lay2->addWidget(cancel);
	gl->addLayout(lay2);

	d.setLayout(gl);
	d.setWindowTitle("Address book");
	d.show();
	return app.exec();
}
