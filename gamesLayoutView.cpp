#include "gamesLayoutView.h"
#include <QDesktopWidget>

gamesLayoutView::gamesLayoutView()
{
    setBackgroundBrush(QBrush(QImage(":images/background.jpg")));
    setHome();
}

void gamesLayoutView :: setHome()
{
    homeScene *scene= new homeScene();
    this->setFixedSize(1036,595);
    //this->setFixedSize(QDesktopWidget().availableGeometry(this).size() * 0.8);
    this->setScene(scene->mainScene);
    connect(scene->signIn,SIGNAL(clicked(bool)),this,SLOT(menuButton()));
    connect(scene->signUp,SIGNAL(clicked(bool)),this,SLOT(setSignUpPage()));

}
void gamesLayoutView :: menuButton()
{
    mainScene = new graphicsSceneWrapper();
    this->setHorizontalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setVerticalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setFixedSize(1036,595);
    this->setScene(mainScene->mainScene);
    connect(mainScene->Game1Button,SIGNAL(clicked(bool)),this,SLOT(game1Button()));
    connect(mainScene->Game2Button,SIGNAL(clicked(bool)),this,SLOT(game2Button()));
    connect(mainScene->Game3Button,SIGNAL(clicked(bool)),this,SLOT(game3Button()));
    setBackgroundBrush(QBrush(QImage(":images/background.jpg")));

}
void gamesLayoutView :: setSignUpPage()
{
    signUpScene *scene = new signUpScene();
    this->setHorizontalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setVerticalScrollBarPolicy((Qt::ScrollBarAlwaysOff));
    this->setFixedSize(1036,595);
    this->setScene(scene->mainScene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(setHome()));
    setBackgroundBrush(QBrush(QImage(":images/background.jpg")));
}
void gamesLayoutView :: game1Button()
{
    game1Scene *scene= new game1Scene();
    this->setFixedSize(1036,595);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));

}
void gamesLayoutView :: game2Button()
{
    game2scene *scene= new game2scene();
    this->setFixedSize(1036,595);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));

}
void gamesLayoutView :: game3Button()
{
    game3scene *scene= new game3scene();
    this->setFixedSize(1036,595);
    this->setScene(scene);
    connect(scene->backbutton,SIGNAL(clicked(bool)),this,SLOT(back_button()));
}
void gamesLayoutView :: back_button()
{
    graphicsSceneWrapper *scene=new graphicsSceneWrapper();
    this->setScene(scene->mainScene);
    connect(scene->Game1Button,SIGNAL(clicked(bool)),this,SLOT(game1Button()));
    connect(scene->Game2Button,SIGNAL(clicked(bool)),this,SLOT(game2Button()));
    connect(scene->Game3Button,SIGNAL(clicked(bool)),this,SLOT(game3Button()));
}
