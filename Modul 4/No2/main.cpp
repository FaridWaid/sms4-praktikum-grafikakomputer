/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<iostream>
#include <stdlib.h>


void object()
{
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINE_STRIP);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(1.75, 0.1, 0.0);
        glVertex3f(2.9, 0.8, 0.0);
        glVertex3f(3.2, 0.8, 0.0);
        glVertex3f(2.3, 0.1, 0.0);
        glVertex3f(3.75, 0.1, 0.0);
        glVertex3f(4.9, 0.6, 0.0);
        glVertex3f(5.2, 0.6, 0.0);
        glVertex3f(4.3, 0.1, 0.0);
        glVertex3f(5.75, 0.1, 0.0);
        glVertex3f(6.6, 0.4, 0.0);
        glVertex3f(6.9, 0.4, 0.0);
        glVertex3f(6.3, 0.1, 0.0);
        glVertex3f(7.5, 0.1, 0.0);
        glVertex3f(7.9, 0.0, 0.0);
    glEnd();
}
void editObject()
{
    glTranslated(0, 0, 0);
    object();
    glRotatef(180, 1, 0, 0);
    glTranslated(0, 0, 0);
    object();
    glRotatef(180, 0, 1, 0);
    glTranslated(0, 0, 0);
    object();
    glRotatef(180, 1, 0, 0);
    glTranslated(0, 0, 0);
    object();
}

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glScaled(2, 2, 0);
    editObject();
    glRotatef(55, 0, 0, 0.5);
    glTranslated(0, 0, 0);
    editObject();
    glRotatef(110, 0, 0, 0.5);
    glTranslated(0,0,0);
    editObject();
    glPopMatrix();
    glFlush ();
}

void myinit()
{
	glClearColor(1,1,1,0);  //untuk memberi warna pada background
	glColor3f(1.0, 0.0, 0.0); // color pada object
	glEnable(GL_POINT_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20.0, 20.0, -20.0, 20.0);  // kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Nomer 2");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
