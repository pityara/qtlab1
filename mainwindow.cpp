#include "mainwindow.h"
#include <QMatrix4x4>

MainWindow::MainWindow(QWidget* parent) : QGLWidget(parent)
{

}

void MainWindow::initializeGL()
{
    glEnable(GL_DEPTH_TEST);
    qglClearColor(Qt::white); // Белый цвет фона
}

void MainWindow::resizeGL(int nWidth, int nHeight)
{
    glViewport( 0, 0, (GLint)nWidth, (GLint)nHeight );

        /* create viewing cone with near and far clipping planes */
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glFrustum( -1.0, 1.0, -1.0, 1.0, 5.0, 30.0);

        glMatrixMode( GL_MODELVIEW );
}

void MainWindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

        glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glTranslatef(0.0f,0.0f,-20.0f); //move along z-axis
            glRotatef(30.0,0.0,1.0,0.0); //rotate 30 degress around y-axis
            glRotatef(45.0,1.0,0.0,0.0); //rotate 15 degress around x-axis


        /* create 3D-Cube */
        glBegin(GL_QUADS);

            //front
            glColor3f(1.0,0.0,0.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);


            //back

            glColor3f(0.0,1.0,0.0);

            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(1.0,-1.0,-1.0);


            //top
            glColor3f(0.0,0.0,1.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


            //bottom
            glColor3f(0.0,0.0,0.0);

            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,-1.0,1.0);

            //right
            glColor3f(1.0,0.0,1.0);

            glVertex3f(1.0,1.0,1.0);
            glVertex3f(1.0,-1.0,1.0);
            glVertex3f(1.0,-1.0,-1.0);
            glVertex3f(1.0,1.0,-1.0);


            //left
            glColor3f(1.0,1.0,0.0);

            glVertex3f(-1.0,1.0,1.0);
            glVertex3f(-1.0,-1.0,1.0);
            glVertex3f(-1.0,-1.0,-1.0);
            glVertex3f(-1.0,1.0,-1.0);


        glEnd();
}

