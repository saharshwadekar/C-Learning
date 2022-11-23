#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void Display(void)=0; // do-nothing function --> pure virtual function
    // now it is necessay to define thsi above function in derived class
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void Display(void)
    {
        cout << "This is an amazing Video tutorial with title  :" << title << endl
             << "with Rating                                   :" << rating << " out of 5 star" << endl
             << "length of this Video is                       :" << videoLength << " in minutes" << endl;
    }
};

class CWHText : public CWH
{
    int WordCount;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        WordCount = wc;
    }
    void Display(void)
    {
        cout << "This is an amazing Text tutorial with title :" << title << endl
             << "with Rating of Text tutorial                :" << rating << " out of 5 star" << endl
             << "Number of words in text tutorial            :" << WordCount << " Words" << endl;
    }
};

int main()
{
    string title;
    float rating, videoLength;
    int words;

    // for Video
    title = "Django tutorial";
    videoLength = 8.76;
    rating = 4.5;

    CWHVideo DjVideo(title, rating, videoLength);
    // DjVideo.Display();


    // for TExt
    title = "Django tutorial Text";
    rating = 3.8;
    words = 578;

    CWHText DjText(title, rating, words);
    // DjText.Display();

    CWH *tut[2];

    tut[0] = &DjVideo;
    tut[1] = &DjText;

    tut[0]->Display();
    cout << endl; 
    tut[1]->Display();
    return 0;
}