#include<iostream>
#include<list>
using namespace std;

class youtubeChannel {
private:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles;

public:
    youtubeChannel(string Name, string ownername) {
        name = Name;
        ownerName = ownername;
        subscribersCount = 0;
    }

    void getInfo() {
        cout << "Youtube Channel:" << endl;
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers Count: " << subscribersCount << endl;
        cout << "Videos: " << endl;

        for(string videoTitle : publishedVideoTitles) {
            cout << videoTitle << endl;
        }
        cout << endl;
    }

    void subscribe() {
        subscribersCount++;
    }

    void unsubscribe() {
        if (subscribersCount > 0) {
            subscribersCount--;
        }
    }

    void publishVideo(string title) {
        publishedVideoTitles.push_back(title);
    }
};

class SportsYoutubeChanell:public youtubeChannel{
public:
    SportsYoutubeChanell(string Name, string ownername):youtubeChannel(Name,ownername){
    }
    void comment(){
        cout<<("Very good video!");
    }
};

int main() {
    SportsYoutubeChanell sYtChannel("vitors channel","vitor");
    sYtChannel.publishVideo("Ufc 300 - react");
    sYtChannel.subscribe();
    sYtChannel.subscribe();
    sYtChannel.comment();
    sYtChannel.getInfo();


    youtubeChannel ytChannel("SingWithVitor", "Vitor");
    ytChannel.publishVideo("Don't Fear the Reaper - Cover");
    ytChannel.subscribe();
    ytChannel.unsubscribe();
    ytChannel.getInfo();

    return 0;
}
