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
    virtual void display()
    {
        cout << "Invalid code" << endl;
    }
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    };
    void display()
    {
        cout << "The title of this video is " << title << endl;
        cout << "The rating of this video is " << rating << " out of 5" << endl;
        cout << "The length of this video is " << videolength << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    };
    void display()
    {
        cout << "The title of this text tut is " << title << endl;
        cout << "The rating of this text tut is " << rating << " out of 5" << endl;
        cout << "The text tut has " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, videolength;
    int words;

    title = "Django tutorial video";
    rating = 4.73;
    videolength = 12.5;
    CWHvideo video1(title, rating, videolength);

    title = "Django tutorial text";
    rating = 4.9;
    words = 720;
    CWHtext text1(title, rating, words);

    CWH *ptr[2];
    ptr[0] = &video1;
    ptr[1] = &text1;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}