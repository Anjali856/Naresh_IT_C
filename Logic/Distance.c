
Calculate distance traveled using kinematic formula s = ut + 1/2at^2.An object is moving in a straight line with a constant acceleration. Given the initial velocity (u), the constant acceleration (a), and the time elapsed (t), calculate the total distance traveled (s) by the object.The distance is calculated using the following kinematic formula:
( distance= initial_velocity × time+ 1/2 * acceleration × time * time )

The input consists of three space-separated or newline-separated floating-point numbers (or integers):
initial_velocity (u)
acceleration (a)
time (t)
Examples
Example 1:

Input

u=10, a=20, t=4
Output

The distance traveled is 200.00 meters.
Example 2:

Input

u=5, a=10, t=2
Output

Distance: 30.00
  Solution -:
  #include <stdio.h>

int main() {
    float u, a, t, s;

    scanf("%f %f %f", &u, &a, &t);

    s = u * t + 0.5 * a * t * t;

    printf("Distance: %.2f", s);

    return 0;
  }
