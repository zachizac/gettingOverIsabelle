#ifndef GESTION_HAPTIQUE_H
#define GESTION_HAPTIQUE_H

//Compilation en mode non unicode
#undef UNICODE

#include <ifc.h>
#include <QPoint>
#include <QMainWindow>

class MainWindow;

class gestion_haptique
{
public:
    gestion_haptique(MainWindow *fen);
    ~gestion_haptique();

    CImmProject *GetProjet() const;
private:
    CImmMouse *mSouris;
    CImmProject  *mProjet;
    MainWindow *mFenetre;
};


#endif // GESTION_HAPTIQUE_H
