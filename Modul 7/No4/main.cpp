#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static GLfloat spin = 0.0;


void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}

void spinDisplay(void) {
spin = spin + 0.01;
if (spin > 360.0)
spin = spin - 360.0;
glutPostRedisplay();
}

void init(void) {
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}

void reshape(int w, int h) {
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100.0, 100.0, -100.0, 100.0, -20.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void mouse(int button, int state, int x, int y) {
switch (button)     {
case GLUT_LEFT_BUTTON:
if(state==GLUT_DOWN)
    glutIdleFunc(spinDisplay);
break;
case GLUT_MIDDLE_BUTTON:
case GLUT_RIGHT_BUTTON:
if(state==GLUT_DOWN)
glutIdleFunc(NULL);
break;
default:
break;
}
}

void keyboard(unsigned char key, int x, int y){
    switch (key){
    case 'u':
        glScaled(0.75,0.75,0.75);
        glutIdleFunc(spinDisplay);
        break;
    case 'U':
        glScaled(1.5,1.5,1.5);
        glutIdleFunc(spinDisplay);
        break;
    case 'v':
        spin = spin + 0.005;
        glutIdleFunc(spinDisplay);
    case 'V':
        spin = spin + 0.02;
        glutIdleFunc(spinDisplay);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("No 4");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
