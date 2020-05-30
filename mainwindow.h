#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QLocale>
#include<QColor>
#include<QPalette>
#include "math.h"

//#define EUH 2.71828182845904523536028747135266249775724709369995957
//#define PI  3.14159265358979323846264338327950288419716939937510582

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);
    void fCalcul();

    void fCarre();
    void fRacineCarree();
    void fCube();
    void fRacineCubique();
    void fPuissance();
    void fXRacine();
    void fPuissanceE();
    void fCos();
    void fArccos();
    void fCosh();
    void fArccosh();
    void fSin();
    void fArcsin();
    void fSinh();
    void fArcsinh();
    void fTan();
    void fArctan();
    void fTanh();
    void fArctanh();

public slots:
    void f1();
    void f2();
    void f3();
    void f4();
    void f5();
    void f6();
    void f7();
    void f8();
    void f9();
    void f0();
    void fPoint();
    void fPlus();
    void fMoins();
    void fMultiplie();
    void fDivise();
    void fAnnulation();
    void fEgal();
    void fInverse();
    void fValeurAbsolue();
    void fParentheseOuverte();
    void fParentheseFermee();
    void fE();
    void fToucheCarreRacine();
    void fToucheCubeRacine();
    void fFactoriel();
    void fLog();
    void fLn();
    void fTouchePuissanceRacine();
    void fToucheE();
    void fToucheCos();
    void fToucheSin();
    void fToucheTan();
    void fMode();
    void fe();
    void fPi();
    void fMemoire();
    void fEnregistrer();
    void fM();
    void f2nd();
    void fHyp();
    void fCE();
    void ouvrirAPropos();

private:
    Ui::MainWindow *ui;
    int i;
    int resultatEnEntier;
    double premierNombre = 0;
    double deuxiemeNombre = 0;
    double resultat = 0;
    double memoireResultat = 0;
    double nombre = 0;
    double memoire = 0;
    const double PI = 3.14159265358979323846264338327950288419716939937510582;
    const double EUH = 2.71828182845904523536028747135266249775724709369995957;
    vector <double> operandes;
    bool debut = true;
    bool nouveauNombre = false;
    bool second = false;
    bool hyp = false;
    QString premiereVariable = "";
    QString deuxiemeVariable = "";
    QString operateur = "";
    QString resultatEnString = "";
    QString uniteAngle = "degre";
    const QString PIEnString = "3.14159265358979323846264338327950288419716939937510582";
    const QString EUHEnString = "2.71828182845904523536028747135266249775724709369995957";
    QColor bleu = "#0000ff";
    QPalette paletteBleue;
    QPalette paletteBlanche;
    QPalette paletteOrange;
};
#endif // MAINWINDOW_H
