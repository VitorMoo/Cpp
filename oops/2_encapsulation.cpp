#include<iostream>
#include<list>
using namespace std;

// Define a class for a YouTube channel
class youtubeChannel {
private:
    string name;               // Private member variable to store the channel name
    string ownerName;          // Private member variable to store the owner's name
    int subscribersCount;      // Private member variable to track the number of subscribers
    list<string> publishedVideoTitles;  // Private member variable to store the titles of published videos

public:
    // Constructor to initialize the YouTube channel with a name and owner name
    youtubeChannel(string Name, string ownername) {
        name = Name;
        ownerName = ownername;
        subscribersCount = 0;  // Initially, the channel has zero subscribers
    }

    // Method to display information about the channel
    void getInfo() {
        cout << "Youtube Channel:" << endl;
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers Count: " << subscribersCount << endl;
        cout << "Videos: " << endl;

        // Iterate through each video title in the publishedVideoTitles list
        for(string videoTitle : publishedVideoTitles) {
            cout << videoTitle << endl;
        }
        cout << endl;
    }

    // Method to increase the subscriber count
    void subscribe() {
        subscribersCount++;
    }

    // Method to decrease the subscriber count (if it's greater than zero)
    void unsubscribe() {
        if (subscribersCount > 0) {
            subscribersCount--;
        }
    }

    // Method to publish a new video with the given title
    void publishVideo(string title) {
        publishedVideoTitles.push_back(title);
    }
};

int main() {
    // Create an instance of the youtubeChannel class
    youtubeChannel ytChannel("Songs", "Vitor");

    // Publish a video, subscribe twice, and display channel information
    ytChannel.publishVideo("Don't Fear the Reaper - Cover");
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.getInfo();

    return 0;
}
