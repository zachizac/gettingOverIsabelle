#include "gestion_haptique.h"
#include <QApplication>
#include "mainwindow.h"
#include <QDebug>

gestion_haptique::gestion_haptique(MainWindow *fen): mFenetre(fen)
{

    //Initialisation de la souris
    mSouris = new CImmMouse();


        // if (!mSouris->Initialize(qApp->applicationPid(),  fen->effectiveWinId()  ))
    if (!mSouris->Initialize(qWinAppInst(),  (HWND)mFenetre->effectiveWinId()  ))
    {qDebug()<<"===>Erreur chargement souris "<<mSouris;
        delete mSouris;
        mSouris = NULL;
        qApp->quit();
    }


    ////////////////////////////////////
    ////////////////////////////////////
    //Création d'effet par programme
    ////////////////////////////////////
    ////////////////////////////////////

    mProjet = new CImmProject();
    if (mProjet->OpenFile("C:/Users/M2IHM/Desktop/gettingOverIsabelle/FlappyBird_true/haptique/inertie_piaf.ifr", mSouris))
   {
        qDebug()<<"Projet ifr chargé";
    }
    else
    {
        qDebug()<<"===>Erreur chargement projet IFR avec code "<<CIFCErrors::GetLastErrorCode() ;
    }
}

    gestion_haptique::~gestion_haptique()
    {
        if (mProjet)
            delete mProjet;
    }

    CImmProject *gestion_haptique::GetProjet() const
    {
        return mProjet;
    }
