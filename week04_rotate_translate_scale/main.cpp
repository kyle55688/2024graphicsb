#include <GL/glut.h> ///¨Ï¥ÎGLUT¥~±¾
float s=0.3; ///一開始原本是一倍的大小
float angle = 0;
float teapotX=0.5,teapotY=0;
void display()
{///設定背景的顏色
        glClearColor(1,1,0.9,1);///r,g,b,a
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///清背景
        glColor3f(0,1,0); ///3f就是RGB                                      ///第九行到第15行要考試
        glPushMatrix();///備份矩陣
            glRotatef(angle++,0,0,1);       ///自轉
            glTranslatef(teapotX,teapotY,0);    ///公轉
            glScalef(s,s,s);///縮放s倍
            glutSolidTeapot(0.3);
        glPopMatrix();
        glutSwapBuffers();
}

void motion(int x,int y)
{
    s=1+(x-150)/150.0; ///會變大變小的變數
    display();///重畫畫面
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("week04 mouse glScalef");
        glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMotionFunc(motion);///拖動motion的時候
      glutMainLoop();
}
