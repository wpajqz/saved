// saved.h: 标准系统包含文件的包含文件，
// 或特定于项目的包含文件。

#pragma once

#include<stdio.h>

#define SAVED_E_
#define SAVED_E_USE_NULL -255;

typedef enum SAVEDMEDIA_TYPE {
    SAVEDPKT_TYPE_NONE,
    SAVEDPKT_TYPE_AUDIO,
    SAVEDPKT_TYPE_VIDEO,
}SAVEDMEDIA_TYPE;

typedef struct SAVEDContext {
    void *codec;
}SAVEDContext;

typedef struct SAVEDPkt {
    double duration;
    double pts;
    SAVEDMEDIA_TYPE type;
    unsigned char * data;
    int size;
    void *internalPkt;//ffmpeg avpacket
    int useinternal;//1 for use internaldata
}SAVEDPkt;

typedef struct SAVEDFrame {
    double duration;
    double pts;
    SAVEDMEDIA_TYPE type;
    unsigned char * data;//raw data
    int size;
    void *internalframe;//ffmpeg avframe
    int useinternal;// 1 for use internaldata
}SAVEDFrame;


void test(void);

SAVEDContext* saved_create_context();

int saved_del_context();

int saved_init_open(SAVEDContext *ctx, const char *path,const char *options, int isencoder );

int saved_create_pkt_context();

int saved_del_pkt_context();

int saved_get_pkt();

int saved_send_pkt();

int saved_get_frame();

int saved_send_frame();

int saved_get_frame_raw();

int saved_get_pkt_raw();


// TODO: 在此处引用程序需要的其他标头。
