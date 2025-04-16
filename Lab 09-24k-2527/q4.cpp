#include <iostream>
using namespace std;
class MediaFile{
    private:
    string title;
    int duration;
    public:
    void set_title(string title){
        this->title=title;
    }
    void set_duration(int duration){
        this->duration=duration;
    }
    string get_title(){
        return title;
    }
    int get_duration(){
        return duration;
    }
    MediaFile(string t,int d):title(t),duration(d){}
    virtual void play()=0;
    virtual ~MediaFile(){}
};
class AudioFile:public MediaFile{
    private:
    string audioFormat;
    public:
    AudioFile(string t,int d,string format):MediaFile(t,d),audioFormat(format){}
    void set_audioFormat(string f){
        audioFormat=f;
    }
    string get_audioFormat(){
        return audioFormat;
    }
    void play()override{
        cout<<"Playing audio file: "<<get_title()<<" ("<<get_duration()<<" sec) Format: "<<get_audioFormat()<<endl;
    }
};
class VideoFile:public MediaFile{
    private:
    string resolution;
    public:
    VideoFile(string t,int d,string res):MediaFile(t,d),resolution(res){}
    void set_resolution(string r){
        resolution=r;
    }
    string get_resolution(){
        return resolution;
    }
    void play()override{
        cout<<"Playing video file: "<<get_title()<<" ("<<get_duration()<<" sec) Resolution: "<<get_resolution()<<endl;
    }
};
int main (){
    int n;
    cout<<"Enter number of media files: ";
    cin>>n;
    MediaFile* files[n];
    for(int i=0;i<n;i++){
        string type;
        cout<<"Enter media type (audio/video): ";
        cin>>type;
        string title;
        int duration;
        cout<<"Enter title: ";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter duration (in seconds): ";
        cin>>duration;
        if(type=="audio"){
            string format;
            cout<<"Enter audio format: ";
            cin>>format;
            files[i]=new AudioFile(title,duration,format);
        }
        else if(type=="video"){
            string res;
            cout<<"Enter video resolution: ";
            cin>>res;
            files[i]=new VideoFile(title,duration,res);
        }
        else{
            cout<<"Invalid type"<<endl;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        files[i]->play();
    }
    for(int i=0;i<2;i++){
        delete files[i];
    }
    return 0;
}
