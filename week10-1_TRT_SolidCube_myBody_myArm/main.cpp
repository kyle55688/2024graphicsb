#include <GL/glut.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();

        glTranslatef(-0.6,+0.3,0);

        glColor3f(1,0,0);

        glutSolidCube(0.3);

    glPopMatrix();

    glPushMatrix();

        glTranslatef(+0.0,+0.3,0);

        glColor3f(0,1,0);

        glScalef(1.5,0.5,0.5);

        glutSolidCube(0.3);

    glPopMatrix();

    glutSwapBuffers();

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week09-2 glutSolid¨t¦C");

    glutDisplayFunc(display);

    glutMainLoop();


}
