#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void init(void) {
glClearColor(0.0,0.0, 0.0, 0.0);
glScaled(3.0,3.0,0.0);
}

void Bintang(){
    glBegin(GL_POLYGON);

    glVertex2f(10.0,60.0);
    glVertex2f(30.0,50.0);
    glVertex2f(10.0,40.0);
    glVertex2f(0.0,20.0);
    glVertex2f(-10.0,40.0);
    glVertex2f(-30.0,50.0);
    glVertex2f(-10.0,60.0);
    glVertex2f(0.0,80.0);
glEnd();

}

void Display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    Bintang();
    glPopMatrix();
    glFlush();
}

void mySpecialKeyboard(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_UP:
        glColor3f(0.1,0.7,0.2);
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        glColor3f(0.2,0.1,0.7);
        glutPostRedisplay();
        break;
    }
}


int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100,100);
glutInitWindowSize (400, 400);
glutCreateWindow ("No 1");
init();
gluOrtho2D(-320,320,-320,320);
glutDisplayFunc (Display);
glutSpecialFunc(mySpecialKeyboard);
glutMainLoop();
return 0;
}
