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
    int div =180;

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
     glColor3f(1.0, 0.5, 0.0);
     circle(12,12,0,0);
     glColor3f(1.0, 1.0, 0.0);
     glPushMatrix();
     glTranslatef(-.5,-.5,0);
     circle(12,12,0,0);

     glColor3f(0.0, 0.0, 0.0);
     circle(3,3,4,4);
     glPushMatrix();
     glTranslatef(-4,4,0);
     circle(3,3,0,0);
     glPopMatrix();

     glColor3f(1.0, 1.0, 0.0);
     glPushMatrix();
     glTranslatef(-4,3.4,0);
     circle(3.25,3.25,0,0);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(4,3.4,0);
     circle(3.25,3.25,0,0);
     glPopMatrix();

     //toung
      glColor3f(0.0, 0.0, 0.0);
      circle(5,4,0,-5);

      glColor3f(1.0, 0.0, 0.0);
      circle(2,.99,0,-8);

      glColor3f(1.0, 1.0, 0.0);
      circle(5,4,0,-2);

        //eyes
     glColor3f(0.0, 0.0, 0.0);
     circle(3,3,4,3);
     glPushMatrix();
     glTranslatef(-4,3,0);
     circle(3,3,0,0);
     glPopMatrix();

    //white eye
     glColor3f(1.0, 1.0, 1.0);
     circle(2.7,2.7,4,3);
     glPushMatrix();
     glTranslatef(-4,3,0);
     circle(2.7,2.7,0,0);
     glPopMatrix();

     //black eye
     glColor3f(0.0, 0.0, 0.0);
     circle(1,1,4,2);
     glPushMatrix();
     glTranslatef(-3.5,2,0);
     circle(1,1,0,0);
     glPopMatrix();

     //white point
     glColor3f(1.0, 1.0, 1.0);
     circle(.25,.25,4,2);
     glPushMatrix();
     glTranslatef(-3.5,2,0);
     circle(.25,.25,0,0);
     glPopMatrix();













     glFlush ();

}


int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("emoji");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
