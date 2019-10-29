#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
protected:
    void paintEvent(QPaintEvent *e) override;
private:
    Ui::MainWindow *ui;

    void paintQR(QPainter &painter, const QSize sz, const QString &data, QColor fg);
};
#endif // MAINWINDOW_H
