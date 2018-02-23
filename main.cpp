#include<windows.h>
#include<C:\GLUT\include\GL\glut.h>
#include <stdio.h>


void inicio()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10,10,-10,10);
    glClearColor(0.0,0.0,0.0,0.0);
}

void pantalla()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.3,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex3f(2.0,2.0,0.0);
    glVertex3f(8.0,2.0,0.0);
    glVertex3f(8.0,8.0,0.0);
    glVertex3f(2.0,8.0,0.0);
    glEnd();
    glFlush();

    glColor3f(1.0,0.5,0.5);
    glBegin(GL_TRIANGLES);
    glVertex3f(-8.0,2.0,0.0);
    glVertex3f(-2.0,2.0,0.0);
    glVertex3f(-5.0,8.0,0.0);
    glEnd();
    glFlush();

    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-8.0,-8.0,0.0);
    glVertex3f(-2.0,-8.0,0.0);
    glVertex3f(-4.0,-2.0,0.0);
    glVertex3f(-6.0,-2.0,0.0);
    glEnd();
    glFlush();


glColor3f(1.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(4,-6,0.0);
    glVertex3f(7,-6,0.0);
    glVertex3f(8,-4,0.0);
    glVertex3f(7,-2,0.0);
    glVertex3f(4,-2,0.0);
    glVertex3f(3,-4,0.0);

    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE
);
    glutCreateWindow("Figuras");
    inicio();
    glutDisplayFunc(pantalla);
    glutMainLoop();
    return EXIT_SUCCESS;
}
