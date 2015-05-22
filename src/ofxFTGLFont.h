#pragma once

#include "ofMain.h"
#include "ftgl.h"

class ofxFTGLFont
{    
    public:
        ofxFTGLFont();
        ~ofxFTGLFont();

        virtual void unload();
        virtual bool loadFont(string filename, float fontsize, float depth = 0, bool bUsePolygons = false);
        virtual bool loadFont(ofBuffer& buffer, float fontsize, float depth = 0, bool bUsePolygons = false);
        bool isLoaded();

        void setSize(int size);
        int getSize();
    
        void setLetterSpacing(float letterSpacing);
        float getLetterSpacing() const;

        float getLineHeight() const;
        float getAscender() const;
        float getDescender() const;
        float getXHeight() const;

        virtual ofRectangle getStringBoundingBox(wstring s, float x, float y);
        virtual ofRectangle getStringBoundingBox(string s, float x, float y);
        float stringWidth(wstring s);
        float stringWidth(string s);
        float stringHeight(wstring s);
        float stringHeight(string s);
        float getSpaceSize();
    
        virtual void drawString(wstring s, float x, float y);
        virtual void drawString(string s, float x, float y);

        FTFont* font;
    
    protected:
        bool loaded;
        FTPoint trackingPoint;
};

