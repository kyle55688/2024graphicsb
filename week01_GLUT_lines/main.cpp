#include <GL/glut.h> ///�ϥ�GLUT�~��

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("�ڦۤv�g��");

     glutDisplayFunc(display);

      glutMainLoop();
}