#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <Math.h>
void myinit()
{
 glClearColor(0.0, 0.0, 0.0, 1.0);
 glColor3f(1.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
 glMatrixMode(GL_MODELVIEW);
}
void display(void)
{
/* bersihkan layar */
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 0.0);
 float t = 0.0;

 //no 1
 glBegin(GL_LINE_STRIP);
 for(t = -10.0; t<=10.0; t+=0.01)
 {
    //x(t)=-0.8+1.6*t y(t)=-1+2*t
    glVertex3f (-0.8+1.6*t, 1+2*t, 0.0);
 }
 glEnd();

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
 glutInitWindowSize(400,400);
 glutInit(&argc,argv);
 glutInitWindowPosition(100,100);
 glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
 glutCreateWindow("No 1");
glutDisplayFunc(display);
 glutKeyboardFunc(kunci); myinit();
 glutMainLoop();
 return 0;
}
