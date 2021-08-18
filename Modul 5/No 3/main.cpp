#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    // teapot
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(-1,-1,0);
    glRotated(10,2,2,0);
    glutWireCube(2);
    glColor3f(0.0, 1.0, 1.0);
    glutWireTeapot(0.5);
    glPopMatrix();

    //sphere
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(1,-1,0);
    glRotated(10,2,2,0);
    glutWireCube(2);
    glColor3f(1.0, 1.0, 0.0);
    glutWireSphere(0.8,10,10);
    glPopMatrix();

    //cone
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(1,1,0);
    glRotated(10,2,2,0);
    glutWireCube(2);
    glRotated(60,1,3,1);
    glColor3f(0.0, 0.0, 1.0);
    glutWireCone(0.6,1,10,5);
    glPopMatrix();

    //tetrahedon
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(-1,1,0);
    glRotated(10,2,2,0);
    glutWireCube(2);
    glRotated(60,2,2,0);
    glColor3f(0.0, 1.0, 0.0);
    glutWireTetrahedron();
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
    glutCreateWindow("Nomer 3");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
