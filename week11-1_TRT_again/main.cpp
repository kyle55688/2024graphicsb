#include <GL/glut.h>

void myBody(){

    glColor3f(1,0,0);

    glutWireCube(0.6);

}

void myArm(){
    glPushMatrix();
    glColor3f(0,1,0);///綠色的手臂

    glScalef(1.5,0.5,0.5); ///寬變為1.5倍,高度變為0.5倍

    glutWireCube(0.3); ///方塊
    glPopMatrix();
}
float angle=0;
void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    myBody();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3,0.3,0); ///推到肩上
    glRotatef(angle++,0,0,1);///轉動
    glTranslatef(0.45/2,0,0);///把旋轉中心放中心
        myArm();///程式碼也移上去
    glPopMatrix();

    glutSwapBuffers();

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week11-1_TRT_again");

    glutDisplayFunc(display);

    glutIdleFunc(display);

    glutMainLoop();


}
