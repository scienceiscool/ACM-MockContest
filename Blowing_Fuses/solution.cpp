// March 13, 2015
// Team members: Kathy Saad, Eric Abbott, Adam
// Status: Successful

#include <iostream>

using namespace std;

int main () {
  int devices = 0,
    operations = 0,
    capacity = 0,
    sequence = 0;

  while (cin >> devices) { // beginning of sequence
    if (devices == 0) {
      break;
    }
    cin >> operations;
    cin >> capacity;
    sequence++;
    // if (sequence != 1) {
    //   cout << endl; // blank line before second and on
    int * consumptions = new int[devices];
    bool * states - new bool[devices];
    for (int i = 0; i < devices; i++) {
      states[i] = false;
    }
    // states are all off
    for (int i = 0; i < devices; i++) {
      cin >> consumptions[i];
    }

    int totalUsage = 0,
      currentUsage = 0,
      deviceToggled = 0;
    bool blown = false;

    for (int i = 0; i < operations; i++) {
      // totalUsage = 0;
      currentUsage = 0;
      deviceToggled = 0;
      blown = false;

      cin >> deviceToggled;
      deviceToggled--; // device #0
      if (states[deviceToggled] == false) {
        states[deviceToggled] = true;
      }
      else {
        states[deviceToggled] = false;
      }
      // device is toggled

      // add up current usage
      for (int i = 0; i < devices; i++) {
        if (states[i]) {
          currentUsage += consumptions[i];
        }
      }
      if (currentUsage > capacity) {
        blown = true;
      }
      // update maximal usage
      if (currentUsage > totalUsage) {
        totalUsage = currentUsage;
      }
    }
    cout << "Sequence " << sequence << endl;
    if (blown) {
      cout << "Fuse was blown." << endl;
    }
    else {
      cout << "Fuse was not blown." << endl;
      cout << "Maximal power consumption was " << totalUsage" << " amperes." << endl;
    }
    // end of sequence
    blown = false;
    // delete [] consumptions;
    // delete [] states;
    cout << endl;
  }
  return 0;
}
