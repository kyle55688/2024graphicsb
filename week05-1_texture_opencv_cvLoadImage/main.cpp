#include <GL/glut.h> ///¨Ï¥ÎGLUT¥~±¾
#include <opencv/highgui.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    IplImage * img =cvLoadImage("c:/micky.jpg");
    cvShowImage("opencv",img);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("week05-1");

     glutDisplayFunc(display);

      glutMainLoop();
}
