#ifndef DIALOGSQLITE_H
#define DIALOGSQLITE_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class DialogSqlite;
}

class DialogSqlite : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSqlite(QWidget *parent = nullptr);
    ~DialogSqlite();

    void init();
private slots:
  void  on_tableView_clicked(const QModelIndex &index);

  void on_pushButton_clicked();

private:
    Ui::DialogSqlite *ui;
    QStandardItemModel    *model;
};

#endif // DIALOGSQLITE_H
