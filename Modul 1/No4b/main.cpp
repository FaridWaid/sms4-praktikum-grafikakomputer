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

#include <stdlib.h>

void display(void)
{

    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glLineWidth(10.0);


    glBegin(GL_POLYGON);
    glEnd();

    // warna merah
    glColor3f(1.0, 0.0, 0.0);
    glRectf(0.7, -1.0, 1.0, 1.0);

    // warna hijau
    glColor3f (0.0, 1.0, 0.0);
    glRectf(0.4, -1.0, 0.7, 1.0);

    // warna biru
    glColor3f (0.0, 0.0, 1.0);
    glRectf(0.1, -1.0, 0.4, 1.0);

    // warna hitam
    glColor3f (0.0, 0.0, 0.0);
    glRectf(-0.2, -1.0, 0.1, 1.0);

    // warna putih
    glColor3f (1.0, 1.0, 1.0);
    glRectf(-0.5, -1.0, -0.2, 1.0);

    // warna kuning
    glColor3f (1.0, 1.0, 0.0);
    glRectf(-0.8, -1.0, -0.5, 1.0);

    // warna ungu
    glColor3f (1.0, 0.0, 1.0);
    glRectf(-1.1, -1.0, -0.8, 1.0);

    glFlush ();
}
void kunci(unsigned char key, int x, int y)
{
    switch (key)

{
    /* aplikasi berhenti ketika tombol q ditekan */
    case 27 :
    case 'q':
    exit(0);
    break;
    }
    glutPostRedisplay();
}


int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("No 4b");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    glutMainLoop();
return 0;
}
