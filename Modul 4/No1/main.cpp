#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
void awal()
{
glColor3f(0,0,1);
glBegin(GL_LINE_STRIP);
glVertex2f(0,0.1);
glVertex2f(1.75,0.1);
glVertex2f(2.9,0.8);
glVertex2f(3.2,0.8);
glVertex2f(2.3,0.1);
glVertex2f(3.75,0.1);
glVertex2f(4.9,0.6);
glVertex2f(5.2,0.6);
glVertex2f(4.3,0.1);
glVertex2f(5.75,0.1);
glVertex2f(6.6,0.4);
glVertex2f(6.9,0.4);
glVertex2f(6.3,0.1);
glVertex2f(7.5,0.1);
glVertex2f(7.9,0);
glEnd();
}
void display()
{
glClear (GL_COLOR_BUFFER_BIT);

awal();
glRotatef(180,1,0,0);awal();
glRotatef(180,0,1,0);awal();
glRotatef(180,1,0,0);awal();
glRotatef(55,0,0,1);awal();
glRotatef(180,1,0,0);awal();
glRotatef(180,0,1,0);awal();
glRotatef(180,1,0,0);awal();
glRotatef(110,0,0,1);awal();
glRotatef(180,1,0,0);awal();
glRotatef(180,0,1,0);awal();
glRotatef(180,1,0,0);awal();

glFlush();
}
void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10,10,-10,10);
glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char* argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("snowflake");
glClearColor(0,0,0,0);
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
