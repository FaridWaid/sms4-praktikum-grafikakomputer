#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glRotated(-35, 1,1,1);

    //depan
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -1.0, 0.5);
    glVertex3f(-1.0, -1.0, 0.5);
    glVertex3f(-1.0, 1.0, 0.5);
    glVertex3f(-0.5, 1.0, 0.5);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1, -1.0, 0.5);
    glVertex3f(0.5, -1.0, 0.5);
    glVertex3f(0.5, 1.0, 0.5);
    glVertex3f(1, 1.0, 0.5);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1, 1.0, 0.5);
    glVertex3f(1, 0.5, 0.5);
    glVertex3f(-1, 0.5, 0.5);
    glVertex3f(-1, 1.0, 0.5);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1, -1.0, 0.5);
    glVertex3f(-1, -0.5, 0.5);
    glVertex3f(1, -0.5, 0.5);
    glVertex3f(1, -1.0, 0.5);
    glEnd();

    //belakang
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -1.0, -0.5);
    glVertex3f(-1.0, -1.0, -0.5);
    glVertex3f(-1.0, 1.0, -0.5);
    glVertex3f(-0.5, 1.0, -0.5);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(1, -1.0, -0.5);
    glVertex3f(0.5, -1.0, -0.5);
    glVertex3f(0.5, 1.0, -0.5);
    glVertex3f(1, 1.0, -0.5);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(1, 1.0, -0.5);
    glVertex3f(1, 0.5, -0.5);
    glVertex3f(-1, 0.5, -0.5);
    glVertex3f(-1, 1.0, -0.5);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1, -1.0, -0.5);
    glVertex3f(-1, -0.5, -0.5);
    glVertex3f(1, -0.5, -0.5);
    glVertex3f(1, -1.0, -0.5);
    glEnd();

    //kiri kuning
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, -1.0, -0.5);
    glVertex3f(-1.0, -1.0, 0.5);
    glVertex3f(-1.0, 1.0, 0.5);
    glVertex3f(-1.0, 1.0, -0.5);
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();

    //kanan ungu
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, -0.5);
    glVertex3f(1.0, 1.0, -0.5);
    glVertex3f(1.0, 1.0, 0.5);
    glVertex3f(1.0, -1.0, 0.5);
    glEnd();
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, 0.5);
    glVertex3f(-1.0, -1.0, 0.5);
    glVertex3f(-1.0, -1.0, -0.5);
    glVertex3f(1.0, -1.0, -0.5);
    glEnd();


    //bawah dalam
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glEnd();

    //atas dalam
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 1.0, 0.5);
    glVertex3f(1.0, 1.0, 0.5);
    glVertex3f(1.0, 1.0, -0.5);
    glVertex3f(-1.0, 1.0, -0.5);
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();
    glFlush();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.0,3.0,-3.0,3.0,3.0,-3.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Nomer 2");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
