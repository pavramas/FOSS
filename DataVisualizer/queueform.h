#ifndef QUEUEFORM_H
#define QUEUEFORM_H

#include <QWidget>
#include <QLabel>
#include "ui_QueueForm.h"
#include <map>

namespace Ui {
class QueueForm;
}

class QueueForm : public QWidget
{
    Q_OBJECT

public:
    explicit QueueForm(QWidget *parent = 0);
    ~QueueForm();

private:
    Ui::QueueForm *ui;
    int label_coordinates[4];
    int ledit_coordinates[4];
    int num_of_entries;
    QLabel *top_label;
    std::map<int, QLineEdit *> lmap;
};

#endif // QUEUEFORM_H
