#ifndef SCENE3D_H
#define SCENE3D_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>
#include <QMatrix4x4>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>

class MainWindow : public QGLWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

protected:
    void initializeGL(); // Метод для инициализирования opengl
    void resizeGL(int nWidth, int nHeight); // Метод вызываемый после каждого изменения размера окна
    void paintGL(); // Метод для вывода изображения на экран

private:


};

#endif // SCENE3D_H
