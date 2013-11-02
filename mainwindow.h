/**
* @file
* @author Harry Cordewener
* @version 1.0
* @section LICENSE
*  Blah Blah indeed
* @section DESCRIPTION
*  Homework 1
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /*!
     * \brief on_pushButton_clicked will send a message to stdout on push and release.
     */
    void on_pushButton_clicked();

    /*!
     * \brief on_pushButton_3_pressed will send a message to stdout on push.
     */
    void on_pushButton_3_pressed();

    /*!
     * \brief on_pushButton_2_released will send a message to stdout on release of button 2.
     */
    void on_pushButton_2_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
