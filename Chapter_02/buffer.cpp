#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int id;
    double x;
    double y;
};

int main() {
    // Center point of the buffers
    double centerX, centerY;

    cout << "Enter center point (x y): ";
    cin >> centerX >> centerY;

    // Number of buffer sizes
    int numBuffers;
    cout << "Enter number of buffers: ";
    cin >> numBuffers;

    double buffers[10];

    cout << "Enter the buffer sizes:\n";
    for (int i = 0; i < numBuffers; i++) {
        cout << "Buffer " << i + 1 << ": ";
        cin >> buffers[i];
    }

    // Number of points to test
    int numPoints;
    cout << "\nEnter number of points: ";
    cin >> numPoints;

    Point points[100];

    // Enter points
    for (int i = 0; i < numPoints; i++) {
        points[i].id = i + 1;

        cout << "Enter coordinates for Point " << points[i].id
             << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }

    // Check each point against every buffer
    cout << "\n========== BUFFER RESULTS ==========\n";

    for (int b = 0; b < numBuffers; b++) {

        cout << "\nPoints within " << buffers[b]
             << " km buffer:\n";

        bool found = false;

        for (int i = 0; i < numPoints; i++) {

            double distance = sqrt(
                pow(points[i].x - centerX, 2) +
                pow(points[i].y - centerY, 2)
            );

            if (distance <= buffers[b]) {
                cout << "Point " << points[i].id
                     << " (" << points[i].x
                     << ", " << points[i].y
                     << ")"
                     << " - Distance = " << distance << " km\n";

                found = true;
            }
        }

        if (!found) {
            cout << "No points found in this buffer.\n";
        }
    }

    return 0;
}
