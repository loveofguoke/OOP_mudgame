#include<iostream>

#include "glfw3.h"

void drawPoint()
{
    /* Draw a point */
    glClearColor (0.0, 0.0, 0.0, 0.0); 
    glClear(GL_COLOR_BUFFER_BIT);
        
    glPointSize(2.0f);
    glBegin(GL_POINTS);
 
    glColor3f(1.0, 0.0, 0.0);    // Red
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();
}
void drawLint()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glClear (GL_COLOR_BUFFER_BIT);
 
    glLineWidth(2);//设置线段宽度
    glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.8,1); //定点坐标范围
 
    glVertex2f(0,-1);
    glEnd();
}
void drawTriangle()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
 
    glColor3f(1.0, 0.0, 0.0);    // Red
    glVertex3f(0.0, 1.0, 0.0);
 
    glColor3f(0.0, 1.0, 0.0);    // Green
    glVertex3f(-1.0, -1.0, 0.0);
 
    glColor3f(0.0, 0.0, 1.0);    // Blue
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();
}
int main(void)
{
    GLFWwindow* window;
 
    /* Initialize the library */
    if (!glfwInit())
        return -1;
 
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(480, 320, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
 
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
 
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        
        /*your draw*/
        // drawPoint();
        // drawLint();
        drawTriangle();
 
        /* Swap front and back buffers */
        glfwSwapBuffers(window);
 
        /* Poll for and process events */
        glfwPollEvents();
    }
 
    glfwTerminate();
    return 0;
}
