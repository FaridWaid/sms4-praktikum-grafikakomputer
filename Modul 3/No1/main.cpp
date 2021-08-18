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


void biru()
{
    glColor3f(0,0,1);
    glRecti(-20,15,-15,20);
}
void kuning()
{
    glColor3f(1,1,0);
    glRecti(-15,15,-10,20);
}
void gabunganObject()
{
    biru();
    kuning();
    glTranslated(10,0,0);
    biru();
    glTranslated(0,0,0);
    kuning();
    glTranslated(10,0,0);
    biru();
    glTranslated(0,0,0);
    kuning();
    glTranslated(10,0,0);
    biru();
    glTranslated(0,0,0);
    kuning();
}

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(0,-30,0);
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,-10,0);
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(0,-20,0);
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,-20,0);
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(0,-10,0);
    gabunganObject();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,-30,0);
    gabunganObject();
    glPopMatrix();
     glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(0,0,0);
    gabunganObject();
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
    glutCreateWindow("Nomer 1");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
