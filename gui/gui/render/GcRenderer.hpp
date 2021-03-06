//
//  GcRenderer.hpp
//  gui
//
//  Created by working on 2018/8/18.
//  Copyright © 2018年 working. All rights reserved.
//

#ifndef GcRenderer_hpp
#define GcRenderer_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <SDL2_image/SDL_image.h>

#include "GcRect.hpp"
#include "GcColor.hpp"
#include "GcEvent.hpp"
#include "GcEventType.hpp"
#include "GcImage.hpp"
#include "GcTextRender.hpp"

namespace gc {
    
    class GcRenderer {
    public:
        GcRenderer(int width, int height, std::string title);
        ~GcRenderer();
        void Clear();
        void SetColor(GcColor color);
        void SetFont();
        void DrawRect(GcRect rect, GcColor color);
        void DrawCircle();
        void DrawLine();
        void DrawText(std::string text);
        void LoadFont();
        void DrawImage(std::string path, GcRect rect);
        void Show();
        GcEvent UpdateInput();
        void RenderFillRect(GcRect rect, GcColor color);
        TTF_Font *font;
    private:
        void GcOnMouse(SDL_Event *event, GcEvent *gcEvent);
        void GcOnKey(SDL_Event event);
        void GcUIClose();
        SDL_Window *window;
        SDL_Renderer *renderer;
        
    };

}

#endif /* GcRenderer_hpp */
