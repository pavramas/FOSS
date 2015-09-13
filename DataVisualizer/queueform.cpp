#include "queueform.h"
#include "ui_queueform.h"

QueueForm::QueueForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueueForm)
{
    ui->setupUi(this);
   // setupUiWidgets(this);
    num_of_entries=0;
    label_coordinates[0]=70;
    label_coordinates[1]=110;
    label_coordinates[2]=31;
    label_coordinates[3]=21;

    ledit_coordinates[0]=120;
    ledit_coordinates[1]=100;
    ledit_coordinates[2]=31;
    ledit_coordinates[3]=21;

    top_label = NULL;
}

QueueForm::~QueueForm()
{
    std::map <int, QLineEdit *>::iterator it;

    for (it=lmap.begin(); it!=lmap.end(); it++) {
        delete it->second;
    }

    if (top_label != NULL) {
        delete top_label;
    }

    delete ui;
}


