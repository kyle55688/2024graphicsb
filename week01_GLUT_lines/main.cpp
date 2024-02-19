#include <GL/glut.h> ///使用GLUT外掛

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("我自己寫的");

     glutDisplayFunc(display);

      glutMainLoop();
}
