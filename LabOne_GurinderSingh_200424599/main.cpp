#define GRAPH_H_INCLUDED
#define MAX_NO_OF_SAMPLES 20

#include <iostream>
#include "tools.cpp"
#include "graph.h"
#include "tools.h"
#include "graph.cpp"


// MainGraph program
int main()
{
    int noOfSamples = 0;
    int samples[MAX_NO_OF_SAMPLES] = { 0 };
    bool done = false;
    cout << "Welcome to MainGraph" << endl;

    while (!done)
    {
        cout << "No Of Samples: " << noOfSamples << endl;
        switch (menu())
        {
        case 1:
            cout << "Enter number of samples on hand: ";
            noOfSamples = getInt(1, MAX_NO_OF_SAMPLES);
            break;
        case 2:
            if (noOfSamples == 0)
            {
                cout << "First enter the number of Samples." << endl;
            }
            else
            {
                cout << "Please enter the sample values: " << endl;
                getSamples(samples, noOfSamples);
            }
            break;
        case 3:
            if (noOfSamples == 0)
            {
                cout << "First enter the number of Samples." << endl;
            }
            else if (samples[0] == 0)
            {
                cout << "Firt enter the samples." << endl;
            }
            else
            {
                printGraph(samples, noOfSamples);
            }
            break;
        case 0:
            cout << "Thanks for using MainGraph.  This concludes LAB 1" << endl;
            done = true;
        }
    }
    return 0;
}
