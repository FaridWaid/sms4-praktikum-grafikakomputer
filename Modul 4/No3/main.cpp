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
    glVertex3f(-0.34, 1.7, 0.0);
    glVertex3f(0.13, 1.7, 0.0);
    glVertex3f(-0.56, 3.8, 0.0);
    glVertex3f(-1.5, 0.81, 0.0);
    glVertex3f(-1.16, 0.6, 0.0);
    glVertex3f(-0.55, 2.45, 0.0);
    glVertex3f(-0.34, 1.7, 0.0);
    glEnd();
}

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);
    glScaled(5, 5, 0);
    glPushMatrix();
    object();
    glTranslated(0.35,1,0);
    glRotated(70,0,0,1);
    object();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1.07,-0.02,0);
    glRotated(290,0,0,1);
    object();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1.46,1,0);
    glRotated(220,0,0,1);
    object();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.55,1.73,0);
    glRotated(145,0,0,1);
    object();
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
    glutCreateWindow("Nomer 3");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
