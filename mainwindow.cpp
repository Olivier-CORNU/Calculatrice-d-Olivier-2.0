#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "APropos.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bool ro = true;
    ui->ecran->setReadOnly(ro);

    paletteOrange.setColor(QPalette::Window, "#f5b749");
    this->setPalette(paletteOrange);

    connect(ui->bouton1, SIGNAL(clicked()), this, SLOT(f1()));
    connect(ui->bouton2, SIGNAL(clicked()), this, SLOT(f2()));
    connect(ui->bouton3, SIGNAL(clicked()), this, SLOT(f3()));
    connect(ui->bouton4, SIGNAL(clicked()), this, SLOT(f4()));
    connect(ui->bouton5, SIGNAL(clicked()), this, SLOT(f5()));
    connect(ui->bouton6, SIGNAL(clicked()), this, SLOT(f6()));
    connect(ui->bouton7, SIGNAL(clicked()), this, SLOT(f7()));
    connect(ui->bouton8, SIGNAL(clicked()), this, SLOT(f8()));
    connect(ui->bouton9, SIGNAL(clicked()), this, SLOT(f9()));
    connect(ui->bouton0, SIGNAL(clicked()), this, SLOT(f0()));
    connect(ui->boutonPoint, SIGNAL(clicked()), this, SLOT(fPoint()));
    connect(ui->boutonPlus, SIGNAL(clicked()), this, SLOT(fPlus()));
    connect(ui->boutonMoins, SIGNAL(clicked()), this, SLOT(fMoins()));
    connect(ui->boutonMultiplie, SIGNAL(clicked()), this, SLOT(fMultiplie()));
    connect(ui->boutonDivise, SIGNAL(clicked()), this, SLOT(fDivise()));
    connect(ui->boutonEgal, SIGNAL(clicked()), this, SLOT(fEgal()));
    connect(ui->boutonInverse, SIGNAL(clicked()), this, SLOT(fInverse()));
    connect(ui->boutonValeurAbsolue, SIGNAL(clicked()), this, SLOT(fValeurAbsolue()));
    connect(ui->boutonParentheseOuverte, SIGNAL(clicked()), this, SLOT(fParentheseOuverte()));
    connect(ui->boutonParentheseFermee, SIGNAL(clicked()), this, SLOT(fParentheseFermee()));
    connect(ui->boutonE, SIGNAL(clicked()), this, SLOT(fE()));
    connect(ui->boutonCarre, SIGNAL(clicked()), this, SLOT(fToucheCarreRacine()));
    connect(ui->boutonCube, SIGNAL(clicked()), this, SLOT(fToucheCubeRacine()));
    connect(ui->boutonFactoriel, SIGNAL(clicked()), this, SLOT(fFactoriel()));
    connect(ui->boutonLog, SIGNAL(clicked()), this, SLOT(fLog()));
    connect(ui->boutonLn, SIGNAL(clicked()), this, SLOT(fLn()));
    connect(ui->boutonPuissance, SIGNAL(clicked()), this, SLOT(fTouchePuissanceRacine()));
    connect(ui->boutonPuissanceE, SIGNAL(clicked()), this, SLOT(fToucheE()));
    connect(ui->boutonCos, SIGNAL(clicked()), this, SLOT(fToucheCos()));
    connect(ui->boutonSin, SIGNAL(clicked()), this, SLOT(fToucheSin()));
    connect(ui->boutonTan, SIGNAL(clicked()), this, SLOT(fToucheTan()));
    connect(ui->boutonPi, SIGNAL(clicked()), this, SLOT(fPi()));
    connect(ui->boutonMode, SIGNAL(clicked()), this, SLOT(fMode()));
    connect(ui->boutonMemoire, SIGNAL(clicked()), this, SLOT(fMemoire()));
    connect(ui->boutonEnregistrer, SIGNAL(clicked()), this, SLOT(fEnregistrer()));
    connect(ui->boutonM, SIGNAL(clicked()), this, SLOT(fM()));
    connect(ui->bouton2nd, SIGNAL(clicked()), this, SLOT(f2nd()));
    connect(ui->boutonHyp, SIGNAL (clicked()), this, SLOT(fHyp()));
    connect(ui->boutonCE, SIGNAL(clicked()), this, SLOT(fCE()));
    connect(ui->boutonAnnulation, SIGNAL(clicked()), this, SLOT(fAnnulation()));
    connect(ui->menuAPropos, SIGNAL(triggered()), this, SLOT(ouvrirAPropos()));
    connect(ui->menuQuitter, SIGNAL(triggered()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)        // Activer les touches du clavier
{
    if (event->key() == Qt::Key_1)
        f1();

    if (event->key() == Qt::Key_2)
        f2();

    if (event->key() == Qt::Key_3)
        f3();

    if (event->key() == Qt::Key_4)
        f4();

    if (event->key() == Qt::Key_5)
        f5();

    if (event->key() == Qt::Key_6)
        f6();

    if (event->key() == Qt::Key_7)
        f7();

    if (event->key() == Qt::Key_8)
        f8();

    if (event->key() == Qt::Key_9)
        f9();

    if (event->key() == Qt::Key_0)
        f0();

    if (event->key() == Qt::Key_paragraph)
        fPi();

    if (event->key() == Qt::Key_E)
        fe();

    if (event->key() == Qt::Key_Period)
        fPoint();

    if (event->key() == Qt::Key_Plus)
        fPlus();

    if (event->key() == Qt::Key_Minus)
        fMoins();

    if (event->key() == Qt::Key_Asterisk)
        fMultiplie();

    if (event->key() == Qt::Key_Slash)
        fDivise();

    if (event->key() == Qt::Key_Bar)
        fValeurAbsolue();

    if (event->key() == Qt::Key_ParenLeft)
        fParentheseOuverte();

    if (event->key() == Qt::Key_ParenRight)
        fParentheseOuverte();

    if (event->key() == Qt::Key_Exclam)
        fFactoriel();

    if (event->key() == Qt::Key_AsciiCircum)
        fPuissance();

    if (event->key() == Qt::Key_Equal)
        fEgal();

    if (event->key() == Qt::Key_Enter)
        fEgal();

    if (event->key() == Qt::Key_Return)
        fEgal();
}

void MainWindow::f1()           // Slot de la touche 1
{
    ui->ecran->insertPlainText("1");
    premiereVariable += "1";
    debut = false;
    //nouveauNombre = false;
}

void MainWindow::f2()
{
    ui->ecran->insertPlainText("2");
    premiereVariable += "2";
    debut = false;
}

void MainWindow::f3()
{
    ui->ecran->insertPlainText("3");
    premiereVariable += "3";
    debut = false;
}

void MainWindow::f4()
{
    ui->ecran->insertPlainText("4");
    premiereVariable += "4";
    debut = false;
}

void MainWindow::f5()
{
    ui->ecran->insertPlainText("5");
    premiereVariable += "5";
    debut = false;
}

void MainWindow::f6()
{
    ui->ecran->insertPlainText("6");
    premiereVariable += "6";
    debut = false;
}

void MainWindow::f7()
{
    ui->ecran->insertPlainText("7");
    premiereVariable += "7";
    debut = false;
}

void MainWindow::f8()
{
    ui->ecran->insertPlainText("8");
    premiereVariable += "8";
    debut = false;
}

void MainWindow::f9()
{
    ui->ecran->insertPlainText("9");
    premiereVariable += "9";
    debut = false;
}

void MainWindow::f0()
{
    ui->ecran->insertPlainText("0");
    premiereVariable += "0";
    debut = false;
}

void MainWindow::fPi()
{
    ui->ecran->insertPlainText("π");
    premiereVariable = PIEnString;
    debut = false;
}

void MainWindow::fe()
{
    ui->ecran->insertPlainText("e");
    premiereVariable.setNum(EUH);
    debut = false;
}

void MainWindow::fPoint()
{
    ui->ecran->insertPlainText(".");
    premiereVariable += ".";
    debut = false;
}

void MainWindow::fCalcul()          // fonction calcul
{
   if (operateur == "")
   {
        if (debut)
        {
            resultat += memoireResultat;
            debut = false;
        }

        else //if (nouveauNombre)
        {
            nombre = premiereVariable.toDouble();
            //operandes.push_back(nombre);
            resultat += nombre;
            deuxiemeVariable = premiereVariable;
            premiereVariable = "";
        }
    }

    if (operateur == "plus")
    {
        nombre = premiereVariable.toDouble();
        resultat += nombre;
        deuxiemeVariable = premiereVariable;
        premiereVariable = "";
    }

    if (operateur == "moins" && !debut)
    {
        nombre = premiereVariable.toDouble();
        resultat -= nombre;
        deuxiemeVariable = premiereVariable;
        premiereVariable = "";
    }

    if (operateur == "multiplie")
    {
        if (!debut && premiereVariable != "")
        {
            nombre = premiereVariable.toDouble();
            resultat *= nombre;
            deuxiemeVariable = premiereVariable;
            premiereVariable = "";
        }
    }

    if (operateur == "divise")
    {
        if (!debut && premiereVariable != "")
        {
            nombre = premiereVariable.toDouble();
            if (nombre == 0)
                ui->ecran->appendPlainText("-----Opération impossible : Division par 0-----\n\n");
            else
            {
                resultat /= nombre;
                deuxiemeVariable = premiereVariable;
                premiereVariable = "";
            }
        }
    }

    if (operateur == "inverse")
    {
        if (resultat == 0)
            ui->ecran->appendPlainText("-----Opération impossible : Division par 0-----\n\n");

        else
        {
            resultat = 1 / resultat;
            premiereVariable = "";
        }
    }

    if (operateur == "absolu")
    {
        resultat = abs(resultat);
        premiereVariable = "";
    }

    if (operateur == "carre")
    {
        resultat = pow(resultat, 2);
        premiereVariable = "";
    }

    if (operateur == "racineCarree")
    {
        resultat = sqrt(resultat);
        premiereVariable = "";
    }

    if (operateur == "cube")
    {
        resultat = pow(resultat, 3);
        premiereVariable = "";
    }

    if (operateur == "racineCubique")
    {
        resultat = cbrt(resultat);
        premiereVariable = "";
    }

    if (operateur == "factoriel")
    {
        resultatEnEntier = int (resultat);

        if (resultatEnEntier != resultat || resultatEnEntier < 0)
            ui->ecran->appendPlainText("-Opération Impossible : Factoriel d'un nombre non naturel-");

        else
        {
            for (i = 1; i < resultatEnEntier; i++)
                resultat *= i;

            premiereVariable = "";
        }
    }

    if (operateur == "log")
    {
        resultat = log10(resultat);
        premiereVariable = "";
    }

    if (operateur == "ln")
    {
        resultat = log(resultat);
        premiereVariable = "";
    }

    if (operateur == "^x")
    {
        nombre = premiereVariable.toDouble();
        resultat = pow(resultat, nombre);
        deuxiemeVariable = premiereVariable;
        premiereVariable = "";
    }

    if (operateur == "e^x")
    {
        resultat = exp(resultat);
        premiereVariable = "";
    }

    if (operateur == "cos")
    {
        if (uniteAngle == "degre")
            resultat = cos(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = cos(resultat);

        if (uniteAngle == "grade")
            resultat = cos(resultat * PI /200);

        premiereVariable = "";
    }

    if (operateur == "arccos")
    {
        if (uniteAngle == "degre")
            resultat = acos(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = acos(resultat);

        if (uniteAngle == "grade")
            resultat = acos(resultat) * 200 / PI;

        premiereVariable = "";
    }

    if (operateur == "cosh")
    {
        resultat = cosh(resultat);
        premiereVariable = "";
    }

    if (operateur == "arccosh")
    {
        resultat = acosh(resultat);
        premiereVariable = "";
    }

    if (operateur == "sin")
    {
        if (uniteAngle == "degre")
            resultat = sin(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = sin(resultat);

        if (uniteAngle == "grade")
            resultat = sin(resultat * PI /200);

        premiereVariable = "";
    }

    if (operateur == "arcsin")
    {
        if (uniteAngle == "degre")
            resultat = asin(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = asin(resultat);

        if (uniteAngle == "grade")
            resultat = asin(resultat) * 200 / PI;

        premiereVariable = "";
    }

    if (operateur == "sinh")
    {
        resultat = sinh(resultat);
        premiereVariable = "";
    }

    if (operateur == "arcsinh")
    {
        resultat = asinh(resultat);
        premiereVariable = "";
    }

    if (operateur == "tan")
    {
        if (uniteAngle == "degre")
            resultat = tan(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = tan(resultat);

        if (uniteAngle == "grade")
            resultat = tan(resultat * PI /200);

        premiereVariable = "";
    }

    if (operateur == "arctan")
    {
        if (uniteAngle == "degre")
            resultat = atan(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = atan(resultat);

        if (uniteAngle == "grade")
            resultat = atan(resultat) * 200 / PI;

        premiereVariable = "";
    }

    if (operateur == "tanh")
    {
        resultat = tanh(resultat);
        premiereVariable = "";
    }

    if (operateur == "arctanh")
    {
        resultat = atanh(resultat);
        premiereVariable = "";
    }
}

void MainWindow::fPlus()            // slot de la touche plus
{
    ui->ecran->appendPlainText("+\n");
    fCalcul();
    operateur = "plus";
}

void MainWindow::fMoins()
{
    ui->ecran->appendPlainText("-\n");
    fCalcul();
    operateur = "moins";
}

void MainWindow::fMultiplie()
{
    ui->ecran->appendPlainText("*\n");
    fCalcul();
    operateur = "multiplie";
}

void MainWindow::fDivise()
{
    ui->ecran->appendPlainText("/\n");
    fCalcul();
    operateur = "divise";
}

void MainWindow::fInverse()
{
    ui->ecran->appendPlainText("INV");
    fCalcul();
    operateur = "inverse";
}

void MainWindow::fValeurAbsolue()
{
    ui->ecran->appendPlainText("ABS");
    fCalcul();
    operateur = "absolu";
}

void MainWindow::fParentheseOuverte(){}
void MainWindow::fParentheseFermee(){}
void MainWindow::fE(){}

void MainWindow::fToucheCarreRacine()
{
    if (second)
        fRacineCarree();

    else
        fCarre();
}

void MainWindow::fCarre()
{
    ui->ecran->appendPlainText("^2");
    fCalcul();
    operateur = "carre";
}

void MainWindow::fRacineCarree()
{
    ui->ecran->appendPlainText("√");
    fCalcul();
    operateur = "racineCarree";
}

void MainWindow::fToucheCubeRacine()
{
    if (second)
        fRacineCubique();

    else
        fCube();
}

void MainWindow::fCube()
{
    ui->ecran->appendPlainText("^3");
    fCalcul();
    operateur = "cube";
}

void MainWindow::fRacineCubique()
{
    ui->ecran->appendPlainText("3√");
    fCalcul();
    operateur = "racineCubique";
}

void MainWindow::fFactoriel()
{
    ui->ecran->appendPlainText("!");
    fCalcul();
    operateur = "factoriel";
}

void MainWindow::fLog()
{
    ui->ecran->appendPlainText("log");
    fCalcul();
    operateur = "log";
}

void MainWindow::fLn()
{
    ui->ecran->appendPlainText("ln");
    fCalcul();
    operateur = "ln";
}

void MainWindow::fTouchePuissanceRacine()
{
    if (second)
        fXRacine();

    else
        fPuissance();
}

void MainWindow::fPuissance()
{
    ui->ecran->appendPlainText("^\n");
    fCalcul();
    operateur = "^x";
}

void MainWindow::fXRacine()
{
    ui->ecran->appendPlainText("x√\n");
    fCalcul();
    operateur = "x√";
}

void MainWindow::fToucheE()
{
    if (second)
        fe();

    else
        fPuissanceE();
}

void MainWindow::fPuissanceE()
{
    ui->ecran->appendPlainText("e^x");
    fCalcul();
    operateur = "e^x";
}

void MainWindow::fToucheCos()
{
    if (second)
    {
        if (hyp)
            fArccosh();

        else
            fArccos();
    }

    else
    {
        if (hyp)
            fCosh();

        else
            fCos();
    }
}

void MainWindow::fCos()
{
    ui->ecran->appendPlainText("cos");
    fCalcul();
    operateur = "cos";
}

void MainWindow::fArccos()
{
    ui->ecran->appendPlainText("arccos");
    fCalcul();
    operateur = "arccos";
}

void MainWindow::fCosh()
{
    ui->ecran->appendPlainText("cosh");
    fCalcul();
    operateur = "cosh";
}

void MainWindow::fArccosh()
{
    ui->ecran->appendPlainText("arccosh");
    fCalcul();
    operateur = "arccosh";
}

void MainWindow::fToucheSin()
{
    if (second)
    {
        if (hyp)
            fArcsinh();

        else
            fArcsin();
    }

    else
    {
        if (hyp)
            fSinh();

        else
            fSin();
    }
}

void MainWindow::fSin()
{
    ui->ecran->appendPlainText("sin");
    fCalcul();
    operateur = "sin";
}

void MainWindow::fArcsin()
{
    ui->ecran->appendPlainText("arcsin");
    fCalcul();
    operateur = "arcsin";
}

void MainWindow::fSinh()
{
    ui->ecran->appendPlainText("sinh");
    fCalcul();
    operateur = "sinh";
}

void MainWindow::fArcsinh()
{
    ui->ecran->appendPlainText("arcsinh");
    fCalcul();
    operateur = "arcsinh";
}

void MainWindow::fToucheTan()
{
    if (second)
    {
        if (hyp)
            fArctanh();

        else
            fArctan();
    }

    else
    {
        if (hyp)
            fTanh();

        else
            fTan();
    }
}

void MainWindow::fTan()
{
    ui->ecran->appendPlainText("tan");
    fCalcul();
    operateur = "tan";
}

void MainWindow::fArctan()
{
    ui->ecran->appendPlainText("arctan");
    fCalcul();
    operateur = "arctan";
}

void MainWindow::fTanh()
{
    ui->ecran->appendPlainText("tanh");
    fCalcul();
    operateur = "tanh";
}

void MainWindow::fArctanh()
{
    ui->ecran->appendPlainText("arctanh");
    fCalcul();
    operateur = "arctanh";
}

void MainWindow::fMode()
{
    if (uniteAngle == "degre")
    {
        uniteAngle = "radian";
        ui->affichageUniteAngle->setText("Radian");
    }

    else if (uniteAngle == "radian")
    {
        uniteAngle = "grade";
        ui->affichageUniteAngle->setText("Grade");
    }

    else if (uniteAngle == "grade")
    {
        uniteAngle = "degre";
        ui->affichageUniteAngle->setText("Degré");
    }
}

void MainWindow::fMemoire()
{

    fCalcul();
    premiereVariable.setNum(memoire);
    ui->ecran->appendPlainText(premiereVariable);
}

void MainWindow::fEnregistrer()
{
    if (!debut)
    {
        fCalcul();
        memoire = resultat;
    }

    else
    {
        fCalcul();
        memoire = memoireResultat;
    }

    ui->ecran->appendPlainText("-----Enregistré en mémoire-----");
}


void MainWindow::fM()
{
    fCalcul();
    memoire += resultat;
    ui->ecran->appendPlainText("-----Additionné à la mémoire -----");
}

void MainWindow::f2nd()
{
    if (second)
    {
        second = false;
        ui->affichage2nd->setText("");
        ui->bouton2nd->setPalette(paletteBlanche);
        ui->boutonCarre->setText("x^2");
        ui->boutonCube->setText(("x^3"));
        ui->boutonPuissance->setText("^x");
        ui->boutonPuissanceE->setText("e^x");
        ui->boutonCos->setText("cos");
        ui->boutonSin->setText("sin");
        ui->boutonTan->setText("tan");
    }

    else
    {
        second = true;
        ui->affichage2nd->setText("2nd");
        paletteBleue.setColor(QPalette::Button, bleu);
        ui->bouton2nd->setPalette(paletteBleue);
        ui->boutonCarre->setText("√");
        ui->boutonCube->setText(("3√"));
        ui->boutonPuissance->setText("x√");
        ui->boutonPuissanceE->setText("e");
        ui->boutonCos->setText("acos");
        ui->boutonSin->setText("asin");
        ui->boutonTan->setText("atan");
    }
}

void MainWindow::fHyp()
{
    if (hyp)
    {
        hyp = false;
        ui->affichageHyp->setText("");
        ui->boutonHyp->setPalette(paletteBlanche);

        if (second)
        {
            ui->boutonCos->setText("acos");
            ui->boutonSin->setText("asin");
            ui->boutonTan->setText("atan");
        }

        else
        {
            ui->boutonCos->setText("cos");
            ui->boutonSin->setText("sin");
            ui->boutonTan->setText("tan");
        }
    }

    else
    {
        hyp = true;
        ui->affichageHyp->setText("Hypothenuse");
        paletteBleue.setColor(QPalette::Button, bleu);
        ui->boutonHyp->setPalette(paletteBleue);

        if (second)
        {
            ui->boutonCos->setText("acosh");
            ui->boutonSin->setText("asinh");
            ui->boutonTan->setText("atanh");
        }

        else
        {
            ui->boutonCos->setText("cosh");
            ui->boutonSin->setText("sinh");
            ui->boutonTan->setText("tanh");
        }
    }
}

void MainWindow::fCE(){}

void MainWindow::fEgal()            //slot de la touche egal et calcul après appuyer sur egal
{
    premierNombre = premiereVariable.toDouble();
    deuxiemeNombre = deuxiemeVariable.toDouble();

    if (operateur == "")
    {
        if (premiereVariable != "")
        {
            resultat = premierNombre;
            resultatEnString.setNum(resultat);
            ui->ecran->appendPlainText("= "+resultatEnString);
        }
        else
        {
            resultat = memoireResultat;
            resultatEnString.setNum(resultat);
            ui->ecran->appendPlainText("= "+resultatEnString);
        }
    }

    if (operateur == "plus")
    {
        resultat += premierNombre;
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "moins")
    {
        resultat -= premierNombre;
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "multiplie" )
    {
        if (premiereVariable != "")
            {
                resultat *= premierNombre;
                resultatEnString.setNum(resultat);
                ui->ecran->appendPlainText("= "+resultatEnString);
            }

        else
            {
                resultatEnString.setNum(resultat);
                ui->ecran->appendPlainText("= "+resultatEnString);
            }
    }

    if (operateur == "divise")
    {
        if (!debut && premiereVariable != "")
        {
            nombre = premiereVariable.toDouble();

            if (nombre != 0)
            {
                resultat /= nombre;
                deuxiemeVariable = premiereVariable;
                premiereVariable = "";
                resultatEnString.setNum(resultat);
                ui->ecran->appendPlainText("= "+resultatEnString);
            }
            else
                ui->ecran->appendPlainText("-----Opération impossible : Division par 0-----");
        }

        else if (premiereVariable == "")
        {
            resultatEnString.setNum(resultat);
            ui->ecran->appendPlainText("= "+resultatEnString);
        }
    }

    if (operateur == "inverse")
    {
        if (resultat == 0)
            ui->ecran->appendPlainText("-----Opération impossible : Division par 0-----");

        else
        {
            resultat = 1 / resultat;
            resultatEnString.setNum(resultat);
            ui->ecran->appendPlainText("= "+resultatEnString);
        }
    }

    if (operateur == "absolu")
    {
        resultat = abs(resultat);
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "carre")
    {
        resultat = pow(resultat, 2);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "racineCarree")
    {
        resultat = sqrt(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "cube")
    {
        resultat = pow(resultat, 3);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "racineCubique")
    {
        resultat = cbrt(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "factoriel")
    {
        resultatEnEntier = int (resultat);

        if (resultatEnEntier != resultat || resultatEnEntier < 0)
            ui->ecran->appendPlainText("-Opération Impossible : Factoriel d'un nombre non naturel-");

        else
        {
            for (i = 1; i < resultatEnEntier; i++)
                resultat *= i;

            premiereVariable = "";
            resultatEnString.setNum(resultat);
            ui->ecran->appendPlainText("= "+resultatEnString);
        }
    }

    if (operateur == "log")
    {
        resultat = log10(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "ln")
    {
        resultat = log(resultat);

        if (resultat >= 0.999999 && resultat <= 1.000001)
            resultat = 1;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "^x")
    {
        nombre = premiereVariable.toDouble();
        resultat = pow(resultat, nombre);
        deuxiemeVariable = premiereVariable;
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "x√")
    {
        nombre = premiereVariable.toDouble();
        resultat = pow(resultat, 1 / nombre);
        deuxiemeVariable = premiereVariable;
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "e^x")
    {
        resultat = exp(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "cos")
    {
        if (uniteAngle == "degre")
            resultat = cos(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = cos(resultat);

        if (uniteAngle == "grade")
            resultat = cos(resultat * PI /200);

        if (resultat >= -1.0000000001 && resultat <= -0.9999999999)
            resultat = -1;

        if (resultat >= -0.5000000001 && resultat <= -0.4999999999)
            resultat = -0.5;

        if (resultat >= -0.0000000001 && resultat <= 0.0000000001)
            resultat = 0;

        if (resultat >= 0.4999999999 && resultat <= 0.5000000001)
            resultat = 0.5;

        if (resultat >= 0.9999999999 && resultat <= 1.0000000001)
            resultat = 1;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arccos")
    {
        if (uniteAngle == "degre")
            resultat = acos(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = acos(resultat);

        if (uniteAngle == "grade")
            resultat = acos(resultat) * 200 / PI;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "cosh")
    {
        resultat = cosh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arccosh")
    {
        resultat = acosh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "sin")
    {
        if (uniteAngle == "degre")
            resultat = sin(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = sin(resultat);

        if (uniteAngle == "grade")
            resultat = sin(resultat * PI /200);

        if (resultat >= -1.0000000001 && resultat <= -0.9999999999)
            resultat = -1;

        if (resultat >= -0.5000000001 && resultat <= -0.4999999999)
            resultat = -0.5;

        if (resultat >= -0.0000000001 && resultat <= 0.0000000001)
            resultat = 0;

        if (resultat >= 0.4999999999 && resultat <= 0.5000000001)
            resultat = 0.5;

        if (resultat >= 0.9999999999 && resultat <= 1.0000000001)
            resultat = 1;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arcsin")
    {
        if (uniteAngle == "degre")
            resultat = asin(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = asin(resultat);

        if (uniteAngle == "grade")
            resultat = asin(resultat) * 200 / PI;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "sinh")
    {
        resultat = sinh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arcsinh")
    {
        resultat = asinh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "tan")
    {
        if (uniteAngle == "degre")
            resultat = tan(resultat * PI / 180);

        if (uniteAngle == "radian")
            resultat = tan(resultat);

        if (uniteAngle == "grade")
            resultat = tan(resultat * PI /200);

        if (resultat >= -1.0000000001 && resultat <= -0.9999999999)
            resultat = -1;

        if (resultat >= -0.5000000001 && resultat <= -0.4999999999)
            resultat = -0.5;

        if (resultat >= -0.0000000001 && resultat <= 0.0000000001)
            resultat = 0;

        if (resultat >= 0.4999999999 && resultat <= 0.5000000001)
            resultat = 0.5;

        if (resultat >= 0.9999999999 && resultat <= 1.0000000001)
            resultat = 1;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arctan")
    {
        if (uniteAngle == "degre")
            resultat = atan(resultat) * 180 / PI;

        if (uniteAngle == "radian")
            resultat = atan(resultat);

        if (uniteAngle == "grade")
            resultat = atan(resultat) * 200 / PI;

        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "tanh")
    {
        resultat = tanh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    if (operateur == "arctanh")
    {
        resultat = atanh(resultat);
        premiereVariable = "";
        resultatEnString.setNum(resultat);
        ui->ecran->appendPlainText("= "+resultatEnString);
    }

    ui->ecran->appendPlainText("\n");

    premiereVariable = "";
    deuxiemeVariable = "";
    operateur = "";
    memoireResultat = resultat;
    resultat = 0;
    premierNombre = 0;
    deuxiemeNombre = 0;
    debut = true;
}

void MainWindow::fAnnulation()          //slot de la touche C
{
    ui->ecran->appendPlainText("-----Remise à zero-----\n");
    premiereVariable = "";
    deuxiemeVariable = "";
    operateur = "";
    memoireResultat = 0;
    resultat = 0;
    premierNombre = 0;
    deuxiemeNombre = 0;
    debut = true;
}

void MainWindow::ouvrirAPropos()            //slot de la touche apropos
{
    APropos *aPropos = new APropos;
    aPropos->setWindowTitle("A Propos");
    aPropos->show();
}
