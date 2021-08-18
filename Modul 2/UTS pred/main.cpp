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
#include <iostream>
#include <math.h>

using namespace std;
float posX = 0.0;
float posY = 0.0;

void kepala(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(2.0,2.0,2.0);
       glVertex3f(-2.9607332681824, -9.6691152349061,0.0);
       glVertex3f(-3.3379541288125, -6.7052370442415,0.0);
       glVertex3f(-6.4096097082285, -3.0946945210682,0.0);
       glVertex3f(-5.6551679869684, 1.6475105839951,0.0);
       glVertex3f(-6.5712757913557, 6.0663835228042,0.0);
       glVertex3f(-3.0685106569339, 12.7485816253935,0.0);
       glVertex3f(-1.6674046031652, 6.1741609115556,0.0);
       glVertex3f(1.4042509762509, 5.8508287453013,0.0);
       glVertex3f(3.0748005018982, 12.5330268478906,0.0);
       glVertex3f(6.3081221644414, 5.6352739677984,0.0);
       glVertex3f(5.230348276927, 1.5397331952437,0.0);
       glVertex3f(5.6614578319328, -3.148583215444,0.0);
       glVertex3f(2.8053570300196, -6.8669031273686,0.0);
       glVertex3f(2.535913558141, -9.6152265405304,0.0);



    glEnd();
}

void bgmata(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
       glVertex3f(-1.128517659408, -11.8785517043106,0.0);
       glVertex3f(-2.0985141581709, -8.1063430980102,0.0);
       glVertex3f(-2.4218463244252, -4.0646910198312,0.0);
       glVertex3f(-2.1179889279823, -5.2290991901579,0.0);
       glVertex3f(-4.2540619331997, -0.1847050247794,0.0);
       glVertex3f(-4.6851714882055, 1.7552879727466,0.0);
       glVertex3f(-1.3440724369108, 0.515848002105,0.0);
       glVertex3f(-0.8051854931536, -3.8491362423283,0.0);
       glVertex3f(-1.3440724369108, -8.2141204867616,0.0);
       glVertex3f(-0.3740759381479, -8.7530074305188,0.0);
       glVertex3f(0.8653640324937, -8.2680091811374,0.0);
       glVertex3f(0.4881431718636, -3.6874701592012,0.0);
       glVertex3f(1.0809188099966, 0.3002932246021,0.0);
       glVertex3f(4.4220178612912, 1.5936218896194,0.0);
       glVertex3f(4.2064630837883, 0.0308497527235,0.0);
       glVertex3f(1.9970266143838, -1.4241449954209,0.0);
       glVertex3f(2.2125813918867, -4.0646910198312,0.0);
       glVertex3f(1.8353605312566, -6.8669031273686,0.0);
       glVertex3f(0.3264770887365, -11.7707743155592,0.0);



    glEnd();
}


void bglambang1(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(2.0,2.0,2.0);
       glVertex3f(-14.2773590870836, 11.0241434053704,0.0);
       glVertex3f(-5.1162810432112, 13.1258024860235,0.0);
       glVertex3f(1.7275831425052, 13.3952459579021,0.0);
       glVertex3f(13.2058750445336, 10.3774790728618,0.0);
       glVertex3f(11.9125463795163, 2.4019523052552,0.0);
       glVertex3f(8.0325603844645, -3.4719153816983,0.0);
       glVertex3f(2.535913558141, -9.6152265405304,0.0);
       glVertex3f(-2.9607332681824, -9.6691152349061,0.0);
       glVertex3f(-8.9962670382631, -2.9869171323168,0.0);
       glVertex3f(-12.283477395182, 4.6113887746597,0.0);




    glEnd();
}

void bglambang2(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
       glVertex3f(2.5997743959955, -9.7049259334189,0.0);
       glVertex3f(6.4707596874645, -5.5315199160539,0.0);
       glVertex3f(10.5836815596502, 1.2427043440168,0.0);
       glVertex3f(12.7611107861015, 9.5895163787468,0.0);
       glVertex3f(-0.4849170081439, 12.4322712021694,0.0);
       glVertex3f(-13.67046065721, 10.2548419757181,0.0);
       glVertex3f(-11.3115789952211, 2.8152921186761,0.0);
       glVertex3f(-8.3478558814402, -3.2331223992442,0.0);
       glVertex3f(-2.7228303797744, -9.8258942237773,0.0);


    glEnd();
}

void bglambang3(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
       glVertex3f(-15.6245764464767, 11.6169190435033,0.0);
       glVertex3f(-3.7690636838182, 14.4730198454165,0.0);
       glVertex3f(5.6614578319328, 14.3113537622893,0.0);
       glVertex3f(15.2536454308109, 11.293586877249,0.0);
       glVertex3f(13.7447619882908, 3.8569470533996,0.0);
       glVertex3f(9.1103342719789, -4.873021435467,0.0);
       glVertex3f(-0.3201872437722, -13.333546452455,0.0);
       glVertex3f(-9.9123748426503, -4.2263571029584,0.0);
       glVertex3f(-13.9001382264536, 3.9108357477754,0.0);


    glEnd();
}
void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);


    bglambang3(15.0+posX,0.0+posY, 0.0);
    bglambang1(0.0+posX,0.0+posY,0.0);
    bglambang2(-0.1+posX,0.4+posY,0.0);
    kepala(0.0+posX,0.0+posY, 0.0);
    bgmata(0.0+posX,0.0+posY,0.0);




    glFlush ();
}
void inputan(unsigned char key, int x, int y){

    if(key=='d' || key == 'D'){
        posX += 0.5;
        cout << posX << endl;
        display();
    }
    if(key == 'a' || key == 'A'){
        posX -= 0.5;
        cout << posX << endl;
        display();
    }

    if(key == 'w' || key == 'W'){
        posY += 0.5;
        cout << posY << endl;
        display();
    }
    if(key == 's' || key == 'S'){
        posY -= 0.5;
        cout << posY << endl;
        display();
    }

}
void myinit()
{
	glClearColor(1,0,0,0);  //untuk memberi warna pada background
	glColor3f(1.0, 0.0, 0.0); // color pada object
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0, 40.0, -20.0, 20.0);  // kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
