#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>

void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15,15,-15,15,-15,15);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    int div =100;

    for(int i=0; i<=div; i++)
    {
        float angle =2.0*3.1416*i/div;
        float x =rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));

    }
    glEnd();
}
void display()
{
     glColor3f(0.0, 0.0, 0.0);
     circle(10,10,0,0);
     glColor3f(1.0, 1.0, 1.0);
     circle(10,10,5,0);
     glFlush ();

}


int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Half_moon");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
