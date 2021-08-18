#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //balok 1
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotated(10,2,2,0);
    glutWireCube(5);
    glPopMatrix();
    //balok 2
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(1,1,0);
    glRotated(10,2,2,0);
    glutWireCube(5);
    glPopMatrix();
    //balok 3
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(0,1,0);
    glRotated(10,2,2,0);
    glutWireCube(5);
    glPopMatrix();
    //balok 4
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(1,0,0);
    glRotated(10,2,2,0);
    glutWireCube(5);
    glPopMatrix();

    glFlush();
}
void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, 5.0, -5.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Nomor 1");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
