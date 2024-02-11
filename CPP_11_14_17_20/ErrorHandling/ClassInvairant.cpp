#include <iostream>

using namespace std;

// Invariants  is a condition which is always true.. using private and const
class TV {
    private:
    int channel;
    int volume;

    public:
    TV(int c, int v) : channel(c) , volume(v) {};;

    void setChannel(int c) {
        channel = c < 0 ? 0 : c;
    }

    void setVolume(int v) {
        volume = v < 0? 0 : v;
    }

    int getChannel() const {
        return channel;
    }

    int getVolumw() const {
        return volume;
    }
};


int main() {
    return 0;
}