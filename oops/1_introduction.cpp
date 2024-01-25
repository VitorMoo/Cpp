#include<iostream>
#include<list>
using namespace std;

// Define a class for a YouTube channel
class youtubeChannel {
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles;

    // Constructor to initialize the YouTube channel with a name and owner name
    youtubeChannel(string Name, string ownername) {
        name = Name;
        ownerName = ownername;
        subscribersCount = 0;  // Initially, the channel has zero subscribers
    }

// Method to get and display information about the channel
    void getInfo(){
    cout << "Youtube Channel 1:" << endl;
    cout << "Name: " << name << endl;
    cout << "Owner Name: " << ownerName << endl;
    cout << "Subscribers Count: " << subscribersCount << endl;
    cout << "Videos: " << endl;

    // Iterate through each video title in the publishedVideoTitles list of ytChannel
    for(string i:publishedVideoTitles){
        cout << i << endl;  // Print the title of each video
    }
    cout<<endl;
    }
};

int main() {

    youtubeChannel ytChannel("Songs", "Vitor");  // First object creation
    ytChannel.publishedVideoTitles.push_back("Don't Fear the Reaper - Cover");  // Add a video to the channel

    youtubeChannel ytChannel2("cats", "alice");  // Second object creation
    ytChannel2.publishedVideoTitles.push_back("Cute Cat Compilation");  // Add videos to the second channel
    ytChannel2.publishedVideoTitles.push_back("Playing with Yarn");

// Display information about each YouTube channel by calling the getInfo method
    ytChannel.getInfo();
    ytChannel2.getInfo();

    return 0;
}
