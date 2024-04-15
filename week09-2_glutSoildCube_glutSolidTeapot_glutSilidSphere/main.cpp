#include <GL/glut.h> ///¨Ï¥ÎGLUT¥~±¾

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(-0.6,+0.3,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(+0.0,+0.3,0);
    glutSolidCube(0.3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(+0.6,+0.3,0);
    glutSolidSphere(0.3,30,30);
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("week09-2 glutSolid系列");

     glutDisplayFunc(display);

      glutMainLoop();
}
